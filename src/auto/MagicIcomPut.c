/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x8];
    u8 b8;
    u8 b9;
    u8 ba;
    u8 bb;
    u8 pad1[0x3e - 0xc];
    u8 f3e;
    u8 pad2[0x72 - 0x3f];
    u16 h72;
} Ic;

typedef struct {
    u8 pad[0x12c];
    s32 v12c;
} G2;

extern u8 *data_ov000_0205154c;
extern G2 *data_ov000_02051548;
Ic *SetStatusIcon(s32, s32, s32, s32, u16, s32, s32, u8 *, s32, s32);

void MagicIcomPut(void) {
    Ic *p  = SetStatusIcon(0xffb6, 0x2c, 0xd4, 0x64, *(u16 *) (data_ov000_0205154c + 0x56c), 0, 0,
                           (u8 *) data_ov000_02051548 + 0x78c, data_ov000_02051548->v12c, 0);
    p->h72 = 0x2c;
    p->ba  = 0;
    p->bb  = 0;
    p->b8  = 0x18;
    p->b9  = 0x10;
    p->f3e |= 0x80;
}
