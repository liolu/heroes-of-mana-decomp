#include "m2c.h"
extern void func_0200e1a4(void);
extern s32 func_0200dd3c(s32 a);
extern void OS_WakeupThreadDirect(s32 a);
extern void OS_EnableScheduler(void);
s32 func_ov123_020cd0e8(s32 t) {
    volatile u16 *ime = (volatile u16 *) 0x4000208;
    s32 r             = 0;
    u16 old           = *ime;
    *ime              = 0;
    func_0200e1a4();
    if (func_0200dd3c(t) == 0) {
        OS_WakeupThreadDirect(t);
        r = 1;
    }
    OS_EnableScheduler();
    (void) *ime;
    *ime = old;
    return r;
}
