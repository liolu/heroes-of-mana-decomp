/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Os_Alarm_Set from https://github.com/RonyxDumb/mkds src/arm9/0200f950_Os_Alarm_Set.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef struct OSiAlarm OSAlarm;
typedef u64 OSTick;
extern OSTick func_0200f510(void);
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;

    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;

    OSTick period;
    OSTick start;
};
extern void func_0200f7d8(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg);
extern void func_0200fddc(void);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_0200fa98(void);
extern OSIntrMode func_0200faac(OSIntrMode state);
extern void func_0200f6ac(OSAlarm *alarm, OSTick fire);
void func_0200f7d8(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg) {
    if (!alarm || alarm->handler) {
        func_0200fddc();
    }

    OSIntrMode enabled = func_0200fa98();

    alarm->period = 0;

    alarm->handler = handler;
    alarm->arg     = arg;

    func_0200f6ac(alarm, func_0200f510() + tick);

    (void) func_0200faac(enabled);
}
