#include "m2c.h"

s32 MATH_CountPopulation(s32);

s32 WmGetSharedDataAddress(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return (M2C_FIELD(arg0, u16 *, 0x810) * MATH_CountPopulation(arg1 & ((1 << arg3) - 1))) + arg2;
}
