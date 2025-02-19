#include "common.h"
#include "ggxeuc/act.h"
#include "ggxeuc/objwork.h"

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_ASTFLAGCONTROL);

void af_BACK_MOTION(CHARACTER_WORK* offset, TACTNORMAL* ip) {
    u32 temp_t2 = (offset->attackst | 0x800) & 0xFFFFBFFF;
    offset->actst |= 0x40;
    offset->GuardSt &= 0xFBFF;
    offset->ActHeader.flag &= 0xFFFFDFFF;
    offset->attackst = (offset->attackst | 0x800) & 0xFFFFBFFF;
    if (ip->arg1.u == 0) {
        offset->attackst = ((offset->attackst & 0xFFFFFFEF) | 0x400) & 0xFFFFFFDF;
    }
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_RENEWAL_COLLISION);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SET_PRIORITY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SETCOLLISIONDATA);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SEMITRANS);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SCALE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_ROT);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_FIXEDEFFECT);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_COMMUNICATE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_VISUAL);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_RQ_SOUND);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_DELETECHARACTER);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_GUARD_VOICE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_DAMAGE_VOICE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_ENEMYDAMAGE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_CHAIN_CANCEL);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_FADE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_VEBALL);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_KAKUSEI);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SETXSPEED);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SETYSPEED);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SETDOWNFLAG);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SIT);

void af_AFTERIMAGE(CHARACTER_WORK *offset,TACTNORMAL *ip) {
    if (ip->arg2.u == 0)
    {       
        if (ip->arg1.u != 0) {
            offset->ply->pactst |= 2;
            return;
        }
        offset->ply->pactst &= 0xfffd;
        return;
    }
    if (ip->arg2.u != 0) {
        if (ip->arg2.u == 1)
        {       
            if (ip->arg1.u != 0) {
                offset->ply->pactst |= 0x2000;
                return;
            }
            offset->ply->pactst &= 0xdfff;
        }
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SET_DAMAGE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SET_LEVEL);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SET_ACTTYPE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SETMARK);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SETMASK);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_RENDACHANSEL);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_JUMPCANCEL);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SETGRAVITY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_REVERSE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_DRAW_NORMAL);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_DRAW_REVERSE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_PARENT_OFFSET_POS_X);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_PARENT_OFFSET_POS_Y);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_DOWN_GRAV);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_DOWN_X);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_DOWN_Y);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SET_DOWNTIME);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_DELETE_ITTAI);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_DO_NOT_CHECK_ATTACK);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_DO_NOT_CHECK_DAMAGE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_REVIVEDAMAGE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_POSBYENEMY);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_TENSION);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SETMAXHIT);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_INDEPENDENCE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_PALETTE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_FREEIMAGE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_ENEMY_HIT_SE_MODE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_ENEMY_GUARD_SE_MODE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_FLASH);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_GROUNDSHAKE);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_KEZURI);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_DAMAGEHOSEI);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_MUTEKI);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_NOTHROW);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_RANDPOS);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_FAINT);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_JUMPCONTROL);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_SETLOCALID);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", af_GUARD);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", GetInstSize);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", InstTbInit);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", GetInstTb);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", SetAnimeData);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", GetCellBeginAddr);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", SetParentPosExNo);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", SetParentPosEx);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", ParentFlagSet);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", ExePosByEnemy);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", NextInstExecute);

void SetAnimeNo(CHARACTER_WORK* offset, int no) {
    DAMAGEPARAM* hitParam;

    offset->AnimeNo = no;
    if (offset->InstTb != NULL) {
        TACTHEADER* actInst = (TACTHEADER*)offset->InstTb[no];
        offset->ActHeaderp = actInst;
        offset->ActHeader.flag = actInst->flag;
        *(s32*)&offset->ActHeader.lvflag = *(s32*)&actInst->lvflag; // sets the last 4 bytes of ActHeader in one instruction
        SetDamage(offset, (u16) offset->ActHeader.damage);
        hitParam = offset->HitParam;
        offset->SpriteFlag &= 0xFFBFFFFD;
        offset->InstAddr = offset->ActHeaderp + 1;
        
        if (hitParam != NULL) {
            hitParam->HitSE.l = 0;
            hitParam->DownX = -1;
            hitParam->DownY = -1;
            hitParam->DownGrav = -1;
            hitParam->DownUkemiTime = -1;
            hitParam->DamageHosei = -1;
            hitParam->DownFlag = 0;
            hitParam->FaintPoint = 0x10;
            hitParam->Kezuri = 0x10;
            offset->HitParam->GuardSE.l = 0;
            offset->HitParam->DamInt = NULL;
            SetDefaultHitVoice(offset);
        }
        
        offset->trans = 0xFF;
        offset->trans2 = 0xFF;
        offset->transmode = 0;
        offset->transmode2 = 0;
        
        if (!(offset->InstSt & 0x4000)) {
            offset->scale = -1;
            offset->scaleY = -1;
        }
        
        offset->Mark = 0;
        offset->ActHitCount = 0;
        offset->PaletteFlag = 0;
        offset->MaxHitCount = 0x20;
        offset->InstSt = 0x102;
        SetDefaultTension(offset);
        ExCollisionClear(offset);
    }
}

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", SetAnimeNoLoop);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", HitStopTimeExe);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", ForceStopTimeExe);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", HitStopTimeExeRoot);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", SetForceStopTime);

INCLUDE_ASM("asm/nonmatchings/ggxeuc/act", ExeAnime);
