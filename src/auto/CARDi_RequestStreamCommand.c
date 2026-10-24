#include "m2c.h"

/*
 * Card command context shared by the backup-card driver.
 * The layout matches the "UnkCardCommon" structure used by CARDi_SetTask.
 */
typedef volatile u32 vu32;
typedef volatile s32 vs32;

typedef struct CardCommand {
    u32 state;
} CardCommand;

typedef struct CardCommon CardCommon;
typedef void (*CardTask)(CardCommon *common);
typedef void (*CardCallback)(void *arg);

typedef struct CardCommon {
    CardCommand *cmd;         /* 0x00 */
    u32 unk_004;              /* 0x04 */
    vs32 unk_008;             /* 0x08 */
    vs32 unk_00c;             /* 0x0c */
    void *unk_010[2];         /* 0x10 */
    u32 unk_018;              /* 0x18 */
    void *src;                /* 0x1c */
    void *dst;                /* 0x20 */
    u32 size;                 /* 0x24 */
    u32 unk_028;              /* 0x28 */
    u32 command;              /* 0x2c */
    u32 commandArg;           /* 0x30 */
    u32 mode;                 /* 0x34 */
    CardCallback callback;    /* 0x38 */
    void *callbackArg;        /* 0x3c */
    CardTask task;            /* 0x40 */
    u8 unk_044[0x104 - 0x44];
    void *thread;             /* 0x104 */
    u32 unk_108;              /* 0x108 */
    u32 unk_10c[2];           /* 0x10c */
    vu32 flags;               /* 0x114 */
} CardCommon;

typedef struct OSiThreadInfo {
    void *next;
    void *entryPoint;
} OSiThreadInfo;

extern CardCommon cardi_common;
extern OSiThreadInfo OSi_ThreadInfo;

M2C_UNK OSi_ReferSymbol(s32);
s32 func_0200fa98();
M2C_UNK func_0200faac(s32);
void OS_SleepThread(s32 arg0);
extern void CARDi_SetTask(CardTask task);
extern void CARDi_RequestStreamCommandCore(CardCommon *common);

s32 CARDi_RequestStreamCommand(void *src, void *dst, u32 size, CardCallback callback, void *callbackArg, s32 isAsync,
                               u32 command, u32 commandArg, u32 mode) {
    void *common = &cardi_common;
    s32 irqFlags;

    OSi_ReferSymbol(0x2000B80);
    irqFlags = func_0200fa98();
    while (((CardCommon *) common)->flags & 4) {
        OS_SleepThread((s32) & ((CardCommon *) common)->unk_10c);
    }
    ((CardCommon *) common)->flags |= 4;
    ((CardCommon *) common)->callback    = callback;
    ((CardCommon *) common)->callbackArg = callbackArg;
    func_0200faac(irqFlags);
    ((CardCommon *) common)->src        = src;
    ((CardCommon *) common)->dst        = dst;
    ((CardCommon *) common)->size       = size;
    ((CardCommon *) common)->command    = command;
    ((CardCommon *) common)->commandArg = commandArg;
    ((CardCommon *) common)->mode       = mode;
    if (isAsync) {
        CARDi_SetTask(CARDi_RequestStreamCommandCore);
        return 1;
    }
    cardi_common.thread = OSi_ThreadInfo.entryPoint;
    CARDi_RequestStreamCommandCore(common);
    return ((CardCommon *) common)->cmd->state == 0;
}
