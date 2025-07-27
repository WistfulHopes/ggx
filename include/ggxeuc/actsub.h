#ifndef ACTSUB_H
#define ACTSUB_H

#include "ggxeuc/objwork.h"


int SetActNo(CHARACTER_WORK *offset, unsigned int no);
void SetActNoNext(unsigned int no);
int SetAttackActNo(unsigned int no);
int SetChangeFrameAnime(short unsigned int no);
int SetChangeFrameAnimeSameActno();
void SetXSpeed(int xspeed);
void SetShakeoffX();
void AddXSpeedCmp(short int xspeed, int power);
void AddXSpeed(short int xspeed);
void ParXSpeed(float par);
void MinXSpeed(short int min);
void MaxXSpeed(short int max);
void AddYSpeed(short int yspeed);
void ParYSpeed(float par);
void ParInertia(float par);
void SetHitBackXSpeed(short int xspeed);
void SetADHitBackXSpeed(short int xspeed);
void SetDashXSpeed(short int xspeed);
void JumpControl();
void JumpControlMain();
CHARACTER_WORK* GetOtherPlayer();
void DirectionDirectChange();
void DirectionEnemyReverse();
void DirectionEnemySame();
short unsigned int DirectionDirectGet();
void SetPriorityMain(int PriAdd, int flag);
void SetPriority(int PriAdd);
void HomingExecute();
void SetChainFlag();
void ParentPosLink(CHARACTER_WORK *poffset);
void ParentExe();
void ParentExe_Position();
void DeleteIttai(CHARACTER_WORK *p);
int GetPlayerDist();
int GetPlayerDistOff();
int GetPlayerDisty();
int GetPlayerDistyOff();
void SetInertia();
void InertiaExe();
int IsChase();
int IsBattleEnd();
int IsKirimomi();
void CreatePerfectGuardEffect();
void PerfectGuardEnableCheck();
void PerfectGuardOnCheck();
int GetEntryOrder();
int EnterActionSet();
int EnterActionSet_story(int side);
int PreEnterActionSet();
int WinActionDecide();
int WinActionSet();
int LoseActionSet();
void SetSemiTrans(char trans, short int transmode);
void SetPlJumpSpeed();
void SetNormalBegin();
void SetDustBegin();
void ObjIndependence();
void ObjParentCutOff();
void SetParentPosX(short int pos);
void SetParentPosY(short int pos);
void GetColliCenter(COLLISION *colli, COLLIPOS *pos);
int ItigekiCommandCheck(void **functb, int actITIGEKI, int actOVERKILLMODE);
void OutSideEliminate();
void OutSideEliminateJust();
void ScreenSideEliminate();
void SetSkyJumpCount();
void SetSkyDashCount();
int GetXMove(int val);
void MovePosX(int val);
void MovePosY(int val);
void RandMove(unsigned int val);
void SetDefaultHitVoice();
void SetDamage(short unsigned int damage);
void RenewalCollision();

#endif // ACTSUB_H
