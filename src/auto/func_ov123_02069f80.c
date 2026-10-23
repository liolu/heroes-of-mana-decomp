/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct Tbl {
    u8 pad[2];
    u16 stride;
    u8 pad2[4];
    u8 d[1];
} Tbl;
typedef struct Hdr {
    u8 pad[2];
    u16 first;
    u8 pad2[4];
    Tbl *tbl;
} Hdr;
typedef struct Obj {
    Hdr *hdr;
    u8 pad[4];
    u16 mode;
} Obj;
typedef struct Loc {
    s8 *g;
    u8 *d;
} Loc;
typedef struct Self {
    u8 pad[0x14];
    void (*fn)(struct Self *, Obj *, s32, s32, s32, Loc *);
} Self;
u16 func_ov123_02069898(Obj *, u16);
s8 *func_ov123_0206983c(Obj *, u16);
s32 func_ov123_02069f80(Self *self, Obj *obj, s32 x, s32 y, s32 a5, u16 a6) {
    Loc l;
    u16 idx;
    idx = func_ov123_02069898(obj, a6);
    if (idx == 0xffff) {
        idx = obj->hdr->first;
    }
    l.g = func_ov123_0206983c(obj, idx);
    l.d = obj->hdr->tbl->d + idx * obj->hdr->tbl->stride;
    self->fn(self, obj, x + l.g[0], y, a5, &l);
    if (obj->mode != 0) {
        return l.g[0] + ((u8 *) l.g)[1];
    }
    return l.g[2];
}
