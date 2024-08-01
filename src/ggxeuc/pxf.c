#include "common.h"

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_PalReset);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_Init);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", read_clut32);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", read_clut16);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", read_pix8);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_Uncompress);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", vram_sort);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_Transfer);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_SendTexture);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_SetTexture);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_GetSize);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_Entry);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_SendPalette);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_WhiteSet);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_Free);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_PaletteClear);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_SpriteClear);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_SysSpriteClear);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_GetSysSprite);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_GetFreePalette);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_GetFreePaletteNum);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_GetFreePaletteEnd);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", SetCurrentPalette);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", IST_Load);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_SetPaletteMain);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_SetPalette);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/pxf", PXF_SetNextPalette);
