#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02036c30;

void func_020046b4(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02036c30 + (arg0 * 0x24))) = (s32) (u16) arg1;
}
