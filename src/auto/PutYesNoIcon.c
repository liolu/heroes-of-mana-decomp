/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 *data_ov000_02051548;
extern u8 *data_ov000_0205154c;

void PutYesNoIcon(s32 a, s32 b, s32 c, s32 d, s32 e) {
    u16 t = *(u16 *) (data_ov000_0205154c + a * 0x4b0 + 0x500 + 0x6c);
    u8 *p = SetStatusIcon(0xffa9, 0x27, b, c, t, 0, 0, (s32) (data_ov000_02051548 + 0x38c + 0x400),
                          *(s32 *) (data_ov000_02051548 + 0x12c), a);
    p[8]  = 0x20;
    p[9]  = 0x10;
    p[0x3e] |= 0x80;
    *(u16 *) (p + 0x72) = 0x27;
    p                   = SetStatusIcon(0xffaa, 0x28, d, e, t, 0, 0, (s32) (data_ov000_02051548 + 0x38c + 0x400),
                                        *(s32 *) (data_ov000_02051548 + 0x12c), a);
    p[8]                = 0x20;
    p[9]                = 0x10;
    p[0x3e] |= 0x80;
    *(u16 *) (p + 0x72) = 0x28;
}
