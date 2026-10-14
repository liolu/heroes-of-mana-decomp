#include "m2c.h"

s32 func_0200e3ec(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_0200e490(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
M2C_UNK func_0200e7cc(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_0203b008;

u16 *func_020184f8(void) {
    u16 *sp0;

    if (func_0200e3ec(&data_0203b008, &sp0, 0) == 0) {
        return NULL;
    }
    func_0200e7cc(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_0200e490(&data_0203b008, sp0, 1);
    return NULL;
}
