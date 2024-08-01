#include "common.h"

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", GetTensionVal);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", GetNegativeCoefficient);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", GetCoefficient);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", Add_TensionVal_atMove);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", Add_TensionVal_atAttackHit);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", Add_TensionVal_atAttackGuard);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", Tension_Add);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", Tension_Add_Enemy);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", Tension_Add_Damage);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", Tension_Add_Guard);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", Tension_Add_JGuard);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", Tension_Add_ByLongHair);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", Tension_Cmp);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", Tension_Dec);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", SetDefaultTension);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/tension", D_005C0710);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/tension", D_005C0718);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/tension", D_005C0720);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/tension", D_005C0728);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/tension", D_005C0730);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/tension", D_005C0738);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", TensionExecute);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", TensionAddExecute);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/tension", D_005C0758);
