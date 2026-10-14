#include "m2c.h"

M2C_UNK func_0200a470(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02038598;

void func_0200a564(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_0200a470(&data_02038598);
}
