#include "m2c.h"

s32 func_ov123_0208e8f8(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0x15) & 2) == 2) {
        return 1;
    }
    return 0;
}
