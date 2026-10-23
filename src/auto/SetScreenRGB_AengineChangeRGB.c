/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct S {
    u8 pad[0x118];
    u32 mode : 2;
    u32 pad0 : 10;
    u32 clr : 12;
    u32 pad1 : 8;
    u32 rgb : 12;
    u32 pad2 : 20;
    u8 pad3[6];
    u16 v126;
    u16 v128;
} S;
extern S *data_ov000_02051548;
void SetScreenRGB_AengineChangeRGB(u16 a, u32 b) {
    volatile u16 *pal;
    if (data_ov000_02051548->mode != 0) {
        data_ov000_02051548->clr  = 0;
        data_ov000_02051548->rgb  = b;
        data_ov000_02051548->v128 = a;
        if (b == 0) {
            data_ov000_02051548->v126 = a;
            pal                       = (volatile u16 *) 0x05000000;
            pal[0x11]                 = data_ov000_02051548->v126;
        }
    }
}
