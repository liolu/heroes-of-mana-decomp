#include "m2c.h"
void Routine_SetEvPosFadeIn(void);
void Routine_SetEvPos(s32);
void Routine_SoundEffect(s32);
void WaitSyncCounter(u16);

void func_ov022_020d0a78(s32 arg0) {
    s32 i;
    s32 n;
    if (arg0 == 1) {
        n = 1;
    } else if (arg0 == 2) {
        n = 2;
    }
    Routine_SetEvPosFadeIn();
    Routine_SetEvPos(arg0);
    Routine_SoundEffect(0x27A);
    i = 0;
    if (n <= 0) {
        return;
    }
    do {
        WaitSyncCounter(0x10);
        i += 1;
    } while (i < n);
}
