/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_SetPeriodicAlarm from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_SetPeriodicAlarm.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long u64;
typedef long long s64;
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 pad_08[5];
    s64 period;
    s64 fire;
} OSAlarm;
extern u32 func_0200fa98(void);
extern void func_0200faac(u32);
extern void func_0200fddc(void);
extern void OSi_InsertAlarm(OSAlarm *alarm, OSTick fire);
void func_0200f844(OSAlarm *alarm, s64 fire, s64 period, OSAlarmHandler handler, void *arg) {
    u32 irq;

    if (alarm == 0 || alarm->handler != 0) {
        func_0200fddc();
    }

    irq            = func_0200fa98();
    alarm->period  = period;
    alarm->fire    = fire;
    alarm->handler = handler;
    alarm->arg     = arg;
    OSi_InsertAlarm(alarm, 0);
    func_0200faac(irq);
}
