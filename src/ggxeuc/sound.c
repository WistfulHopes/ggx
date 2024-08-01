#include "common.h"

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", sound_rec_clear);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", SEFileRead);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", ForeStellVoiceLoad);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", VoiceLoad);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", sound_load_Common);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", BGM_Request);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", BGM_KeepRequest);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", sound_request_main);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", sound_request);

void sound_setforce(void) {
}

void sound_alloff(void) {
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", sound_Request_Init);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", sound_Init);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", SetSoundVolume);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", GetSoundVolume);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", voice_request);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", voice_off);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", privatese_request);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", SongIn);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", SongOut);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", set_bgmvol);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", SongContExe);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", ReqSongMute);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", ReqSongOut);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", ReqSongIn);

void InitSongCtrl(void) {
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", FTO_Exe);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", IsAdvertiseOff);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", stest_packload);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", kakusi_packload);

void set_sevol(void) {
}

void pack_allfree(void) {
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", init_davol);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", ggx_bgm_start);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", VoiceFree);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/sound", D_005C9980);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", BGM_Free);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", set_soundmode);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/sound", get_soundmode);
