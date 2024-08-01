#include "common.h"

INCLUDE_ASM("asm/nonmatchings/ggxeuc/allinit", soft_reset_check);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/allinit", userinfo_init);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/allinit", FileHeapClear);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/allinit", AllInitInit);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/allinit", Reset);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/allinit", SoftReset);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/allinit", AllInitMain);
