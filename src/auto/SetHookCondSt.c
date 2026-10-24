/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 id : 7;
    u8 fl : 1;
} B;

typedef struct {
    u8 pad[8];
    u32 p0 : 23;
    u32 kind : 4;
    u32 p1 : 5;
    u8 pad1[0x110 - 0xc];
} Ic;

typedef struct {
    u8 pad[8];
    u32 p0 : 23;
    u32 k : 4;
    u32 p1 : 2;
    u32 act : 1;
    u32 p2 : 2;
    u8 pad1[0xab - 0xc];
    u8 id;
} O;

typedef struct {
    u8 pad[0x28];
    u8 *tbl;
} G;

extern Ic data_ov003_020b0cf0[];
extern G *data_0203673c;

void SetHookCondSt(O *o) {
    B *arr;
    s32 i;
    s32 id;

    if (o->act != 0) {
        id = o->id;
        if (id < 0x42) {
            if (data_ov003_020b0cf0[id].kind == 4) {
                arr = (B *) (data_0203673c->tbl + o->k * 0x2d0 + 0x2b4);
                for (i = 0; i < 12; i++) {
                    if (id == arr[i].id || arr[i].id == 0x7f) {
                        break;
                    }
                }
                if (i < 12) {
                    if (i > 0) {
                        do {
                            arr[i].id = arr[i - 1].id;
                            arr[i].fl = arr[i - 1].fl;
                            i--;
                        } while (i > 0);
                    }
                    arr[0].id = id;
                    arr[0].fl = 1;
                }
            }
        }
    }
}
