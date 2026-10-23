/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x90];
    s32 lvl;
} G;
typedef struct {
    s32 a[6];
} L;

extern G *data_ov000_02051548;
extern L data_ov003_020a6204;

void SetShisetuLevel(s32, s32);

void SG_setSisetuFree(void) {
    L lv = data_ov003_020a6204;
    s32 t;

    t = data_ov000_02051548->lvl;
    if (t >= 3) {
        lv.a[2] = 1;
    }
    if (t >= 4) {
        lv.a[4] = 1;
        SetShisetuLevel(4, 1);
    }
    if (data_ov000_02051548->lvl >= 6) {
        SetShisetuLevel(0xc, 1);
        lv.a[0] = 2;
        lv.a[3] = 1;
        lv.a[4] = 2;
    }
    if (data_ov000_02051548->lvl >= 8) {
        SetShisetuLevel(0xa, 1);
        lv.a[1] = 2;
        lv.a[2] = 2;
        lv.a[5] = 1;
    }
    if (data_ov000_02051548->lvl >= 0xc) {
        SetShisetuLevel(0xf, 1);
        lv.a[0] = 3;
        lv.a[3] = 2;
        SetShisetuLevel(6, 1);
    }
    if (data_ov000_02051548->lvl >= 0xd) {
        SetShisetuLevel(8, 1);
        lv.a[1] = 3;
        lv.a[2] = 3;
        lv.a[4] = 3;
    }
    if (data_ov000_02051548->lvl >= 0xe) {
        SetShisetuLevel(0xb, 1);
        lv.a[1] = 4;
        lv.a[2] = 4;
        lv.a[3] = 3;
    }
    if (data_ov000_02051548->lvl >= 0x10) {
        SetShisetuLevel(0xd, 1);
        lv.a[0] = 4;
        lv.a[3] = 4;
        lv.a[4] = 4;
    }
    if (data_ov000_02051548->lvl >= 0x11) {
        SetShisetuLevel(0xe, 1);
        lv.a[1] = 5;
        lv.a[2] = 5;
        lv.a[5] = 2;
    }
    if (data_ov000_02051548->lvl >= 0x15) {
        SetShisetuLevel(9, 1);
        lv.a[1] = 6;
        lv.a[3] = 5;
        lv.a[4] = 5;
        lv.a[5] = 3;
    }
    SetShisetuLevel(7, lv.a[0]);
    SetShisetuLevel(0, lv.a[1]);
    SetShisetuLevel(1, lv.a[2]);
    SetShisetuLevel(2, lv.a[3]);
    SetShisetuLevel(3, lv.a[4]);
    SetShisetuLevel(5, lv.a[5]);
}
