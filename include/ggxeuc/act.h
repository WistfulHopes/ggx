#ifndef ACT_H
#define ACT_H

struct CHARACTER_WORK;

typedef struct {
	u_char id;
	_BYTE_ arg1;
	_WORD_ arg2;
} TACTNORMAL;

typedef struct {
	u_int flag;
	u_short lvflag;
	u_char damage;
	u_char flag2;
} TACTHEADER;

typedef struct {
	void *func;
	int size;
} ACT_FUNC_SIZE;

typedef struct {
	u_char id;
	u_char pad1;
	u_short AnimeNo;
	u_short idno;
	u_short Localid;
	u_int Kind;
	u_short Flag;
	u_short Effect;
} TINITINSTANCE;

extern ACT_FUNC_SIZE Act_Func_Size_Tb[0];
extern u_int *InstTbWork;
extern short unsigned int StopTime1P;
extern short unsigned int StopTime2P;
extern u_int *InstTbP;

void af_RENEWAL_COLLISION();
int GetInstSize(unsigned char id);
void InstTbInit();
void* GetInstTb(void *in);
void SetAnimeData();
TACTNORMAL* GetCellBeginAddr(int no);
int SetParentPosExNo(int no);
void SetParentPosEx();
void ParentFlagSet(struct CHARACTER_WORK *poffset, TINITINSTANCE *ins);
void ExePosByEnemy();
void NextInstExecute();
void SetAnimeNo(struct CHARACTER_WORK* offset, int no);
void SetAnimeNoLoop(int no);
void HitStopTimeExeRoot();
void SetForceStopTime(short int t1p, short int t2p);
void ExeAnime();

#endif // ACT_H