#include "m2c.h"

M2C_UNK func_020037e8();                            /* extern */
M2C_UNK func_ov119_020edf78(M2C_UNK);               /* extern */
extern void *data_ov119_020f2f68;

void func_ov119_020efca0(void) {
    func_ov119_020edf78(1);
    func_020037e8();
    M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) = (u16) (M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) + 3);
}
