#include "common.h"

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Credit_Init);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_IsStartWait);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_Request_Start);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_SetContinue);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_SetContinueTime);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_SetGameOver);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", CreditTask);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_IsPlaying);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_IsNameEntry);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_IsContenue);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", CreditExecute);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", GetCreditInfo);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", GetScoreInfo);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_GetCoinMsg);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_GetCreditMsg);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_CenterFontDraw);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_NameEntry);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", DispCreditMsg);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", disp_koron);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", disp_koron_one);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", DispWinnerCredit);

void CreditClr(void) {
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_IsCreditEnough);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/credit", Cr_GetCrditCnt);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/credit", valtb.9);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/credit", timetb.10);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/credit", D_005BC850);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/credit", D_005BC868);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/credit", D_005BC870);

INCLUDE_RODATA("asm/nonmatchings/ggxeuc/credit", D_005BC878);
