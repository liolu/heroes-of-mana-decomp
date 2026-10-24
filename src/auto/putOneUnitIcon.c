/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    u32 y : 28;
    u32 f28 : 1;
    u32 f29 : 1;
    u32 x : 2;
} B;
typedef struct {
    u8 pad[4];
    u8 *tbl;
} C;
typedef struct {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
} Q;
typedef struct {
    u8 p0[8];
    s8 b8;
    s8 b9;
    u8 ba;
    s8 bb;
    u32 w;
    u8 pad[0x72 - 0x10];
    s16 h72;
} Ic;
typedef struct {
    u8 pad[0x2ec];
    struct {
        void *a;
        void *b;
        u32 c;
    } e[1];
} A0;

extern void *ReadAnaFile(s32, Q *, s32 *);
extern void UpDownColor(void *, void *, s32, s32);
extern void SetExtObjPaletteData(void *, s32, s32, s32);
extern void *ReadShipsFile(s32, s32, s32 *);
extern Ic *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern u8 *data_ov109_020ea340;
extern B *data_ov000_02051548;
extern C *data_0203673c;

Ic *putOneUnitIcon(s32 i, s32 arg) {
    s32 sz;
    Q q;
    void *pal;
    s32 pi;
    u32 idx;
    s32 o;
    s32 t;

    idx = *(u32 *) (data_ov109_020ea340 + i * 4 + 0x368);
    q.a = 6;
    q.b = 1;
    if (data_ov000_02051548->f29 != 0 && data_ov000_02051548->f28 != 0) {
        q.c = 2;
    } else {
        q.c = 1;
    }
    q.d = data_0203673c->tbl[idx * 0x20 + 0x14];
    pal = ReadAnaFile(4, &q, &sz);
    if (*(u32 *) (data_ov109_020ea340 + i * 4 + 0x3a8) != 0) {
        UpDownColor(pal, pal, 0x10, -0x10);
    }
    o                                            = i * 12;
    pi                                           = i + 0x30;
    *(void **) (data_ov109_020ea340 + o + 0x2f0) = pal;
    SetExtObjPaletteData(pal, pi << 5, sz, 0);
    *(void **) (data_ov109_020ea340 + o + 0x2ec) = ReadShipsFile(7, data_0203673c->tbl[idx * 0x20 + 0x14], &sz);
    t                                            = i + 0x31C;
    {
        Ic *ic  = SetStatusIcon(t + 0xFC00, 0, arg, 0xBC, pi, 0, 0, data_ov109_020ea340 + 0x3c,
                                *(void **) (data_ov109_020ea340 + o + 0x2ec), 0);
        ic->b8  = 10;
        ic->bb  = -10;
        ic->b9  = 14;
        ic->h72 = 0;
        ic->w |= 0x200000;
        return ic;
    }
}
