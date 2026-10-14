#include "m2c.h"

M2C_UNK func_02009754();                            /* extern */
extern u16 data_02038580;

void func_0200a238(s32 arg0) {
    data_02038580 |= arg0;
    func_02009754(arg0);
}
