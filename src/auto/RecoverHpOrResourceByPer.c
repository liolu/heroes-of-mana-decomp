/* compiler: 2.0/sp1p5 -profile */
/* near start: 8 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct E {
    u8 pad0[0x10];
    u16 cur;
    u16 max;
    u8 pad14[0x20];
} E;
typedef struct D {
    u8 pad[0x24];
    E *tbl;
} D;
typedef struct O {
    u32 w0;
    u32 pad4;
    u32 w8;
    u8 pad[0xDC];
    u32 *p;
} O;
void ChgPalletToDarkByHP(void *);
O *Get_aONEOBJadrsByCharno(s32);
void Status2Normal(void *);
void changeAnimationObj(void *, s32, u32);
s32 func_02002414(s32);
extern D *data_0203673c;

void RecoverHpOrResourceByPer(s32 chr, s32 per) {
    s32 i;
    O *o;
    u16 mx;
    s32 v;
    s32 off;
    u8 *t3;
    u8 *ip;

    i = func_02002414(chr);
    if (i != -1) {
        off = i * 0x34;
        t3  = *(u8 **) ((u8 *) data_0203673c + 0x24);
        mx  = *(u16 *) (t3 + off + 0x12);
        ip  = t3 + 0x10;
        v   = per * mx / 100;
        v += *(u16 *) (ip + off);
        if (v > mx) {
            v = mx;
        }
        *(u16 *) (ip + off) = v;
        o                   = Get_aONEOBJadrsByCharno(chr);
        if (o != NULL) {
            if (o->p != NULL) {
                o->p[2] &= ~0x800000;
            }
            Status2Normal(o);
            if (((o->w8 << 5) >> 0x1C) - 5 <= 1U) {
                ChgPalletToDarkByHP(o);
            } else {
                changeAnimationObj(o, 0, (o->w0 << 0x15) >> 0x1D);
            }
        }
    }
}
