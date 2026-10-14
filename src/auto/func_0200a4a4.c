#include "m2c.h"

M2C_UNK func_0200a470(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0203858e;

void func_0200a4a4(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_0200a470(&data_0203858e);
}
