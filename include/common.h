#ifndef COMMON_H
#define COMMON_H

#include "include_asm.h"

typedef char s8;
typedef short s16;
typedef int s32;
typedef long s64;

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;

typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;

typedef union {
	u_char u;
	char s;
} _BYTE_;

typedef union {
	u_short u;
	short int s;
} _WORD_;

typedef float f32;

#define UNK_TYPE s32
#define UNK_PTR void*
#define UNK_RET void
#define UNK_FUN_ARG void(*)(void)
#define UNK_FUN_PTR(name) void(*name)(void)
#define UNK_ARGS

#define NULL 0
#define TRUE 1
#define FALSE 0

#define ARRAYSIZEU(arr) (sizeof(arr) / sizeof(arr[0]))
#define ARRAYSIZE(arr)  (s32)(sizeof(arr) / sizeof(arr[0]))
#define CLEAR(x) { u_int i; char *p = (char*)&x; for (i = 0; i < sizeof(x); i++) *p++ = 0; }

#endif /* COMMON_H */