/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x56c];
    u16 h;
} A;
typedef struct {
    u8 pad[0x12c];
    s32 w12c;
    u8 pad2[0x25c];
    u8 w38c[1];
} B;
typedef struct {
    u8 pad[0x3e];
    u8 flags;
} Icon;
extern A *data_ov000_0205154c;
extern B *data_ov000_02051548;
Icon *SetStatusIcon(s32, s32, s32, s32, u16, s32, s32, void *, s32, s32);

void PutSelectCancelBtn(void) {
    Icon *ic = SetStatusIcon(0xffbb, 0x1d, 0x18, 0x90, data_ov000_0205154c->h, 0, 0, data_ov000_02051548->w38c + 0x400,
                             data_ov000_02051548->w12c, 0);
    ic->flags |= 0x80;
}
