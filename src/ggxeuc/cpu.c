#include "common.h"

void CpuDebugPrint(void) {
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUSitGuard);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUStandGuard);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUSkyGuard);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUNeutral);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUForward);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUBack);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUFDash);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUBDash);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUVJump);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUBJump);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUFJump);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPURandAttack);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUSkyRandAttack);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUATTACKKEYSET);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUAttack);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUTableChange);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", SetCPULevel);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", SetCPUFunc);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", GetCPUprobability);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUTHINKTBExecute);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUGuardCheck);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", SearchEvasionObject);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", SetDefaultThinkTb);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUEM_Damage);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUEM_Guard);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUEM_Hit);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUEM_Attack);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUExecute);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", CPUInit);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", GetCPUFlag);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", GetCPUKey);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", SetCPUStatus);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", sv_set_cpulvl);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/cpu", get_cpulvl);
