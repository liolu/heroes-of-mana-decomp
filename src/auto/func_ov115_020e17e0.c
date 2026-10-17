#include "m2c.h"

void func_ov115_020e17e0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg0 == 0) {
        M2C_FIELD((void *) 0x04000008, volatile u16 *, 0) =
            (u16) ((M2C_FIELD((void *) 0x04000008, volatile u16 *, 0) & ~3) | arg1);
        M2C_FIELD((void *) 0x04000008, volatile u16 *, 2) =
            (u16) ((M2C_FIELD((void *) 0x04000008, volatile u16 *, 2) & ~3) | arg2);
        M2C_FIELD((void *) 0x04000008, volatile u16 *, 4) =
            (u16) ((M2C_FIELD((void *) 0x04000008, volatile u16 *, 4) & ~3) | arg3);
        M2C_FIELD((void *) 0x04000008, volatile u16 *, 6) =
            (u16) ((M2C_FIELD((void *) 0x04000008, volatile u16 *, 6) & ~3) | arg4);
        return;
    }
    M2C_FIELD((void *) 0x04001008, volatile u16 *, 0) =
        (u16) ((M2C_FIELD((void *) 0x04001008, volatile u16 *, 0) & ~3) | arg1);
    M2C_FIELD((void *) 0x04001008, volatile u16 *, 2) =
        (u16) ((M2C_FIELD((void *) 0x04001008, volatile u16 *, 2) & ~3) | arg2);
    M2C_FIELD((void *) 0x04001008, volatile u16 *, 4) =
        (u16) ((M2C_FIELD((void *) 0x04001008, volatile u16 *, 4) & ~3) | arg3);
    M2C_FIELD((void *) 0x04001008, volatile u16 *, 6) =
        (u16) ((M2C_FIELD((void *) 0x04001008, volatile u16 *, 6) & ~3) | arg4);
}
