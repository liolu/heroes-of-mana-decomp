#include "m2c.h"

extern s32 sCaptureLock;
extern s32 sAlarmLock;
extern s32 sChannelLock;
M2C_UNK SND_UnlockChannel(s32, M2C_UNK);

void NNSi_SndInitResourceMgr(void) {
    sChannelLock = 0;
    sCaptureLock = 0;
    sAlarmLock   = 0;
}

void NNS_SndFreeAlarm(s32 arg0) {
    sAlarmLock &= ~(1 << arg0);
}

void NNS_SndUnlockCapture(s32 arg0) {
    sCaptureLock &= ~arg0;
}

void NNS_SndUnlockChannel(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    SND_UnlockChannel(arg0, 0);
    sChannelLock &= ~arg0;
}
