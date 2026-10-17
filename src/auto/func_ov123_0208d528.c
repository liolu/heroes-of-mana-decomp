/* compiler: 1.2/sp3 */
#include "m2c.h"

u32 func_ov123_0207b3f4();                          /* extern */
M2C_UNK func_ov123_0208c100(void *, M2C_UNK);       /* extern */
M2C_UNK func_ov123_0208c314(void *);                /* extern */
extern M2C_UNK data_ov123_020db7ac;

void func_ov123_0208d528(void *arg0) {
    s32 temp_r2;
    u32 temp_r2_2;
    u32 temp_r4;

    temp_r4 = func_ov123_0207b3f4();
    if (M2C_FIELD(arg0, s32 *, 0) == -1) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0xB8);
    if ((temp_r2 > 0) && ((u32) (temp_r4 - M2C_FIELD(arg0, u32 *, 0xAC)) > 0x2710U)) {
        if (temp_r2 >= 4) {
            M2C_FIELD(arg0, s32 *, 0xB8) = 0;
            M2C_FIELD(arg0, M2C_UNK(**)(M2C_UNK, M2C_UNK *, s32), 0x9C)(5, &data_ov123_020db7ac,
                                                                        M2C_FIELD(arg0, s32 *, 0x10C));
            return;
        }
        func_ov123_0208c100(arg0, 3);
        M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8) + 1);
        goto block_14;
    }
    if ((M2C_FIELD(arg0, s32 *, 0xB4) != 0) && ((u32) (temp_r4 - M2C_FIELD(arg0, u32 *, 0xAC)) > 0x2710U)) {
        func_ov123_0208c100(arg0, 1);
    } else {
        temp_r2_2 = M2C_FIELD(arg0, u32 *, 0xAC);
        if (((u32) (temp_r4 - temp_r2_2) > 0xEA60U) || (temp_r2_2 == 0) || (temp_r4 < temp_r2_2)) {
            func_ov123_0208c100(arg0, 0);
        }
    }
block_14:
    if ((u32) (temp_r4 - M2C_FIELD(arg0, s32 *, 0xB0)) <= 0x4E20U) {
        return;
    }
    func_ov123_0208c314(arg0);
}
