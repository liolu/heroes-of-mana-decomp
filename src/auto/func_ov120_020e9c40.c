#include "m2c.h"

typedef struct {
    u32 b0 : 8;
    u32 b1 : 8;
    u32 b2 : 8;
    u32 b3 : 8;
} Prio;

extern Prio data_ov120_020f5120[2];

void func_ov120_020e9c40(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    volatile u16 *p;

    if (arg0 == 0) {
        p = (volatile u16 *)0x04000008;
        p[0] = (p[0] & ~3) | arg1;
        p[1] = (p[1] & ~3) | arg2;
        p[2] = (p[2] & ~3) | arg3;
        p[3] = (p[3] & ~3) | arg4;
        data_ov120_020f5120[0].b0 = arg1;
        data_ov120_020f5120[0].b1 = arg2;
        data_ov120_020f5120[0].b2 = arg3;
        data_ov120_020f5120[0].b3 = arg4;
    } else {
        p = (volatile u16 *)0x04001008;
        p[0] = (p[0] & ~3) | arg1;
        p[1] = (p[1] & ~3) | arg2;
        p[2] = (p[2] & ~3) | arg3;
        p[3] = (p[3] & ~3) | arg4;
        data_ov120_020f5120[1].b0 = arg1;
        data_ov120_020f5120[1].b1 = arg2;
        data_ov120_020f5120[1].b2 = arg3;
        data_ov120_020f5120[1].b3 = arg4;
    }
}
