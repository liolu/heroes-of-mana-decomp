#include "m2c.h"
typedef struct {
    u8 pad[0x20];
    u32 : 12;
    u32 fl : 1;
} G;
typedef struct {
    u8 pad[8];
    u32 pos;
} R;
extern G *data_ov000_02051548;
s32 GetTexArea(u32);
s32 func_ov004_020ba028(R *r, u32 size) {
    s32 t;
    if (data_ov000_02051548->fl) {
        return 0xf0000000;
    }
    if (size & 0x1f) {
        size += 0x20 - (size & 0x1f);
    }
    t = GetTexArea(size);
    if (t == -1) {
        return 0xf0000000;
    }
    r->pos += size;
    return t;
}
