/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x3c];
    u16 f3c;
    u8 pad1[0xd4 - 0x3e];
    u32 fd4;
} G;
extern G *data_ov000_02051548;

void EventDurringTitle(s32 a) {
    data_ov000_02051548->fd4 = (data_ov000_02051548->fd4 & 0xFFFF0000) | (u16) a;
    data_ov000_02051548->f3c = 0;
}
