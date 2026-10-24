/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void objZahyou2ScreenZahyou(s32 *);

void GetObjCenter2D(u8 *o, s32 *out) {
    out[0] = *(s32 *) (o + 0x40);
    out[1] = *(s32 *) (o + 0x44) + *(s32 *) (o + 0x4C) + ((*(s16 *) (o + 0x8E) - *(u16 *) (o + 0x8A) / 3) * 0x1000) / 7;
    out[2] = *(s32 *) (o + 0x48);
    objZahyou2ScreenZahyou(out);
}
