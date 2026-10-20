/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_0200fa98(void);
void func_0200faac(s32);
void SND_RecvCommandReply(s32);
void DC_FlushRange(void *, u32);
s32 func_020118cc(s32, s32, s32);
void OS_SpinWait(s32);
void RequestCommandProc(void);

typedef struct {
    s32 head;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
} SndFreeList;

extern SndFreeList sFreeList;
extern u8 sCommandArray[];
extern s32 sWaitingCommandListQueue[];

s32 SND_FlushCommand(s32 arg0) {
    s32 saved;
    u32 i;
    u32 val;

    saved = func_0200fa98();
    if (sFreeList.f8 == 0) {
        func_0200faac(saved);
        return 1;
    }
    if (sFreeList.f1C >= 8) {
        if (!(arg0 & 1)) {
            func_0200faac(saved);
            return 0;
        }
        do {
            SND_RecvCommandReply(1);
        } while (sFreeList.f1C >= 8);
    }
    DC_FlushRange(sCommandArray, 0x1800);
    if (func_020118cc(7, sFreeList.f8, 0) < 0) {
        if (!(arg0 & 1)) {
            func_0200faac(saved);
            return 0;
        }
        while (func_020118cc(7, sFreeList.f8, 0) < 0) {
            func_0200faac(saved);
            OS_SpinWait(0x64);
            saved = func_0200fa98();
        }
    }
    if (arg0 & 2) {
        RequestCommandProc();
    }
    sWaitingCommandListQueue[sFreeList.f18] = sFreeList.f8;
    sFreeList.f18 += 1;
    if (sFreeList.f18 > 8) {
        sFreeList.f18 = 0;
    }
    sFreeList.f8 = 0;
    sFreeList.fC = 0;
    sFreeList.f1C++;
    sFreeList.f20++;
    func_0200faac(saved);
    return 1;
}
