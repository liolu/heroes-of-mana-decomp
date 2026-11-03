/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 p0 : 8;
    u32 t : 3;
    u32 p1 : 21;
} T0;
typedef struct {
    u32 p0 : 23;
    u32 k : 4;
    u32 p1 : 2;
    u32 b29 : 1;
    u32 p2 : 2;
} F8;
typedef struct {
    u16 b0 : 1;
    u16 p0 : 15;
} H2C;
typedef struct {
    u32 p0 : 10;
    u32 v : 4;
    u32 p1 : 18;
} UT;
typedef struct {
    T0 w0;
    u8 pad0[4];
    F8 f8;
    u8 pad1[0x2c - 0xc];
    H2C h2c;
    u8 pad2[0x39 - 0x2e];
    u8 b39;
    u8 pad3[0x80 - 0x3a];
    u8 b80;
    u8 pad4[0xd8 - 0x81];
    u16 hd8;
    u8 pad5[0xec - 0xda];
    UT *unit;
} O;
typedef struct {
    u8 pad[0x10];
    u16 h10;
    u16 h12;
    u8 pad2[0x34 - 0x14];
} E;
typedef struct {
    u8 pad[0x24];
    E *e;
} G;

extern u16 data_ov003_020a7bac[];
extern G *data_0203673c;

s32 func_0202d478(s32, s32);

s32 GetAreaMapIcon(O *o) {
    s32 icon, pct;
    u32 k;
    E *e;
    s32 idx;

    icon = data_ov003_020a7bac[o->b39];
    k    = o->f8.k;
    if (k >= 4) {
        switch (k) {
            case 4:
                icon = 0x2b;
                break;
            case 5:
                icon = 0x29;
                break;
            case 6:
                icon = 0x2a;
                break;
            case 7:
                icon = 0x2c;
                break;
            default:
                icon = 0x2a;
                break;
        }
    } else {
        if (o->f8.b29) {
            if (icon != 0x13) {
                if (o->w0.t == 2) {
                    icon = 0x18;
                } else if (o->w0.t == 6) {
                    icon = 0x16;
                } else {
                    if (o->w0.t < 2 || o->w0.t > 6) {
                        icon = 0x17;
                    } else {
                        icon = 0x15;
                    }
                }

                pct = func_0202d478(data_0203673c->e[o->hd8].h10 * 100, data_0203673c->e[o->hd8].h12);
                if (pct < 0x51) {
                    if (pct >= 0x33) {
                        icon += 4;
                    } else if (pct >= 0x15) {
                        icon += 8;
                    } else {
                        icon += 12;
                    }
                }
                if (k & 2) {
                    icon += 0x2f;
                } else if (o->h2c.b0) {
                    icon += 0x1b;
                }
            }
        } else {
            if (icon == 1) {
                if (o->w0.t == 2) {
                    icon = 4;
                } else if (o->w0.t == 6) {
                    icon = 2;
                } else if (o->w0.t == 0) {
                    icon = 3;
                } else if (o->w0.t == 4) {
                    icon = 1;
                } else {
                    icon = o->b80;
                }
            }
            if (icon == 0 && o->unit->v == 5) {
                icon = 6;
                if (k & 2) {
                    icon = 0x14;
                } else if (o->h2c.b0) {
                    icon = 0xd;
                }
            } else if (icon == 0 && o->unit->v == 7) {
                icon = 0x2d;
                if (k & 2) {
                    icon = 0x2f;
                } else if (o->h2c.b0) {
                    icon = 0x2e;
                }
            } else {
                if (k & 2) {
                    icon += 0xe;
                } else if (o->h2c.b0) {
                    icon += 7;
                }
            }
        }
    }
    return icon;
}
