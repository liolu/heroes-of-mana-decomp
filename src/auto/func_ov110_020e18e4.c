/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov110_020e18e4(void *arg0) {
    u32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u32 *, 0x114);
    if (temp_r2 >= (u32) M2C_FIELD(arg0, u32 *, 0x110)) {
        return 0;
    }
    M2C_FIELD(arg0, u32 *, 0x114) = (u32) (temp_r2 + 1);
    M2C_FIELD(arg0, s32 *, 0x128) = (s32) (M2C_FIELD(arg0, s32 *, 0x128) + 1);
    if (M2C_FIELD(arg0, s32 *, 0x128) == M2C_FIELD(arg0, s32 *, 0xCC)) {
        M2C_FIELD(arg0, s32 *, 0x128) = 0;
    }
    return 1;
}
