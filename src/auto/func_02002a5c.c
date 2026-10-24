#include "m2c.h"
typedef struct {
    u8 pad[8];
    u32 q0 : 10;
    u32 kind : 4;
    u32 q1 : 18;
    u8 pad2[0x14];
} T;
typedef struct {
    u32 p0 : 2;
    u32 idx : 9;
    u32 p1 : 21;
    u8 pad[8];
    u8 b[3];
    u8 pad2[0x25];
} R;
typedef struct {
    u8 pad[0x264];
    u16 list[0x25];
} O;
typedef struct {
    u8 pad[4];
    T *tab;
    u8 pad2[0x18];
    u32 cnt;
    R *rec;
    O *obj;
} G;
extern G *data_0203673c;
void func_02002b6c(s32, s32, s32);
void func_02002a5c(void) {
    s32 j;
    s32 i;
    u32 k;
    O *o = data_0203673c->obj;
    for (i = 0; i < 0x25; i++) {
        if (o->list[i] != 0xffff) {
            k = data_0203673c->rec[o->list[i]].idx;
            if (data_0203673c->tab[k].kind == 5) {
                if (k < data_0203673c->cnt || k == 0x3c) {
                    for (j = 0; j < 3; j++) {
                        if (data_0203673c->rec[o->list[i]].b[j] != 0) {
                            func_02002b6c(data_0203673c->rec[o->list[i]].b[j], 1, 0);
                            data_0203673c->rec[o->list[i]].b[j] = 0;
                        }
                    }
                }
            }
        }
    }
}
