#include "common.h"

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddX);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddB);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddO);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetB);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetO);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetX);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetZ);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetXY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddTrnsl);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetTrnsl);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetZM);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetZMX);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetZMY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddZM);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddZMY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddZMX);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddZX);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddZY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddU1);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddV1);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetU1);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetV1);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddU0);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_AddV0);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetU0);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetV0);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_MoveDes);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_MoveU0);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_MoveV0);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_MoveU1);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_MoveV1);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetUVZ);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_SetAttr);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_Trap);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_MyDesInit);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_MyDesExe);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_ReqSe);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_ReqSeNum);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Cmd_ReqName);

void Cmd_DebugNo(void) {
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", FightControl_Execute);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", SprArgSetOne);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", SprArgSet);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", SetBattleTimeStopFlag);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", GetBattleTimeStopFlag);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", ResultInitial);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", RequestResult);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", RequestAiuchi);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", BattleTimeInit);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", GetPassBattleTime);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", RequestWin);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", RequestItigeki);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", GetWinnerSide);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", IsBattleDecision);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", RefereeWorkStop);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", IsGameJudge);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", IsRoundEnd);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", BeforeFight_Init);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BC938);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", rocktb);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", duel1_8);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", BeforeFight_Heaven);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", BeforeFight_Black);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", BeforeFight_Duel);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", BeforeFight_Rock);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", BeforeFight_Skip);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", EnterFight_Init);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", ExitDemoMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", ExitFightMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", NextFightMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", RoundEndMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", WinnerDispMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", PerfectDispMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", ReplaySave);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", Accumrater);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", perfecttb);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", drawtb);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", destroytb);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", maydstroy);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF538);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF540);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF548);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF550);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF558);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF568);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF578);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF588);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF590);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF598);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", ScoreMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", DrawDispMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", LoseDispMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", DKODispMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", AfterFightMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", DestroyMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", DestroyMayMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", TimeOverMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", IntIrqMain);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF5D0);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF5D8);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF5E0);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF5E8);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF5F0);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", EnterFight_Main);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", ExitDemo_Init);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", DestroyInit);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", DestroyMayInit);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", AfterFightInit);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", TimeOverDispInit);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", IntIrq);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", sv_IntIrq);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", SetUVZ);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", RefereeExe);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/fight", EnterFight_Clear);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/fight", D_005BF6B0);
