#include "m2c.h"

u16 func_ov123_0208e918(void *arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 4);
    return (u16) ((u8) ((s32) temp_r0 >> 8) | ((temp_r0 << 8) & 0xFF00));
}
