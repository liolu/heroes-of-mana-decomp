/* compiler: 2.0/sp1p5 -profile */
/* match "2.0/sp1p5 -profile" */
#include "m2c.h"
typedef struct {
    u32 w0;
    s16 s;
    s16 t;
    u32 f8;
    u32 fc;
} E;
typedef struct {
    u8 pad[8];
    s8 a;
    s8 b;
    u8 pad2[10];
} F;
typedef struct {
    u8 pad[8];
    u32 f8;
    E *e;
    u8 pad2[4];
    F *f;
} G;
s32 GetType_TexFlip(s8, s8);
s32 GetType_TexRepeat(s8, s8);
s32 GetType_TexSizeS(s16);
s32 GetType_TexSizeT(s16);
extern G *data_ov003_020aea84;
typedef enum {
    PL_TRNS = 0,
    PL_USE  = 1
} Pl;

void SetImage(s32 idx, s32 j) {
    E *e;
    E *r7;
    F *f;
    Pl r8;
    u32 r9;
    s32 r6;
    s32 r5;
    s32 r4;
    if (idx == -1) {
        *(u32 *) 0x040004A8 = 0;
    } else {
        e  = data_ov003_020aea84->e;
        f  = data_ov003_020aea84->f + j;
        r7 = e + idx;
        r8 = (r7->fc != 0) ? PL_TRNS : PL_USE;
        if (idx != 0) {
            r9 = r7->f8 + e->f8;
        } else {
            r9 = r7->f8;
        }
        r6 = GetType_TexFlip(f->a, f->b);
        r5 = GetType_TexRepeat(f->a, f->b);
        r4 = GetType_TexSizeT(r7->t);
        *(u32 *) 0x040004A8 =
            (r9 >> 3) | (r7->w0 << 26) | (GetType_TexSizeS(r7->s) << 20) | (r4 << 23) | (r5 << 16) | (r6 << 18) | (r8 << 29);
    }
}
