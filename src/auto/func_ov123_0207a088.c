/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02021338(s32, s32, s32);               /* extern */
s32 func_ov123_0207a194(void *, s32);               /* extern */
M2C_UNK func_ov123_0207a350(void *, M2C_UNK, s32);  /* extern */
M2C_UNK func_ov123_0207a37c(void *);                /* extern */
extern M2C_UNK data_ov123_020d9b18;
extern M2C_UNK data_ov123_020d9b50;

void func_ov123_0207a088(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r7;
    s32 temp_r8;

    if ((arg2 < 0) || (arg2 > (s32) M2C_FIELD(arg0, s32 *, 0))) {
        func_02020d04(&data_ov123_020d9b50, &data_ov123_020d9b18, 0, 0xA7);
    }
    if (M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg0, s32 *, 4)) {
        func_ov123_0207a37c(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
    temp_r8                   = M2C_FIELD(arg0, s32 *, 0) - 1;
    if (arg2 < temp_r8) {
        temp_r7 = func_ov123_0207a194(arg0, arg2 + 1);
        func_02021338(temp_r7, func_ov123_0207a194(arg0, arg2), M2C_FIELD(arg0, s32 *, 8) * (temp_r8 - arg2));
    }
    func_ov123_0207a350(arg0, arg1, arg2);
}
