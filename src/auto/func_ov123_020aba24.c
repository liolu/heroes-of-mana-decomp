/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK func_ov123_020a9b84();                      /* extern */
s32 func_ov123_020aba64();                          /* extern */
M2C_UNK func_ov123_020acd44();                      /* extern */
extern s32 data_ov123_020dd57c;
extern s32 data_ov123_020e3068;
extern s32 data_ov123_020e30a8;

void func_ov123_020aba24(void) {
    s32 temp_r0;

    temp_r0             = func_ov123_020aba64();
    data_ov123_020e30a8 = temp_r0;
    func_ov123_020acd44();
    if (temp_r0 == 1) {
        data_ov123_020e3068 = 6;
    } else {
        data_ov123_020e3068 = 7;
    }
    data_ov123_020dd57c = -1;
    func_ov123_020a9b84();
}
