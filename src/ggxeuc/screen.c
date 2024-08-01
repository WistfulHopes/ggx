#include "common.h"

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", Change_ScreenScale);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", Set_ScreenZoom);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", Screen_MemKeep);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", Screen_Init);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", ScreenClear);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", SetYClipOff);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", GetScreenRect);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", GetScreenBGY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", World2ScreenX);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", World2ScreenY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", ObjWorld2ScreenX);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", ObjWorld2ScreenY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", ObjScreen2WorldY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", ObjWorld2ScreenV);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", GetObjScale);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", GetBGScale);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", scaleset);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", PosChaseExe);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", ScreenYOffsetExe);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", scrxyset);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", GroundShakeExe);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", SetGroundShake);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", SetGroundShakeX);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", ScreenExecute);

void ScreenDebug(void) {
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", IsScaleSettle);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", SetScreenFlag);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", OrScreenFlag);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", ClearReduceLimitTime);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/screen", ResetScreen);
