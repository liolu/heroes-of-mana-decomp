#include "m2c.h"

s32 func_020213f0(void *, M2C_UNK *, M2C_UNK);      /* extern */
s32 func_ov123_020a56b4(void *);                    /* extern */
s32 func_ov123_020a56e0(void *, M2C_UNK *);         /* extern */
s32 func_ov123_020a575c(void *);                    /* extern */
M2C_UNK func_ov123_020a5784(u8, M2C_UNK *);         /* extern */
extern M2C_UNK data_ov123_020d511c;

s32 func_ov123_020a5c64(void *arg0) {
    u8 sp0[8];
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0xE7);
    if (temp_r0 == 0xFF) {
        return 1;
    }
    if ((u32) temp_r0 > 2U) {
        return 0;
    }
    if (func_ov123_020a575c(arg0 + 0x40) == 0) {
        return 0;
    }
    if (func_020213f0(arg0 + 0xC0, &data_ov123_020d511c, 4) != 0) {
        if (func_ov123_020a56b4(arg0 + 0xC4) == 0) {
            return 0;
        }
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0xD0);
        if ((u32) temp_r0_2 > 0x20U) {
            return 0;
        }
        func_ov123_020a5784(temp_r0_2, sp0);
        if (func_ov123_020a56e0(arg0 + 0xC0, sp0) == 0) {
            return 0;
        }
        goto block_13;
    }
block_13:
    if ((func_020213f0(arg0 + 0xC8, &data_ov123_020d511c, 4) != 0) && (func_ov123_020a56b4(arg0 + 0xC8) == 0) &&
        (func_ov123_020a56b4(arg0 + 0xCC) == 0)) {
        return 0;
    }
    return 1;
}
