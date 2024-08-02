#ifndef OBJWORK_H
#define OBJWORK_H

#include "gcl.h"
#include "act.h"
#include "player.h"

typedef struct {
	unsigned char no[2];
	unsigned char flag[2];
} HITSEPARAM;

typedef union {
	unsigned int l;
	HITSEPARAM param;
} HITSEUNION;

typedef struct {
	short int DownX;
	short int DownY;
	short int DownGrav;
	short int DownUkemiTime;
	short int FaintPoint;
	short unsigned int DownFlag;
	short int Kezuri;
	short int DamageHosei;
	HITSEUNION HitSE;
	HITSEUNION GuardSE;
	unsigned char dno;
	unsigned char dprob;
	unsigned char gno;
	unsigned char gprob;
	void *DamInt;
} DAMAGEPARAM;

typedef union {
	int l;
	short int w[2];
	char b[4];
	u_int ul;
	u_short uw[2];
	u_char ub[4];
	float f;
	void *p;
} ACTWORK;

typedef struct {
	unsigned int actnonexttemp;
	short unsigned int idno;
	unsigned char dirflag;
	unsigned char posdirflag;
	unsigned int actst;
	unsigned int actnonext;
	short unsigned int actno;
	short int Localid;
	short int ActTimer;
	short int HitPoint;
	void *parentWork;
	short unsigned int actnoSv;
	unsigned char ____pad;
	unsigned char padid;
	short unsigned int parentFlag;
	short unsigned int GuardSt;
	PLAYER_ENTRY *ply;
	void *graphicfunc;
	unsigned int attackst;
	unsigned int CommandFlag;
	unsigned int *CellTop;
	short unsigned int CellNo;
	short unsigned int LastCellNo;
	short unsigned int ImageNo;
	short unsigned int LastImageNo;
	unsigned int *GclTop;
	short int corex;
	short int corey;
	short int scale;
	short int scaleY;
	COLLISION *ColliAddr;
	COLLISION *ExColliAddr;
	char ColliFlag;
	char HitColliFlag;
	char DamColliFlag;
	unsigned char TensionAdd;
	void *HitColliAddr[2];
	void *DamColliAddr[3];
	COLLIPOS DamColliPos[3];
	TACTHEADER DamActHeader[3];
	short int Imagew;
	short int Imageh;
	char ColliCnt;
	char ColliNo;
	short int priority2;
	DAMAGEPARAM *HitParam;
	DAMAGEPARAM *DamParam;
	char *CommonPalette;
	char PalId;
	char LocalPalette;
	unsigned char PaletteFlag;
	char _Padding;
	short int SpriteIdTop;
	short int FBSpriteIdTop;
	short int SpriteIdMax;
	short int SpriteId;
	int *SphAddr;
	char transmode;
	char transmode2;
	char SpriteIdIdx;
	unsigned char TexSizeMax;
	unsigned int SpriteFlag;
	int posx;
	int posy;
	int xspeed;
	int yspeed;
	int HitBackx;
	int RHitBackx;
	int AdBackx;
	int gravity;
	short int parentx;
	short int parenty;
	short int angle;
	short int priority;
	unsigned int *InstTb;
	TACTHEADER ActHeader;
	TACTHEADER *ActHeaderp;
	int *InstAddr;
	short unsigned int InstSt;
	short unsigned int InstVal;
	short unsigned int AnimeNo;
	short unsigned int AnimeTime;
	unsigned char AnimeRate;
	unsigned char HitStopTime;
	unsigned char AnimeTimeMax;
	unsigned char Mark;
	unsigned char ActHitCount;
	unsigned char MaxHitCount;
	unsigned char trans;
	unsigned char trans2;
	unsigned int LandBreakActno;
	ACTWORK actwork;
} CHARACTER_WORK;

#endif // OBJWORK_H