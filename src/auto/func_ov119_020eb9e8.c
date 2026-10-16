#include "m2c.h"

M2C_UNK func_ov119_020eb608(M2C_UNK);               /* extern */
M2C_UNK func_ov119_020eb8ec();                      /* extern */
M2C_UNK func_ov119_020ebb18(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov119_020ebb74();                      /* extern */
extern M2C_UNK data_ov119_020f2258;

void func_ov119_020eb9e8(void) {
    M2C_FIELD(&data_ov119_020f2258, s32 *, 0) = 0x200;
    M2C_FIELD(&data_ov119_020f2258, s32 *, 8) = 1;
    func_ov119_020ebb74();
    func_ov119_020eb608(0);
    func_ov119_020eb8ec();
    func_ov119_020ebb18(0, 0x400);
}
