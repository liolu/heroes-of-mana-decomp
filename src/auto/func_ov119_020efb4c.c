#include "m2c.h"

typedef struct Sys {
    u8 pad0[0x14];
    u8 *tbl;
    u8 pad1[0x4F8 - 0x18];
    u16 pos;
} Sys;

typedef struct Inner {
    u8 pad[0x108C];
    u32 lo : 6;
    u32 v : 3;
    u32 hi : 23;
} Inner;

typedef struct G {
    u8 pad[0x2C];
    Inner *in;
} G;

extern Sys *data_ov119_020f2f68;
extern s32 data_ov119_020f1e44;
extern G *data_0203673c;
extern u8 data_ov000_02050718[];
s32 func_ov119_020edf78(s32);
void func_02003734(u8, s32);
void func_02003948(s32, s32);
void func_020038ac(s32);

void func_ov119_020efb4c(void) {
    s32 r;
    if (data_ov119_020f2f68->tbl[data_ov119_020f2f68->pos + 1] == 0) {
        func_02003734(0, func_ov119_020edf78(2));
        data_ov119_020f2f68->pos += 4;
        return;
    }
    r = func_ov119_020edf78(2);
    if (r == -1) {
        r = data_ov119_020f1e44;
    }
    func_02003948(r, 0);
    func_020038ac(r);
    func_02003734(data_ov000_02050718[data_0203673c->in->v], func_ov119_020edf78(4));
    data_ov119_020f2f68->pos += 6;
}
