/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern void (*data_ov123_020e2e70)(s32);

s32 func_ov123_020a8cd4(s32 arg0) {
    if (data_ov123_020e2e70 != NULL) {
        data_ov123_020e2e70(arg0);
    }
    return 0;
}
