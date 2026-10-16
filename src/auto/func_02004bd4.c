/* compiler: 1.2/sp3 */
#include "m2c.h"
extern struct SndCtx {
    s32 a;
    s32 b;
    s32 c;
    u32 buf0;
    u32 buf1;
    u32 size;
    s32 g;
    s32 h;
    s32 lockCh;
    u32 t0;
    u32 t1;
    s32 sh;
} data_020371b0;
extern u8 data_02037170[];
void SND_StopTimer(u32, u32, u32, u32);
s32 SND_GetCurrentCommandTag(void);
void SND_FlushCommand(s32);
void SND_WaitForCommandProc(s32);
s32 func_0200e3ec(void *, void *, s32);
void NNS_SndUnlockCapture(s32);
void NNS_SndUnlockChannel(s32);
void NNS_SndFreeAlarm(s32);
void SND_SetOutputSelector(s32, s32, s32, s32);

void func_02004bd4(void) {
    struct SndCtx *c = &data_020371b0;
    s32 tag;
    s32 hasAlarm;
    if (c->a == 0) {
        return;
    }
    hasAlarm = c->sh >= 0;
    SND_StopTimer(c->t0, c->t1, hasAlarm ? 1 << c->sh : 0, 0);
    if (hasAlarm) {
        tag = SND_GetCurrentCommandTag();
        SND_FlushCommand(1);
        SND_WaitForCommandProc(tag);
        while (func_0200e3ec(data_02037170, NULL, 0) != 0) {
        }
    }
    if (c->t1 != 0) {
        NNS_SndUnlockCapture(c->t1);
    }
    if (c->lockCh != 0) {
        NNS_SndUnlockChannel(c->lockCh);
    }
    if (hasAlarm) {
        NNS_SndFreeAlarm(c->sh);
    }
    if (c->b == 1) {
        SND_SetOutputSelector(0, 0, 0, 0);
    }
    c->a = 0;
}
