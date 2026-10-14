#include "m2c.h"

M2C_UNK func_02010360();                            /* extern */

void func_0200adc4(s32 arg0) {
    *(s32 *) 0x04000400 = 0x1A;
    func_02010360(arg0);
}
