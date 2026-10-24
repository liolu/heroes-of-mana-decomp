/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u64 func_0200f510();
extern void func_ov123_02092ec0(void *, void *, s32, s32);
extern s32 func_ov123_0209302c(void *, s32);
extern s8 func_ov123_02093594(u8);
extern u8 data_ov123_020d4e88;

s32 func_ov123_020930fc(u8 *arg0) {
    u64 t;
    u8 *t3;
    u32 t2;

    t = ((func_0200f510() - *(u64 *) (arg0 + 0xCB0)) * 64) / 0x82EA;
    if (t >= 0x96 || ((u32) (*(u8 *) (arg0 + arg0[0xD0F] * 0x24 + 0x300) << 0x1C) >> 0x1C) == 1) {
        t3          = arg0 + 0x300;
        t2          = (u32) arg0[0xD0F] * 0x24;
        *(t3 + t2)  = *(t3 + t2) & ~0xF;
        arg0[0xD0F] = arg0[0xD0F] + 1;
        if ((u32) arg0[0xD10] <= (u32) * (volatile u8 *) (arg0 + 0xD0F)) {
            arg0[0xD15] = arg0[0xD15] + 1;
            arg0[0xD0F] = 0;
            arg0[0xD11] = func_ov123_02093594(arg0[0xD15]);
        }
        if ((s8) arg0[0xD11] < 0) {
            arg0[0xD15] = 0;
            return func_ov123_0209302c(arg0, 5);
        }
        *(u64 *) (arg0 + 0xCB0) = func_0200f510();
        func_ov123_02092ec0(&data_ov123_020d4e88, (void *) (arg0[0xD0F] * 0x24 + (s32) (arg0 + 0x304)), (s8) arg0[0xD11],
                            0x300000);
    }
    return 5;
}
