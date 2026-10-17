/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02021338(s32, s32, s32);               /* extern */
s32 func_ov123_0207a194(void *, s32);               /* extern */
extern M2C_UNK data_ov123_020d9b18;
extern M2C_UNK data_ov123_020d9b24;

void func_ov123_02079f78(void *arg0, s32 arg1) {
    s32 temp_r5;
    s32 temp_r6;

    if ((arg1 < 0) || (arg1 >= (s32) M2C_FIELD(arg0, s32 *, 0))) {
        func_02020d04(&data_ov123_020d9b24, &data_ov123_020d9b18, 0, 0xC0);
    }
    temp_r6 = M2C_FIELD(arg0, s32 *, 0) - 1;
    if (arg1 < temp_r6) {
        temp_r5 = func_ov123_0207a194(arg0, arg1);
        func_02021338(temp_r5, func_ov123_0207a194(arg0, arg1 + 1), M2C_FIELD(arg0, s32 *, 8) * (temp_r6 - arg1));
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
}
