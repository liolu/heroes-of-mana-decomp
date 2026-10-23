/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Icon {
    u8 pad0[8];
    u8 b8;
    u8 b9;
    u8 b10;
    u8 b11;
    u8 pad1[0x32];
    u8 b3e;
    u8 pad2[0x33];
    u16 h72;
} Icon;
extern u8 *data_ov000_0205154c;
extern u8 *data_ov000_02051548;
Icon *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, u8 *, s32, s32);
void InShipIcomPut(void) {
    Icon *ic = SetStatusIcon(0xffb7, 0x2e, 0xd4, 0x64, *(u16 *) (data_ov000_0205154c + 0x56c), 0, 0,
                             data_ov000_02051548 + 0x78c, *(s32 *) (data_ov000_02051548 + 0x12c), 0);
    ic->h72  = 0x2e;
    ic->b10  = 0;
    ic->b11  = 0;
    ic->b8   = 0x18;
    ic->b9   = 0x10;
    ic->b3e |= 0x80;
}
