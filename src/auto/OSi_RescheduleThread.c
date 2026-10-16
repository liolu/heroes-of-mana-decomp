#include "m2c.h"

extern M2C_UNK OSi_SystemCallbackInSwitchThread;
extern M2C_UNK OSi_ThreadInfo;

s32 func_0200faf0(void);
void *OS_SelectThread(void);
s32 OS_SaveContext(void *arg0);
void OS_LoadContext(void *arg0);

void OSi_RescheduleThread(void) {
    u8 *cur;
    u8 *next;
    u8 *info;

    info = (u8 *) &OSi_ThreadInfo;
    if (*(u32 *) ((u8 *) &OSi_SystemCallbackInSwitchThread + 4) != 0) {
        return;
    }
    if (*(u16 *) (info + 2) == 0) {
        if (func_0200faf0() != 0x12) {
            goto switch_thread;
        }
    }
    *(u16 *) (info + 0) = 1;
    return;

switch_thread:
    cur  = *(u8 **) *(u8 **) ((u8 *) &OSi_SystemCallbackInSwitchThread + 8);
    next = (u8 *) OS_SelectThread();
    if (cur == next || next == NULL) {
        return;
    }
    if (*(u32 *) (cur + 0x64) != 2) {
        if (OS_SaveContext(cur) != 0) {
            return;
        }
    }
    {
        void (*cb)(void *, void *) = *(void (**)(void *, void *))((u8 *) &OSi_SystemCallbackInSwitchThread);
        if (cb != NULL) {
            cb(cur, next);
        }
    }
    {
        void (*cb2)(void *, void *) = *(void (**)(void *, void *))(info + 0xC);
        if (cb2 != NULL) {
            cb2(cur, next);
        }
    }
    *(u8 **) ((u8 *) &OSi_SystemCallbackInSwitchThread + 0x28) = next;
    OS_LoadContext(next);
}
