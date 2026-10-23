/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 26;
    u32 t : 3;
    u32 rest : 3;
    u32 pad1;
    u32 pad2 : 29;
    u32 f : 1;
    u32 rest2 : 2;
    u8 p[0x38];
    s32 f44;
    u8 p2[4];
    s32 f4c;
    u8 p3[0x10];
    s8 x;
    s8 y;
} O;
typedef struct {
    u32 pad : 14;
    u32 kind : 5;
    u32 pad2 : 4;
    u32 m : 4;
} C;
typedef struct {
    u8 pad[0x290];
    s32 *p290;
    u8 pad2[0x4C];
    u8 *p2e0;
} G;
extern G *data_ov000_02051548;
s32 GetHighPlace(s32, s32);
s32 CheckEfTakasa(O *a, O *b, C *c) {
    s32 va = a->f44;
    s32 vb = b->f44;
    s32 d, y, x, hp;
    u8 *tbl;
    u32 h;
    if (a->f != 0) {
        va += a->f4c;
    } else if (a->t == 1) {
        va += 0x2000;
    }
    if (b->f != 0) {
        vb += b->f4c;
    } else if (b->t == 1) {
        vb += 0x2000;
    }
    switch (c->kind) {
        case 1:
            d = va - vb;
            if (d < 0) {
                d = -d;
            }
            if ((u32) d >= (u32) ((((u32) c->m << 14) >> 1) + 0x1000)) {
                return 0;
            }
            break;
        case 3:
            y   = b->y;
            x   = b->x;
            tbl = data_ov000_02051548->p2e0;
            h   = *(u16 *) (tbl + (y * 0x28 + x) * 2);
            if ((*(u32 *) (tbl + h) & 0x1000000) == 0) {
                hp = GetHighPlace(x, y);
                if ((0x28 << *data_ov000_02051548->p290) * hp > vb) {
                    return 0;
                }
            }
            break;
    }
    return 1;
}
