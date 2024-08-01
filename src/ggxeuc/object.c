#include "common.h"

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/object", D_005C0890);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/object", ExcuteActJumpTbByIdno);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/object", ObjectMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/object", ObjectColliCheck);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/object", ObjectMove);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/object", ObjectExecute);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/object", ObjectCreate);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/object", ObjectCreateA);

CHARACTER_WORK* ObjectCreate_ActNo(CHARACTER_WORK* poffset, u16 idno, CREATE_ARG* arg, u16 actno) {
    CREATE_ARG newArg;

    if (arg == NULL) {
        newArg.flag = 0;
        arg = &newArg;
    }
    arg->actno = actno & 0xFFFF;
    arg->flag |= 4;
    return ObjectCreateA(poffset, idno & 0xFFFF, arg);
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/object", object_killall);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/object", D_005C0B98);
