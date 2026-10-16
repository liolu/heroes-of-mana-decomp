#include "m2c.h"

extern void *data_ov123_020e1748;

s32 func_ov123_0209ab40(void) {
    if (data_ov123_020e1748 != NULL) {
        return M2C_FIELD(data_ov123_020e1748, s32 *, 0x24);
    }
    return 0;
}
