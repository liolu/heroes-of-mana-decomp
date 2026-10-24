/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Sh {
    u8 pad[0x214];
    u32 f : 3;
    u32 a : 3;
    u32 b : 3;
    u32 d : 3;
    u32 c : 3;
    u32 e : 3;
    union {
        u32 w;
        struct {
            u32 lo : 8;
            u32 g : 1;
            u32 h : 1;
        } bits;
    } u;
    u8 pad2[0x2D0 - 0x21C];
} Sh;
typedef struct Gs {
    u8 pad[0x28];
    Sh *arr;
} Gs;
extern Gs *data_0203673c;
void func_02002994(Sh *, s32);
void func_020029dc(Sh *, s32);

void SetShisetuLevelByKuniNo(s32 kind, s32 val, s32 idx) {
    Sh *s;
    switch (kind) {
        case 0:
            if (val > 6) {
                val = 6;
            }
            data_0203673c->arr[idx].a = val;
            break;
        case 1:
            if (val > 5) {
                val = 5;
            }
            data_0203673c->arr[idx].b = val;
            break;
        case 2:
            if (val > 5) {
                val = 5;
            }
            data_0203673c->arr[idx].c = val;
            break;
        case 3:
            if (val > 5) {
                val = 5;
            }
            data_0203673c->arr[idx].d = val;
            break;
        case 5:
            if (val > 3) {
                val = 3;
            }
            data_0203673c->arr[idx].e = val;
            break;
        case 7:
            if (val > 4) {
                val = 4;
            }
            data_0203673c->arr[idx].f = val;
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            s = &data_0203673c->arr[idx];
            if (val != 0) {
                if (kind != 9) {
                    s->u.w |= 1 << (kind - 8);
                }
                func_02002994(data_0203673c->arr, kind - 8);
            } else {
                if (kind != 9) {
                    s->u.w &= ~(1 << (kind - 8));
                }
                func_020029dc(data_0203673c->arr, kind - 8);
            }
            break;
        case 4:
            if (val != 0) {
                val = 1;
            }
            data_0203673c->arr[idx].u.bits.g = val;
            break;
        case 6:
            if (val != 0) {
                val = 1;
            }
            data_0203673c->arr[idx].u.bits.h = val;
            break;
    }
}
