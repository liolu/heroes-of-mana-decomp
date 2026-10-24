#include "m2c.h"

typedef struct D {
    u8 pad[0x3e];
    s16 v;
    u8 pad2[0x104 - 0x40];
    s32 idx;
    u8 pad3[0x50c - 0x108];
    u16 c;
    u16 f : 1;
    u16 g : 15;
} D;
extern D *data_ov111_020f1bd8;
s16 func_ov111_020e5d98(s32);

void func_ov111_020e6a24(void) {
    D *d   = data_ov111_020f1bd8;
    s16 *p = (s16 *) ((u8 *) d + 0x3e);
    s32 o  = d->idx * 0x18;
    if (*(s16 *) ((u8 *) p + o) != 0) {
        *(s16 *) ((u8 *) p + o) -= 1;
    } else {
        *(s16 *) ((u8 *) d + d->idx * 0x18 + 0x3e) = func_ov111_020e5d98(1);
    }
    if (*(s16 *) ((u8 *) data_ov111_020f1bd8 + data_ov111_020f1bd8->idx * 0x18 + 0x3e) == 0) {
        data_ov111_020f1bd8->c += 3;
    }
    data_ov111_020f1bd8->f = 1;
}
