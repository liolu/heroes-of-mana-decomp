/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 p[0x2e0];
    u8 *t;
} S;
extern S *data_ov000_02051548;
s32 SetNowDownId_a(s32 a, s32 b, s32 c) {
    u8 *t = data_ov000_02051548->t;
    u16 o = *(u16 *) (t + (a + b * 40) * 2);
    s32 v = *(s32 *) (t + o);
    v &= c;
    return v & 0xfffffe;
}
