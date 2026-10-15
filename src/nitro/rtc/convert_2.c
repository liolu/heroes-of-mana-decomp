#include "m2c.h"

s32 RTCi_ConvertTimeToSecond(void *arg0) {
    return (((M2C_FIELD(arg0, s32 *, 0) * 0x3C) + M2C_FIELD(arg0, s32 *, 4)) * 0x3C) + M2C_FIELD(arg0, s32 *, 8);
}
