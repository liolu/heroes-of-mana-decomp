/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct E {
    u16 img;
    u16 pal;
} E;

typedef struct H {
    u32 count;
    u32 n;
} H;

typedef struct T {
    H h;
    u32 data[1];
} T;

typedef struct S20 {
    u8 pad[0x20];
    u32 pad2 : 18;
    u32 div : 8;
} S20;

typedef struct S14 {
    u8 pad[0x14c];
    u32 tick;
} S14;

extern S20 *data_ov000_02051548;
extern S14 *data_ov000_0205154c;
extern void SetImage(u32, u32);
extern void SetPalette(u32, u32);

s32 TexAnimeMove(u32 *p, u32 key) {
    u32 cnt = p[0];
    u32 n   = p[1];
    p += 2;
    if (cnt != 0) {
        do {
            if (*p == key) {
                u32 *w  = p + 1;
                u32 idx = data_ov000_0205154c->tick / data_ov000_02051548->div % n;
                SetImage((u16) w[idx], key);
                SetPalette((u16) w[idx], (u16) (w[idx] >> 16));
                return 1;
            }
            p += n + 1;
        } while (--cnt != 0);
    }
    return 0;
}
