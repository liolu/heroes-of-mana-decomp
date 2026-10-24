/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct W {
    u8 pad[0x2d8];
    u32 *flags;
    u8 pad2[4];
    u8 *tbl;
} W;
extern W *data_ov000_02051548;

void SetWaterCantEnter(void) {
    s32 x, y, o;
    y = 0;
    o = 0;
    do {
        x = 0;
        do {
            W *w = data_ov000_02051548;
            if (*(u32 *) (w->tbl + ((u16 *) w->tbl)[o + x]) & 0x1000000) {
                u32 *row = w->flags + o;
                row[x] |= 0xFFFFFF;
            }
            x++;
        } while (x < 0x28);
        y++;
        o += 0x28;
    } while (y < 0x28);
}
