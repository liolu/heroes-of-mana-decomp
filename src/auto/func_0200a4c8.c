#include "m2c.h"

M2C_UNK func_0200a470(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02038590;

void func_0200a4c8(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_0200a470(&data_02038590);
}
