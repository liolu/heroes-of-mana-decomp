#include "m2c.h"

typedef struct Thr {
    u8 p0[0x68];
    struct Thr *next;
    u8 p1[4];
    s32 prio;
} Thr;

typedef struct Sys {
    u8 p0[0x28];
    Thr *cur;
    Thr *head;
} Sys;

extern Sys OSi_SystemCallbackInSwitchThread;
void OSi_RescheduleThread(void);
s32 func_0200fa98(void);
void func_0200faac(s32 irq);

void OS_YieldThread(void) {
    Thr *before = NULL;
    Thr *last   = NULL;
    s32 count   = 0;
    s32 irq;
    Thr *cur;
    Thr *prev;
    Thr *it;

    cur  = OSi_SystemCallbackInSwitchThread.cur;
    irq  = func_0200fa98();
    it   = OSi_SystemCallbackInSwitchThread.head;
    prev = NULL;
    if (it != NULL) {
        s32 prio = cur->prio;
        do {
            if (it == cur) {
                before = prev;
            }
            if (prio == it->prio) {
                last = it;
                count += 1;
            }
            prev = it;
            it   = it->next;
        } while (it != NULL);
    }
    if (count <= 1 || last == cur) {
        func_0200faac(irq);
        return;
    }
    if (before == NULL) {
        OSi_SystemCallbackInSwitchThread.head = cur->next;
    } else {
        before->next = cur->next;
    }
    cur->next  = last->next;
    last->next = cur;
    OSi_RescheduleThread();
    func_0200faac(irq);
}
