#include "m2c.h"

M2C_UNK func_ov119_020ea11c(s32, s32, s32, s32);    /* extern */
s32 func_ov119_020edf78(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov119_020f2f68;

void func_ov119_020ee8f0(void) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = func_ov119_020edf78(1);
    temp_r5 = func_ov119_020edf78(3);
    temp_r4 = func_ov119_020edf78(5);
    func_ov119_020ea11c(temp_r6, temp_r5, temp_r4, func_ov119_020edf78(7));
    M2C_FIELD(&data_ov119_020f2f68, s32 *, 0x10) = 1;
    M2C_FIELD(M2C_FIELD(&data_ov119_020f2f68, void **, 0), u16 *, 0x4F8) =
        (u16) (M2C_FIELD(M2C_FIELD(&data_ov119_020f2f68, void **, 0), u16 *, 0x4F8) + 9);
}
