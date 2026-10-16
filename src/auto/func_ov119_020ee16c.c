#include "m2c.h"

M2C_UNK func_ov119_020edf04(s32, s32);              /* extern */
s32 func_ov119_020edf40(M2C_UNK);                   /* extern */
s32 func_ov119_020edf78(M2C_UNK);                   /* extern */
extern void *data_ov119_020f2f68;

void func_ov119_020ee16c(void) {
    s32 temp_r4;

    temp_r4 = func_ov119_020edf40(1);
    func_ov119_020edf04(temp_r4, func_ov119_020edf78(3));
    M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) = (u16) (M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) + 5);
}
