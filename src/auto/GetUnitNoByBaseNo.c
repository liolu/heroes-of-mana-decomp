/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x24];
    u8 *units;
    u8 *chars;
} G;
typedef struct {
    u8 pad[0x264];
    u16 idx[0x25];
} C;
extern G *data_0203673c;

s32 GetUnitNoByBaseNo(s32 arg0, u32 arg1) {
    G *g = data_0203673c;
    u16 c;
    C *base = (C *) (g->chars + arg0 * 0x2D0);
    s32 i   = 0;

    do {
        c = base->idx[i];
        if (c != 0xFFFF && arg1 == ((*(u32 *) (g->units + c * 0x34) << 0x15) >> 0x17)) {
            return c;
        }
        i++;
    } while (i < 0x25);
    return -1;
}
