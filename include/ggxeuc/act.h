#ifndef ACT_H
#define ACT_H

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

#endif // ACT_H