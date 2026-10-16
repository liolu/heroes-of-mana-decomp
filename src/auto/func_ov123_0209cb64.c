#include "m2c.h"

extern void *data_ov123_020e18dc;

void func_ov123_0209cb64(void) {
    if (data_ov123_020e18dc == NULL) {
        return;
    }
    M2C_FIELD(data_ov123_020e18dc, s32 *, 0)   = 0;
    M2C_FIELD(data_ov123_020e18dc, s8 *, 0x1E) = 0;
    M2C_FIELD(data_ov123_020e18dc, s8 *, 0x1F) = 0;
}
