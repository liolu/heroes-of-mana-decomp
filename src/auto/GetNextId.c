/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x2e0];
    u8 *tbl;
} O;
extern O *data_ov000_02051548;
s32 GetNextId(s32 cur, s32 x, s32 y, s32 dx, s32 dy, s32 n) {
    u32 v;
    s32 i;
    s32 yo;
    s32 dyo;
    u8 *tbl;
    if (n != 0) {
        yo  = y * 40;
        dyo = dy * 40;
        tbl = data_ov000_02051548->tbl;
        do {
            x += dx;
            yo += dyo;
            v = *(u32 *) (tbl + *(u16 *) (tbl + (x + yo) * 2));
            cur &= v;
            cur &= ~0xff000000;
            if (cur == 0) {
                cur = 0x800000;
                i   = 0;
                do {
                    if (v & cur) {
                        break;
                    }
                    i++;
                    cur >>= 1;
                } while (i < 24);
            }
            cur = cur | (cur << 1) | ((u32) cur >> 1);
        } while (--n != 0);
    }
    return cur;
}
