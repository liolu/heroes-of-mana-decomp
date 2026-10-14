/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_Sleep from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_Sleep.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long u64;
typedef u64 OSTick;
typedef struct OSAlarm OSAlarm;
typedef void (*OSAlarmHandler)(void *arg);
extern void func_0200f69c(OSAlarm *alarm);
extern void func_0200f7d8(OSAlarm *alarm, OSTick fire_tick, OSAlarmHandler handler, void *arg);
extern int func_0200fa98(void);
extern void func_0200faac(int mask);
extern void func_0200dd50(void *arg);
extern void func_0200e14c(void *arg);
extern void **data_0203863c[];
void func_0200e0a4(u32 arg0) {
    char alarm[0x2c];
    void *thread;
    int mask;

    func_0200f69c((OSAlarm *) alarm);
    thread                              = data_0203863c[2][0];
    mask                                = func_0200fa98();
    *(void **) ((char *) thread + 0xb0) = alarm;
    func_0200f7d8((OSAlarm *) alarm, (u64) arg0 * 0x82eaULL >> 6, func_0200e14c, &thread);
    while (thread != 0) {
        func_0200dd50(0);
    }
    func_0200faac(mask);
}
