/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad : 13;
    u32 idx : 4;
    u32 rest : 15;
} F;

typedef struct {
    u8 pad[0x28];
    u8 *base;
} G;

typedef struct {
    s32 n;
    s32 a[16];
    s32 b[16];
} R;

extern F *data_ov109_020ea340;
extern G *data_0203673c;
s32 GetCanBuildHouseDetail(void *, R *);

s32 GetPosNoInShisetuIconList(s32 pos) {
    R r;
    s32 i;
    if (GetCanBuildHouseDetail(data_0203673c->base + data_ov109_020ea340->idx * 0x2d0, &r) == 0) {
        return -1;
    }
    for (i = 0; i < r.n; i++) {
        if (r.b[i] == 0 && pos == r.a[i]) {
            return i;
        }
    }
    return -1;
}
