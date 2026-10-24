#include "m2c.h"

typedef struct D {
    u8 pad[0x2a];
    s16 v;
    u8 pad2[0xf0 - 0x2c];
    s32 idx;
    u8 pad3[0x4f8 - 0xf4];
    u16 c;
    u16 f : 1;
    u16 g : 15;
} D;
extern D *data_ov119_020f2f68;
s16 func_ov119_020edf78(s32);

void func_ov119_020ee854(void) {
    D *d   = data_ov119_020f2f68;
    s16 *p = (s16 *) ((u8 *) d + 0x2a);
    s32 o  = d->idx * 0x18;
    if (*(s16 *) ((u8 *) p + o) != 0) {
        *(s16 *) ((u8 *) p + o) -= 1;
    } else {
        *(s16 *) ((u8 *) d + d->idx * 0x18 + 0x2a) = func_ov119_020edf78(1);
    }
    if (*(s16 *) ((u8 *) data_ov119_020f2f68 + data_ov119_020f2f68->idx * 0x18 + 0x2a) == 0) {
        data_ov119_020f2f68->c += 3;
    }
    data_ov119_020f2f68->f = 1;
}
