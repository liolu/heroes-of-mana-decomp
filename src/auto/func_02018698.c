#include "m2c.h"

M2C_UNK func_0200e7cc(u16 *, M2C_UNK);              /* extern */
s32 func_0201867c();                                /* extern */
extern M2C_UNK data_0203b000;

s32 func_02018698(void) {
    s32 temp_r0;

    temp_r0 = func_0201867c();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0200e7cc(M2C_FIELD(M2C_FIELD(&data_0203b000, void **, 4), u16 **, 4), 2);
    if ((u32) *M2C_FIELD(M2C_FIELD(&data_0203b000, void **, 4), u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
