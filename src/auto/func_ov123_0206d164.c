/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void OS_SleepThread(void *);
unsigned long long func_0200f510(void);
s32 func_0200fa98(void);
void func_0200faac(s32);
s32 func_ov123_0206d410(void);
void func_ov123_0206e76c(void *, s32, s32);
extern s32 data_ov123_020df220;
s32 func_ov123_0206d164(u8 *arg0) {
    unsigned long long t;
    u32 n;
    s32 key;
    s32 irq;
    key = func_ov123_0206d410();
    n   = 0;
    do {
        *(s32 *) (arg0 + 0x28) = key;
        *(u8 *) (arg0 + 8)     = 2;
        t                      = func_0200f510();
        *(s32 *) (arg0 + 0x10) = (s32) (t >> 16);
        func_ov123_0206e76c(arg0, 2, 0x18);
        irq = func_0200fa98();
        if (data_ov123_020df220 != 0) {
            *(s32 *) (arg0 + 4) = 1;
            OS_SleepThread(0);
        }
        func_0200faac(irq);
        if (*(u8 *) (arg0 + 8) == 4) {
            return 0;
        }
        if (data_ov123_020df220 == 0) {
            break;
        }
        n++;
    } while (n < 3);
    return 1;
}
