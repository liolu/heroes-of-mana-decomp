/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern u8 data_ov123_020dd534[];
extern u8 data_ov123_020dd52c[];

s32 func_ov123_020a6778(void *p);
void func_ov123_020a68d8(void *dst, void *src, s32 n);

s32 func_ov123_020a7cec(s32 *arg0) {
    arg0[0] = func_ov123_020a6778(data_ov123_020dd534);
    func_ov123_020a68d8((u8 *) arg0 + 4, data_ov123_020dd534, arg0[0]);
    arg0[9]  = 1;
    arg0[10] = func_ov123_020a6778(data_ov123_020dd52c);
    if ((u32) arg0[10] > 0xD) {
        return -1;
    }
    func_ov123_020a68d8((u8 *) arg0 + 0x2C, data_ov123_020dd52c, arg0[10]);
    return 0;
}
