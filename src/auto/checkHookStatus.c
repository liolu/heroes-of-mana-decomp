/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 b0 : 1;
    u32 pad : 31;
    u32 pad1;
    u32 pad2 : 23;
    u32 st : 4;
    u8 pad3[0x54];
    s8 c0;
    s8 c1;
    u8 pad4[0xAE];
} H;
typedef struct {
    u32 b0 : 1;
    u32 pad : 31;
    u32 pad0;
    u32 pad8 : 29;
    u32 b29 : 1;
    u32 pad9 : 2;
    u32 pad1[0x27];
    u16 lo : 7;
    u16 mid : 7;
    u16 hi : 2;
} A;
A *GetShipAooSt(s32);
extern H data_ov003_020b0cf0[];

s32 checkHookStatus(s32 idx) {
    s32 i;
    A *a;
    H *h;
    h = &data_ov003_020b0cf0[idx];
    if (h->b0 == 0) {
        return -1;
    }
    if (h->st != 4) {
        return -1;
    }
    for (i = 0; i < 4; i++) {
        a = GetShipAooSt(i);
        if (a != NULL && a->b0 != 0 && a->b29 != 0 && (u16) (a->hi + 0xFFFF) <= 1 && a->lo == h->c0 && a->mid == h->c1) {
            return i;
        }
    }
    return -1;
}
