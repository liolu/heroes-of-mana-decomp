/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 changeAnimationObj(void *, s32, s32);
void SetATTACK_RagTime(void *);
void OutPutFlyArm(void *);
extern u8 *data_ov000_02051548;

typedef struct {
    u8 pad[0x16];
    u16 f;
} Inner;

typedef struct {
    u8 pad[0x100];
    Inner in;
} G;

void SetActionToATTACK(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x18) == 0) {
        M2C_FIELD(arg0, s32 *, 0) = (M2C_FIELD(arg0, s32 *, 0) & ~0x3FC000) | 0x8000;
        changeAnimationObj(arg0, M2C_FIELD(arg0, u16 *, 0xD4) + 2, ((u32) M2C_FIELD(arg0, s32 *, 0) << 0x15) >> 0x1D);
        M2C_FIELD(arg0, s32 *, 0)    = (M2C_FIELD(arg0, s32 *, 0) & 0x7FFFFFFF) | 0x80000000;
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        ((G *) data_ov000_02051548)->in.f += 1;
        M2C_FIELD(arg0, u16 *, 0x22) = ((G *) data_ov000_02051548)->in.f;
        M2C_FIELD(arg0, s32 *, 0) &= ~0x2000000;
        SetATTACK_RagTime(arg0);
        OutPutFlyArm(arg0);
        M2C_FIELD(arg0, u16 *, 0x2E) = ((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xE4), s32 *, 4) << 0x11) >> 0x1E);
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    }
}