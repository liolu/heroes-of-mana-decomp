#include "m2c.h"

M2C_UNK func_0200e358(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_0200e7e8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02010434(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_020118cc(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_020184f8();                                /* extern */
extern M2C_UNK data_0203b008;

s32 func_020185fc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_020184f8();
    if (temp_r0 == 0) {
        return 8;
    }
    func_02010434(arg0, temp_r0, arg1);
    func_0200e7e8(temp_r0, arg1);
    temp_r4 = func_020118cc(0xA, temp_r0, 0);
    func_0200e358(&data_0203b008, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}
