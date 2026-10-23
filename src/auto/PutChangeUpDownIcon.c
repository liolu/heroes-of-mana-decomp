/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
u8 *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, u8 *, s32, s32);
extern u8 *data_ov000_0205154c;
extern u8 *data_ov000_02051548;
void PutChangeUpDownIcon(s32 n) {
    u8 *r;
    r = SetStatusIcon(0xffa3, 0x1f, 0xf0, 0x10, *(u16 *) (data_ov000_0205154c + n * 0x4b0 + 0x56c), 0, 0,
                      data_ov000_02051548 + 0x78c, *(s32 *) (data_ov000_02051548 + 0x12c), n);
    if (n == 0) {
        r[0x3e] |= 0x80;
    }
}
