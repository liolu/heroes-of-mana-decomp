/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(void *, s32, u32);              /* extern */
M2C_UNK func_ov123_0206cd54(u32, void *);           /* extern */
void *func_ov123_0206ce94(u32 *, void *);           /* extern */
M2C_UNK func_ov123_020754d0(void *, s32);           /* extern */
extern s32 (*data_ov123_020df1e4)(u32);

void func_ov123_020743bc(void *arg0) {
    u32 sp0;
    s32 var_r6;
    u32 temp_r2;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xC);
    if (M2C_FIELD(temp_r4, s32 *, 0x824) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) < 5U) {
            return;
        }
        temp_r0 = func_ov123_0206ce94(&sp0, arg0);
        sp0 = (M2C_FIELD(temp_r0, u8 *, 3) << 8) + M2C_FIELD(temp_r0, u8 *, 4) + 5;
        if (sp0 > 0x4805U) {
            M2C_FIELD(temp_r4, s8 *, 0x455) = 9;
            return;
        }
        M2C_FIELD(temp_r4, s32 *, 0x824) = data_ov123_020df1e4(sp0);
        if (M2C_FIELD(temp_r4, s32 *, 0x824) == 0) {
            M2C_FIELD(temp_r4, s8 *, 0x455) = 9;
            return;
        }
        M2C_FIELD(temp_r4, u32 *, 0x828) = sp0;
        M2C_FIELD(temp_r4, s32 *, 0x82C) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x456) = 0U;
        goto block_10;
    }
    if (M2C_FIELD(arg0, u32 *, 0x44) == 0) {
        return;
    }
block_10:
    temp_r0_3 = func_ov123_0206ce94(&sp0, arg0);
    temp_r2 = M2C_FIELD(temp_r4, u32 *, 0x828) - M2C_FIELD(temp_r4, s32 *, 0x82C);
    if (sp0 >= temp_r2) {
        sp0 = temp_r2;
        var_r6 = 1;
    } else {
        var_r6 = 0;
    }
    MI_CpuCopy8(temp_r0_3, M2C_FIELD(temp_r4, s32 *, 0x824) + M2C_FIELD(temp_r4, s32 *, 0x82C), sp0);
    func_ov123_0206cd54(sp0, arg0);
    if (var_r6 != 0) {
        func_ov123_020754d0(temp_r4, M2C_FIELD(temp_r4, s32 *, 0x824));
        if (M2C_FIELD(temp_r4, u8 *, 0x456) == 0) {
            M2C_FIELD(temp_r4, s32 *, 0x824) = 0;
        }
        return;
    }
    M2C_FIELD(temp_r4, s32 *, 0x82C) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x82C) + sp0);
}
