/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_ov000_0205154c;
extern u8 data_02030644;

void MoveModelShip(void *obj) {
    u32 v;
    s32 idx;

    v                            = *(u32 *) ((u8 *) data_ov000_0205154c + 0x14C);
    v                            = (v << 22) >> 16;
    idx                          = (s32) v >> 4;
    *(s32 *) ((u8 *) obj + 0x20) = *(s16 *) (&data_02030644 + idx * 4) * 5;
    v                            = *(u32 *) ((u8 *) data_ov000_0205154c + 0x14C);
    v                            = (v << 22) >> 16;
    idx                          = (s32) v >> 4;
    *(s32 *) ((u8 *) obj + 0x28) = *(s16 *) (&data_02030644 + (idx * 2 + 1) * 2) * 5;
    v                            = *(u32 *) ((u8 *) data_ov000_0205154c + 0x14C);
    v                            = (v << 22) >> 16;
    *(s16 *) ((u8 *) obj + 0x2E) = (s16) (v + 0x4000);
}
