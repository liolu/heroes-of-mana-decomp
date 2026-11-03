/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *func_0200ed38(s32, s32, s32);
extern u8 *data_ov000_02051548;

typedef struct {
    u32 a : 10;
    u32 b : 1;
    u32 c : 10;
    u32 d : 11;
} VramReg;

void ResetVramMapX(s32 a0, s32 a1, s32 a2) {
    VramReg *r = (VramReg *) func_0200ed38(0, -1, 8);

    r->a                                     = a0;
    r->b                                     = a2;
    r->c                                     = a1;
    *(u32 *) ((u8 *) r + 4)                  = *(u32 *) (data_ov000_02051548 + 0x13c);
    *(void **) (data_ov000_02051548 + 0x13c) = r;
}
