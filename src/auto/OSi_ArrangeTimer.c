#include "m2c.h"

typedef struct Alarm {
    void (*handler)(u32);
    u32 arg;
    u32 pad8;
    u64 fire;
    struct Alarm *prev;
    struct Alarm *next;
    u64 period;
} Alarm;

typedef struct {
    u32 w0;
    Alarm *head;
    Alarm *tail;
} AlarmList;

extern u32 SDK_AUTOLOAD_DTCM_START;
extern AlarmList OSi_UseAlarm;
extern u32 OS_DisableIrqMask(u32);
extern u64 func_0200f510(void);
extern void OSi_SetTimer(Alarm *);
extern void OSi_InsertAlarm(Alarm *, u32, u32);

void OSi_ArrangeTimer(void) {
    Alarm *a;
    u64 now;
    void (*h)(u32);
    u8 *d;
    Alarm *nx;

    *(volatile u16 *) 0x04000106 = 0;
    OS_DisableIrqMask(0x10);
    d = (u8 *) &SDK_AUTOLOAD_DTCM_START;
    *(u32 *) (d + 0x3ff8) |= 0x10;
    now = func_0200f510();
    a   = OSi_UseAlarm.head;
    if (a == NULL) {
        return;
    }
    if (now < a->fire) {
        OSi_SetTimer(a);
        return;
    }
    nx                = a->next;
    OSi_UseAlarm.head = nx;
    if (nx == NULL) {
        OSi_UseAlarm.tail = NULL;
    } else {
        nx->prev = NULL;
    }
    h = a->handler;
    if (a->period == 0) {
        a->handler = NULL;
    }
    if (h != NULL) {
        h(a->arg);
    }
    if (a->period != 0) {
        a->handler = h;
        OSi_InsertAlarm(a, 0, 0);
    }
    if (OSi_UseAlarm.head != NULL) {
        OSi_SetTimer(OSi_UseAlarm.head);
    }
    return;
}
