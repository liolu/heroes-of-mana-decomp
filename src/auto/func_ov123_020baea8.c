#include "m2c.h"
void func_ov123_020c1c4c(s32, u8, u8);
extern u8 data_ov123_020d7fec[];
extern u8 data_ov123_020e4664;
extern u8 *data_ov123_020e4674;
void func_ov123_020baea8(void) {
    u8 t = data_ov123_020d7fec[data_ov123_020e4664 - 0xB];
    func_ov123_020c1c4c(*(s32 *) (data_ov123_020e4674 + 0x10), t, t);
}
