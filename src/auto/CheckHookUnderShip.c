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
    u8 pad[0x60];
    s8 a;          /* 0x60 */
    s8 b;          /* 0x61 */
    u8 pad2[0x46];
    u16 x : 7;     /* 0xA8 bits 0-6 */
    u16 y : 7;     /* 0xA8 bits 7-13 */
    u16 z : 2;     /* 0xA8 bits 14-15 */
    u8 lo : 7;     /* 0xAA bits 0-6 */
    u8 hi : 1;
} S;

s32 searchHookSamePosObj(s8, s8);              /* extern */
M2C_UNK SetShipAnchor(void *);                 /* extern */
extern void *data_ov000_02051548;

s32 CheckHookUnderShip(S *arg0, void *arg1) {
    T *t;

    if (((u32) (M2C_FIELD(arg0, s32 *, 8) * 4) >> 0x1F) == 0) {
        return 0;
    }
    t = (T *) data_ov000_02051548;
    if (t->g29 && t->g28) {
        return 0;
    }
    if (arg0->z == 2) {
        return 0;
    }
    if (searchHookSamePosObj(arg0->a, arg0->b) == -1) {
        return 0;
    }
    arg0->lo = 0;
    arg0->x = arg0->a;
    arg0->y = arg0->b;
    SetShipAnchor(arg0);
    return 1;
}
