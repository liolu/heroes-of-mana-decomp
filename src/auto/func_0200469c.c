#include "m2c.h"

extern M2C_UNK data_02036c34;

void func_0200469c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02036c34 + (arg0 * 0x24))) = arg1;
}
