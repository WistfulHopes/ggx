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

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", TensionExecute);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/tension", TensionAddExecute);
