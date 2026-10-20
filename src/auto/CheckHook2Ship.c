/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad[4];
    u32 c0 : 28;
    u32 g28 : 1;   /* 0x10 bit 28 */
    u32 g29 : 1;   /* 0x10 bit 29 */
    u32 c1 : 2;
} T;

typedef struct {
    u32 a0 : 14;
    u32 f14 : 8;   /* 0x00 bits 14-21 */
    u32 a1 : 10;
    u32 w4;
    u32 b0 : 23;
    u32 f23 : 4;   /* 0x08 bits 23-26 */
    u32 b1 : 2;
    u32 f29 : 1;   /* 0x08 bit 29 */
    u32 b2 : 2;
    u8 pad[0x60 - 0x0C];
    s8 x60;
    s8 x61;
    u8 pad2[4];
    s8 x66;
    s8 x67;
} S;

s32 IsThereHookPosition(void *);               /* extern */
extern void *data_ov000_02051548;

s32 CheckHook2Ship(S *arg0) {
    T *t;

    t = (T *) data_ov000_02051548;
    if (t->g29 && t->g28) {
        return 0;
    }
    if (arg0->f29) {
        return 0;
    }
    if (arg0->f23 >= 4) {
        return 0;
    }
    if (arg0->x60 != arg0->x66 || arg0->x61 != arg0->x67) {
        return 0;
    }
    if (arg0->f14 != 0x10 && IsThereHookPosition(arg0) == 1) {
        M2C_FIELD(arg0, u32 *, 0) = (M2C_FIELD(arg0, u32 *, 0) & ~0x3FC000) | 0x3C000;
        M2C_FIELD(arg0, s16 *, 0x2E) = 0;
        return 1;
    }
    return 0;
}