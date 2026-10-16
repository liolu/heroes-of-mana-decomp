/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_020743bc(void *);                /* extern */

s32 func_ov123_02074320(void *arg0) {
    s32 temp_r1;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xC);
    if ((M2C_FIELD(temp_r4, s32 *, 0x824) == 0) || (M2C_FIELD(temp_r4, u8 *, 0x456) == 0)) {
        func_ov123_020743bc(arg0);
    }
    temp_r1 = M2C_FIELD(temp_r4, s32 *, 0x824);
    if ((temp_r1 != 0) && (M2C_FIELD(temp_r4, u8 *, 0x456) != 0)) {
        return M2C_FIELD(temp_r4, s32 *, 0x828) - M2C_FIELD(temp_r4, s32 *, 0x82C);
    }
    if ((temp_r1 == 0) && ((M2C_FIELD(arg0, u8 *, 8) != 4) || (M2C_FIELD(temp_r4, u8 *, 0x455) == 9))) {
        return -1;
    }
    return 0;
}
