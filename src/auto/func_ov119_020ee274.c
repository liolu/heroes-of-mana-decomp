#include "m2c.h"

M2C_UNK func_ov119_020edf04(s32, M2C_UNK);          /* extern */
s32 func_ov119_020edf40(M2C_UNK);                   /* extern */
extern void *data_ov119_020f2f68;

void func_ov119_020ee274(void) {
    func_ov119_020edf04(func_ov119_020edf40(1), 0);
    M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) = (u16) (M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) + 3);
}
