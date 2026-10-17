/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK OS_LockMutex(M2C_UNK *);                    /* extern */
M2C_UNK func_0200e644(M2C_UNK *);                   /* extern */
extern s32 (*data_ov123_020e3034)(s32);
extern M2C_UNK data_ov123_020e30ec;

s32 func_ov123_020ad114(void *arg0, s32 arg1) {
    s32 temp_r4;

    if (arg1 > 0) {
        OS_LockMutex(&data_ov123_020e30ec);
        temp_r4 = data_ov123_020e3034(arg1);
        func_0200e644(&data_ov123_020e30ec);
        return temp_r4;
    }
    return 0;
}
