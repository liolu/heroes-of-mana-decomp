/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK OSi_ThreadInfo;

s32 func_ov123_0206d0b4(u16 *arg0, s32 *arg1) {
    u8 temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if ((temp_r3 != NULL) && ((temp_r2 = M2C_FIELD(temp_r3, u8 *, 8), (temp_r2 == 4)) || (temp_r2 == 0xA))) {
        if (arg0 != NULL) {
            *arg0 = M2C_FIELD(temp_r3, u16 *, 0x18);
        }
        if (arg1 != NULL) {
            *arg1 = M2C_FIELD(temp_r3, s32 *, 0x14);
        }
        return M2C_FIELD(temp_r3, s32 *, 0x1C);
    }
    return 0;
}
