#include "common.h"

INCLUDE_ASM("asm/nonmatchings/ggxeuc/opt_main", emess_init);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/opt_main", OptMain_CRTdisp);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/opt_main", set_char2num);

void kousi_disp(void) {
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/opt_main", OptionMenuInit);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/opt_main", D_005C34F8);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/opt_main", D_005C3580);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/opt_main", OptionMenuMain);
