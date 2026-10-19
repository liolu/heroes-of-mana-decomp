#include "m2c.h"

s32 func_ov123_0209a9fc(M2C_UNK);                          /* extern */
extern void *data_ov123_020e2048;

void func_ov123_020a4bd4(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(data_ov123_020e2048, M2C_UNK(**)(M2C_UNK, s32), 0x60C) == NULL) {
        return;
    }
    M2C_FIELD(data_ov123_020e2048, M2C_UNK(**)(M2C_UNK, s32), 0x60C)(arg1, func_ov123_0209a9fc(arg0));
}
