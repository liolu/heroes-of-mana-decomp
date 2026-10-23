/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 p0 : 14;
    u32 kind : 8;
    u32 p1 : 4;
    u32 dir : 3;
    u32 p2 : 3;
    u8 pad4[0x5C];
    s8 s60;
    s8 s61;
    s8 s62;
    s8 s63;
    u8 pad64[0xC];
    u32 w70;
    u8 pad74[0x50];
    u32 wc4;
    u16 hc8;
    u8 padca[0x110 - 0xCA];
} Ent;

typedef struct {
    u8 pad0[0x10];
    u32 p : 28;
    u32 b28 : 1;
    u32 b29 : 1;
    u32 q : 2;
    u8 pad14[0x194];
    s8 sel;
    u8 pad1a9[0xB7];
    u32 w260;
    u8 pad264[0x90];
    u16 h2f4;
    u8 pad2f6[0x48E];
    void *kt;
    u8 c788;
    u8 c789;
    u8 c78a;
    u8 c78b;
} Gs;

extern Gs *data_ov000_02051548;
extern Ent data_ov003_020b0cf0[];
s32 GetDisPos(Ent *, s32 *, s32 *);
void OS_FreeToHeap(s32, s32, void *);
void *GetKisekiTable(s32, s32, s32, s32, s32, s32);
void PutKisekiRoadIn3D(void *, s32, s32, s32, s32);

void putKisekiToDistance(void) {
    s32 a;
    s32 b;
    Ent *e;
    if (data_ov000_02051548->b29 && data_ov000_02051548->b28) {
        if (data_ov000_02051548->sel != -1 && data_ov000_02051548->w260 != 0) {
            e = &data_ov003_020b0cf0[data_ov000_02051548->sel];
            if (!(e->kind != 3 && e->kind != 4)) {
                if (GetDisPos(e, &a, &b) == 1) {
                    if (e->s60 != data_ov000_02051548->c788 || e->s61 != data_ov000_02051548->c789 ||
                        a != data_ov000_02051548->c78a || b != data_ov000_02051548->c78b) {
                        if (data_ov000_02051548->kt != NULL) {
                            OS_FreeToHeap(0, -1, data_ov000_02051548->kt);
                            data_ov000_02051548->kt = NULL;
                        }
                        data_ov000_02051548->kt   = GetKisekiTable(e->dir, e->s60, e->s61, a, b, e->w70);
                        data_ov000_02051548->c788 = e->s60;
                        data_ov000_02051548->c789 = e->s61;
                        data_ov000_02051548->c78a = a;
                        data_ov000_02051548->c78b = b;
                    }
                    if (data_ov000_02051548->kt != NULL) {
                        PutKisekiRoadIn3D(data_ov000_02051548->kt, data_ov000_02051548->h2f4, e->s60, e->s61, 0x3E0);
                    }
                }
            }
        }
    } else {
        if (data_ov000_02051548->sel != -1 && data_ov000_02051548->w260 != 0) {
            e = &data_ov003_020b0cf0[data_ov000_02051548->sel];
            if (!(e->kind != 3 && e->kind != 4)) {
                PutKisekiRoadIn3D((void *) e->wc4, e->hc8, e->s62, e->s63, 0x3E0);
            }
        }
    }
}
