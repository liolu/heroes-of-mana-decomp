#include "m2c.h"

typedef struct F {
    u32 p : 2;
    u32 c : 1;
    u32 p2 : 20;
    u32 sel : 3;
    u32 hi : 6;
} F;
typedef struct G {
    u8 pad[0x488];
    F f;
} G;
typedef struct H {
    u8 pad[0x24];
    u8 *p;
} H;
typedef struct K {
    u8 pad[0x80];
    u16 idx;
} K;
void func_ov112_020e6004(s32);
void func_ov112_020e72cc(s32);
extern G data_ov112_020ec588;
extern H *data_0203673c;
extern K data_ov112_020ec988;

void func_ov112_020e61d4(void) {
    s32 i;
    u8 v;
    u8 *a;
    switch (data_ov112_020ec588.f.sel) {
        case 0:
            i = 0;
            break;
        case 1:
            i = 1;
            break;
        case 2:
            i = 2;
            break;
        default:
            return;
    }
    a = data_0203673c->p + data_ov112_020ec988.idx * 0x34 + 0xC;
    v = a[i];
    if (v == 0) {
        return;
    }
    a[i] = 0;
    func_ov112_020e6004(v);
    func_ov112_020e72cc(1);
    data_ov112_020ec588.f.c = 1;
}
