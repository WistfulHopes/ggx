from argparse import ArgumentParser, Namespace
import base64
import sys

from nacl.encoding import HexEncoder
from nacl.public import SealedBox
from nacl.signing import VerifyKey

from ..core import connect, read_config, verify_with_magic
from .base import Command
from .util import ask


class VouchCommand(Command):
    command = "vouch"
    help = "Give someone access to the central server."

    @staticmethod
    def add_arguments(parser: ArgumentParser) -> None:
        parser.add_argument(
            "magic",
            help="Opaque hex string generated by 'setup'.",
        )

    @staticmethod
    def run(args: Namespace) -> None:
        run_vouch(args.magic)


def run_vouch(magic: str) -> None:
    try:
        vouch_data = base64.b64decode(magic.encode("utf-8"))
        verify_key = VerifyKey(vouch_data[:32])
        signed_nickname = vouch_data[32:]
        msg = verify_with_magic(b"NAME", verify_key, signed_nickname)
        nickname = msg.decode("utf-8")
    except Exception:
        print("Could not parse data!")
        sys.exit(1)

    try:
        config = read_config()
        port = connect(config)
        port.send_json(
            {
                "method": "vouch",
                "who": verify_key.encode(HexEncoder).decode("utf-8"),
                "signed_name": HexEncoder.encode(signed_nickname).decode("utf-8"),
            }
        )
        port.receive_json()
    except Exception as e:
        print(f"Error: {e}")
        sys.exit(1)

    if not ask(f"Grant permuter server access to {nickname}", default=True):
        return

    try:
        port.send_json({})
        port.receive_json()
    except Exception as e:
        print(f"Failed to grant access: {e}")
        sys.exit(1)

    assert config.server_address, "checked by connect"
    assert config.server_verify_key, "checked by connect"
    data = config.server_verify_key.encode() + config.server_address.encode("utf-8")
    token = SealedBox(verify_key.to_curve25519_public_key()).encrypt(data)
    print("Granted!")
    print()
    print("Send them the following token:")
    print(base64.b64encode(token).decode("utf-8"))
