/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_InsertAlarm from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_InsertAlarm.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef long long s64;
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSAlarm OSAlarm;
struct OSAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;
    OSTick period;
    OSTick start;
};
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
extern OSTick func_0200f510(void);
extern struct {
    u16 useAlarm;
    u16 pad;
    struct OSiAlarmQueue queue;
} OSi_UseAlarm;
extern void OSi_SetTimer(OSAlarm *alarm);
extern void OSi_InsertAlarm(OSAlarm *alarm, OSTick fire);
void OSi_InsertAlarm(OSAlarm *alarm, OSTick fire) {
    OSAlarm *prev;
    OSAlarm *next;

    if (alarm->period > 0) {
        OSTick tick = func_0200f510();

        fire = alarm->start;
        if (alarm->start < tick) {
            fire += alarm->period * ((tick - alarm->start) / alarm->period + 1);
        }
    }

    alarm->fire = fire;

    for (next = OSi_UseAlarm.queue.head; next; next = next->next) {

        if ((s64) (fire - next->fire) >= 0) {
            continue;
        }

        alarm->prev = next->prev;
        next->prev  = alarm;
        alarm->next = next;
        prev        = alarm->prev;

        if (prev) {
            prev->next = alarm;
        } else {
            OSi_UseAlarm.queue.head = alarm;
            OSi_SetTimer(alarm);
        }

        return;
    }

    alarm->next             = 0;
    prev                    = OSi_UseAlarm.queue.tail;
    OSi_UseAlarm.queue.tail = alarm;
    alarm->prev             = prev;

    if (prev) {
        prev->next = alarm;
    } else {
        OSi_UseAlarm.queue.head = OSi_UseAlarm.queue.tail = alarm;
        OSi_SetTimer(alarm);
    }
}
