/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_ov109_020ea340;
u8 *SetStatusIcon(u32, s32, s32, s32, u32, s32, s32, u8 *, u32, s32);
void PutListBlackPlane(void) {
    u8 *p               = data_ov109_020ea340;
    u8 *r               = SetStatusIcon(0xff30, 0x2d, 0x54, 0xb0, p[0x34c], 0, 0, p + 0x3c, *(u32 *) (p + 0x18), 0);
    *(u16 *) (r + 0x72) = 0x2d;
    *(s16 *) (r + 0x4e) = -4096;
}
