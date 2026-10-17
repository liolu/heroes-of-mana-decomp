/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02026c4c();                                /* extern */
void *func_ov123_0207a194(s32, s32);                /* extern */
M2C_UNK func_ov123_020866bc(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_ov123_02086c3c(M2C_UNK, s32, M2C_UNK);     /* extern */
s32 func_ov123_02086d54(M2C_UNK, M2C_UNK *);        /* extern */
extern M2C_UNK data_ov123_020db3cc;
extern M2C_UNK data_ov123_020db3f8;
extern M2C_UNK data_ov123_020db400;
extern s32 data_ov123_020e0e9c;

void func_ov123_02086b8c(M2C_UNK arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;

    func_ov123_02086d54(arg0, &data_ov123_020db3f8);
    temp_r5 = func_02026c4c();
    func_ov123_02086d54(arg0, &data_ov123_020db3cc);
    temp_r4   = func_02026c4c();
    temp_r4_2 = func_ov123_02086d54(arg0, &data_ov123_020db400);
    temp_r0   = func_ov123_02086c3c(0, temp_r4, 0);
    if (temp_r0 == -1) {
        return;
    }
    M2C_FIELD(func_ov123_0207a194(data_ov123_020e0e9c, temp_r0), s32 *, 8) = temp_r5;
    if (temp_r5 > 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_ov123_020866bc(temp_r0, var_r1, 0, temp_r4_2, 0);
}
