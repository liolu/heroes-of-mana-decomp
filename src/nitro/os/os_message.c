#include "m2c.h"

void OS_InitMessageQueue(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
