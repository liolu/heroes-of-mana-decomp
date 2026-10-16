#include "m2c.h"

extern void *data_ov123_020e1748;

u8 func_ov123_0209ac10(void) {
    if (data_ov123_020e1748 != NULL) {
        return M2C_FIELD(data_ov123_020e1748, u8 *, 0x2C);
    }
    return 0U;
}
