/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, s32 *, M2C_UNK);           /* extern */
M2C_UNK MI_CpuFill8(s32 *, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_ov123_020e1678;

void func_ov123_02095654(s32 *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    if (data_ov123_020e1678 == 0) {
        MI_CpuFill8(arg0, 0, 0x1C4);
    }
    MI_CpuCopy8(data_ov123_020e1678 + 0x1008, arg0, 0x1C4);
    temp_r1 = *arg0;
    if ((temp_r1 < 0x4E20) || (temp_r1 >= 0x7530)) {
        *arg0 = 0x5206;
    }
    temp_r1_2 = *arg0;
    if (temp_r1_2 >= 0x4E84) {
        *arg0 = 0 - temp_r1_2;
    }
}
