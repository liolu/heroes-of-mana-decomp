/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern s32 (*data_ov123_020e2e6c)(s32);

s32 func_ov123_020a69b8(void *arg0, s32 arg1) {
    if (arg1 > 0) {
        return data_ov123_020e2e6c(arg1);
    }
    return 0;
}
