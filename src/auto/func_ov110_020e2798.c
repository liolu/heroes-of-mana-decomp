/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov110_020e2798(void *arg0, void *arg1) {
    void *temp_r2;
    void *temp_r2_2;

    M2C_FIELD(arg0, void **, 0xC) = arg1;
    temp_r2                       = M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(arg0, s32 *, 4)     = (s32) (M2C_FIELD(temp_r2, s32 *, 0x28) - M2C_FIELD(temp_r2, s32 *, 0x24));
    temp_r2_2                     = M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(arg0, s32 *, 8)     = (s32) (M2C_FIELD(temp_r2_2, s32 *, 0x2C) - M2C_FIELD(temp_r2_2, s32 *, 0x24));
    M2C_FIELD(arg0, s8 *, 0x10)   = 0;
    return 1;
}
