#include "m2c.h"

s32 func_ov004_020c98c4(void *arg0, s32 arg1) {
    u16 *temp_r2;

    temp_r2 = M2C_FIELD(arg0, u16 **, 4);
    if ((temp_r2 == NULL) || (arg1 >= (s32) *temp_r2)) {
        return 0;
    }
    return (arg1 * 0xC) + (s32) ((u8 *) (u8 *) temp_r2 + 4);
}
