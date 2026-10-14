#include "m2c.h"

void func_0200acf4(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 < 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (arg1 | 0xC0);
        M2C_FIELD(arg0, s16 *, 4) = (s16) (-arg2);
    } else {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (arg1 | 0x80);
        M2C_FIELD(arg0, s16 *, 4) = (s16) arg2;
    }
}
