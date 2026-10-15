/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_Sleep from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_Sleep.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long u64;
typedef u64 OSTick;
typedef struct OSAlarm OSAlarm;
typedef void (*OSAlarmHandler)(void *arg);
extern void OS_CreateAlarm(OSAlarm *alarm);
extern void OS_SetAlarm(OSAlarm *alarm, OSTick fire_tick, OSAlarmHandler handler, void *arg);
extern int func_0200fa98(void);
extern void func_0200faac(int mask);
extern void OS_SleepThread(void *arg);
extern void OSi_SleepAlarmCallback(void *arg);
extern void **OSi_SystemCallbackInSwitchThread[];
void func_0200e0a4(u32 arg0) {
    char alarm[0x2c];
    void *thread;
    int mask;

    OS_CreateAlarm((OSAlarm *) alarm);
    thread                              = OSi_SystemCallbackInSwitchThread[2][0];
    mask                                = func_0200fa98();
    *(void **) ((char *) thread + 0xb0) = alarm;
    OS_SetAlarm((OSAlarm *) alarm, (u64) arg0 * 0x82eaULL >> 6, OSi_SleepAlarmCallback, &thread);
    while (thread != 0) {
        OS_SleepThread(0);
    }
    func_0200faac(mask);
}
