/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK func_ov123_020a8cac();                      /* extern */
extern s32 data_ov123_020e20a4;
extern s32 data_ov123_020e20ac;

void func_ov123_020a8060(void) {
    if (data_ov123_020e20ac != 0) {
        func_ov123_020a8cac();
        data_ov123_020e20ac = 0;
    }
    if (data_ov123_020e20a4 != 0) {
        func_ov123_020a8cac();
        data_ov123_020e20a4 = 0;
    }
}
