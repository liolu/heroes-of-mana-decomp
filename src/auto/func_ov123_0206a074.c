/* compiler: 1.2/sp3 */
/* near start: 2 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef union {
    s32 w;
    u8 b[4];
} Pal;
typedef struct {
    s32 base;
    s32 w4;
    s32 w8;
    u8 mode;
    u8 p0;
    u8 p1;
    u8 p2;
    Pal pal;
} Hdr;

s32 func_ov123_0206ac1c(s32, s32, s32, s32, s32, s32);
void func_ov123_0206aacc(s32, s32, s32, s32, s32, s32, s32);

void func_ov123_0206a074(Hdr *h, s32 fill, s32 x, s32 y, s32 w, s32 hh) {
    s32 y1, lenY, xend, yend, yend8, base, tx0, x1, b1, b0, w3c, w40, mode, cxu;
    s32 xc, tx, ty, xend8, yskip;
    s32 xskip, wd, t;
    Pal pal;

    mode = h->mode;
    xend = x + w;
    yend = y + hh;
    if (mode == 4) {
        fill = fill | (fill << 4);
        fill = fill | (fill << 8);
        fill = fill | (fill << 16);
    } else {
        fill = fill | (fill << 8);
        fill = fill | (fill << 16);
    }
    x1    = x & ~7;
    pal   = h->pal;
    y1    = y & ~7;
    xend8 = (xend + 7) & ~7;
    yend8 = (yend + 7) & ~7;
    cxu   = (mode << 6) / 8;
    tx0   = x1 / 8;
    ty    = y1 / 8;
    w40   = h->w4;
    w3c   = h->w8;
    base  = h->base;
    b0    = pal.b[0];
    b1    = pal.b[1];
    if (y1 >= yend8) {
        return;
    }
    do {
        tx = tx0;
        if (y1 < y) {
            yskip = y - y1;
        } else {
            yskip = 0;
        }
        wd = yend - y1;
        if (wd > 8) {
            wd = 8;
        }
        lenY = wd - yskip;
        xc   = x1;
        if (xc < xend8) {
            do {
                t = func_ov123_0206ac1c(tx, ty, w40, w3c, b0, b1);
                if (xc < x) {
                    xskip = x - xc;
                } else {
                    xskip = 0;
                }
                wd = xend - xc;
                if (wd > 8) {
                    wd = 8;
                }
                func_ov123_0206aacc(cxu * t + base, xskip, yskip, wd - xskip, lenY, fill, mode);
                tx += 1;
                xc += 8;
            } while (xc < xend8);
        }
        ty += 1;
        y1 += 8;
    } while (y1 < yend8);
}
