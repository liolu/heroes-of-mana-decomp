#include "m2c.h"

s32 func_020186e0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02018c4c(u16, M2C_UNK, M2C_UNK);       /* extern */

s32 func_0201a380(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_020186e0(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == NULL) {
        return 6;
    }
    if (M2C_FIELD(arg0, u16 *, 0x80E) == 0) {
        return 3;
    }
    func_02018c4c(M2C_FIELD(arg0, u16 *, 0x816), 0, 0);
    M2C_FIELD(arg0, u16 *, 0x80E) = 0U;
    M2C_FIELD(arg0, s16 *, 0x81C) = 0;
    return 0;
}
