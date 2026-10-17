/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK DC_FlushRange(s32, s32);                    /* extern */
M2C_UNK func_0200bc84(s32, s32, s32);               /* extern */
M2C_UNK func_0200bce4(s32, s32, s32);               /* extern */
extern M2C_UNK data_ov123_020d8450;
extern M2C_UNK data_ov123_020d8454;
extern void *data_ov123_020e4724;

void func_ov123_020c9bb0(void *arg0, u8 *arg1) {
    s32 temp_r5;
    s32 temp_r5_2;

    if (*arg1 == 0) {
        return;
    }
    if (arg1 == (data_ov123_020e4724 + 0x794)) {
        temp_r5 = (M2C_FIELD(&data_ov123_020d8454, u16 *, 0) * M2C_FIELD(&data_ov123_020d8454, u16 *, 2)) << 5;
        DC_FlushRange(M2C_FIELD(data_ov123_020e4724, s32 *, 0x748), temp_r5);
        func_0200bc84(M2C_FIELD(data_ov123_020e4724, s32 *, 0x748), M2C_FIELD(&data_ov123_020d8450, u16 *, 0) << 5, temp_r5);
    } else {
        temp_r5_2 = (M2C_FIELD(&data_ov123_020d8454, u16 *, 4) * M2C_FIELD(&data_ov123_020d8454, u16 *, 6)) << 5;
        DC_FlushRange(M2C_FIELD(data_ov123_020e4724, s32 *, 0x780), temp_r5_2);
        func_0200bce4(M2C_FIELD(data_ov123_020e4724, s32 *, 0x780), M2C_FIELD(&data_ov123_020d8450, u16 *, 2) << 5, temp_r5_2);
    }
    *arg1 = 0;
}
