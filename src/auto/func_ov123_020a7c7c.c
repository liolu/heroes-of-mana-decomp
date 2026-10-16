/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a8cd4();                          /* extern */
extern s32 data_ov123_020dd4d0;

s32 func_ov123_020a7c7c(s32 arg0) {
    if (arg0 == -1) {
        data_ov123_020dd4d0 = arg0;
        return 0;
    }
    if (data_ov123_020dd4d0 != arg0) {
        data_ov123_020dd4d0 = arg0;
        return func_ov123_020a8cd4();
    }
    return 0;
}
