/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[4];
    s32 f4;
    u8 *f8;
    u32 *tab;
} S;
typedef struct {
    u32 pad : 11;
    u32 k : 4;
    u32 pad1 : 17;
    u8 pad2[8];
    S *s;
    u8 pad3[4];
    s32 f14;
    u8 pad4[0x3C];
    u16 *f54;
    u8 pad5[0x12];
    u16 h6a;
    u16 h6c;
    u16 h6e;
    u16 h70;
    u16 h72;
    u16 h74;
} O;
void ReadAnaFileOfsSize(s32, u16 *, s32);
void ReadAnaFileNowSeekPos(u16 *, s32);

void setP_ObjTextureFlyArm(O *o, u32 i) {
    u32 *tab;
    s32 r2;
    S *s;
    u16 *p;
    s   = o->s;
    tab = s->tab;
    r2  = s->f4;
    if (i >= tab[0]) {
        i = 0;
    }
    if (r2 == 0) {
        o->f54 = (u16 *) (s->f8 + (tab[i + 1] & ~0xFF000000));
    } else {
        ReadAnaFileOfsSize(r2 + (tab[i + 1] & ~0xFF000000), o->f54, 0xC);
        ReadAnaFileNowSeekPos(o->f54 + 6, o->f14);
    }
    o->k   = o->s->tab[i + 1] >> 24;
    p      = o->f54;
    o->h6a = p[0];
    o->h6c = p[1];
    o->h6e = p[2];
    o->h70 = p[3];
    o->h72 = p[4];
    o->h74 = p[5];
}
