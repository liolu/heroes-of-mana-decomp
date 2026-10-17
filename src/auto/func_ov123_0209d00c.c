/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_02086e8c();                      /* extern */
s32 func_ov123_02086fe8();                          /* extern */
s32 func_ov123_02099548();                          /* extern */
s32 func_ov123_0209bf2c();                          /* extern */
M2C_UNK func_ov123_0209c8b8();                      /* extern */
M2C_UNK func_ov123_0209c8f8(s32, s32);              /* extern */
s32 func_ov123_0209cb94();                          /* extern */
extern void *data_ov123_020e18dc;

void func_ov123_0209d00c(void) {
    s32 *temp_r0;
    s32 temp_r0_2;
    u8 temp_r2;

    if (data_ov123_020e18dc == NULL) {
        return;
    }
    if (M2C_FIELD(data_ov123_020e18dc, s32 *, 0x18) == 0) {
        return;
    }
    if (func_ov123_02099548() != 0) {
        return;
    }
    if ((func_ov123_0209bf2c() != 0) || (func_ov123_02086fe8() != 0)) {
        func_ov123_02086e8c();
    }
    temp_r0 = M2C_FIELD(data_ov123_020e18dc, s32 **, 4);
    if ((temp_r0 != NULL) && (*temp_r0 != 0)) {
        if (func_ov123_0209cb94() != 0) {
            return;
        }
        if (M2C_FIELD(data_ov123_020e18dc, s32 *, 0) == 0) {
            return;
        }
        temp_r0_2 = M2C_FIELD(data_ov123_020e18dc, s32 *, 0x18);
        if (temp_r0_2 != 0) {
            temp_r2 = M2C_FIELD(data_ov123_020e18dc, u8 *, 0x1E);
            if ((temp_r2 != 3) && ((u32) M2C_FIELD(data_ov123_020e18dc, u32 *, 8) > 7U)) {
                if ((u32) temp_r2 <= 1U) {
                    func_ov123_0209c8f8(temp_r0_2, M2C_FIELD(data_ov123_020e18dc, s32 *, 0x14));
                }
                if ((s32) M2C_FIELD(data_ov123_020e18dc, u8 *, 0x1C) >= (s32) M2C_FIELD(data_ov123_020e18dc, s32 *, 0x14)) {
                    M2C_FIELD(data_ov123_020e18dc, u8 *, 0x1E) = 3U;
                    M2C_FIELD(data_ov123_020e18dc, u8 *, 0x1F) = (u8) (M2C_FIELD(data_ov123_020e18dc, u8 *, 0x1F) + 1);
                }
            }
        }
        goto block_22;
    }
block_22:
    if ((u32) M2C_FIELD(data_ov123_020e18dc, u8 *, 0x1F) < 2U) {
        return;
    }
    M2C_FIELD(data_ov123_020e18dc, u8 *, 0x1F) = 0U;
    func_ov123_0209c8b8();
}
