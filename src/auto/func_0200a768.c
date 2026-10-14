#include "m2c.h"

M2C_UNK func_0200a58c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02038596;

void func_0200a768(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_0200a58c(&data_02038596);
}
