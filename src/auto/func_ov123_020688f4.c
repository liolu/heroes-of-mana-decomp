/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_0200fa98(void);
extern void func_0200faac(s32);
extern void func_ov123_020678a4(void);
extern void func_ov123_020693f0(void);
extern u16 func_0200f498(void);
extern void OS_InitTick(void);
extern u16 func_0200f68c(void);
extern void OS_InitAlarm(void);
extern void OS_CreateAlarm(void *);
extern u8 *data_ov123_020df180;

s32 func_ov123_020688f4(u8 *buf, u32 size) {
    s32 irq = func_0200fa98();
    if (data_ov123_020df180 != 0) {
        func_0200faac(irq);
        return 1;
    }
    if (buf == 0) {
        func_0200faac(irq);
        return 1;
    }
    if (((u32) buf & 0x1f) != 0) {
        func_0200faac(irq);
        return 1;
    }
    if (size < 0x2300) {
        func_0200faac(irq);
        return 6;
    }
    data_ov123_020df180                     = buf;
    *(s32 *) (buf + 0x2260)                 = 1;
    *(u16 *) (data_ov123_020df180 + 0x2280) = 0;
    *(u16 *) (data_ov123_020df180 + 0x2268) = 0;
    *(u8 *) (data_ov123_020df180 + 0x226a)  = 0;
    *(u8 *) (data_ov123_020df180 + 0x226b)  = 0;
    *(u16 *) (data_ov123_020df180 + 0x2282) = 0;
    *(u16 *) (data_ov123_020df180 + 0x22f8) = 0;
    func_ov123_020678a4();
    func_ov123_020693f0();
    if (func_0200f498() == 0) {
        OS_InitTick();
    }
    if (func_0200f68c() == 0) {
        OS_InitAlarm();
    }
    OS_CreateAlarm(data_ov123_020df180 + 0x22cc);
    func_0200faac(irq);
    return 0;
}
