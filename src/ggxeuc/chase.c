#include "common.h"
#include "ggxeuc/js_act.h"

typedef struct {
	short int time;
	short int createtime;
	int x;
	int y;
	short int z;
} CHASE_EFFECT;

typedef struct {
	int scrx;
	int offx;
	int scry;
	int offy;
	int y;
	int index;
	unsigned char height[64];
} WATERFALL;

int FadeOutVal;
int ChaseTime;
float transval;
int ChaseFlag;
int trans_bg_id;
extern WATERFALL wtf[6];

s32 IsChaseFade(void) {
    return ChaseFlag;
}

f32 GetChaseTrnsl(s32 arg0) {
    f32 val;

    if (ChaseFlag != 0) {
        if (arg0 < trans_bg_id) {
            val = 0.0f;
            return val;
        }
        val = transval;
        if (arg0 != trans_bg_id) {
            val = 1.0f;
            return val;
        }
        return val;
    }
    return 1.0f;
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/chase", SetChaseTrnsl);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/chase", ChaseFadeOutExe);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/chase", IsChaseEffectDraw);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/chase", WaterFallDraw);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/chase", TokorotenDraw);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/chase", ChaseEffectExe);

void ChaseInit(void) {
    wtf->scrx = 0x280;
    wtf[2].scrx = 0x280;
    wtf[2].offx = -8;
    wtf[4].scry = 0x190;
    wtf[5].offx = 8;
    wtf[5].scry = 0x320;
    wtf[5].offy = 0;
    wtf->offx = -8;
    wtf->scry = 0;
    wtf->offy = 0;
    wtf[1].scrx = 0x280;
    wtf[1].offx = -8;
    wtf[1].scry = 0x190;
    wtf[1].offy = 0;
    wtf[2].scry = 0x320;
    wtf[2].offy = 0;
    wtf[3].scrx = 0;
    wtf[3].offx = 8;
    wtf[3].scry = 0;
    wtf[3].offy = 0;
    wtf[4].scrx = 0;
    wtf[4].offx = 8;
    wtf[4].offy = 0;
    wtf[5].scrx = 0;
    FadeOutVal = -0x64;
    transval = 1.0f;
    ChaseTime = 0;
    ChaseFlag = 0;
    trans_bg_id = 0;
    JSTokorotenFlag = 0;
}

void ChaseEnd(void) {
}
