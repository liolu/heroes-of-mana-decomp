/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK OS_LockMutex(M2C_UNK *);                    /* extern */
M2C_UNK func_0200e644(M2C_UNK *);                   /* extern */
extern M2C_UNK (*data_ov123_020e303c)(s32);
extern M2C_UNK data_ov123_020e30ec;

void func_ov123_020ad0e4(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 != 0) && (arg2 > 0)) {
        OS_LockMutex(&data_ov123_020e30ec);
        data_ov123_020e303c(arg1);
        func_0200e644(&data_ov123_020e30ec);
    }
}
