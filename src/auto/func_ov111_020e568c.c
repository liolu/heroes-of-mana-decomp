#include "m2c.h"

typedef struct {
    u32 lo;
    u16 hi;
    u16 pad;
} Entry;

typedef struct {
    u32 hdr[4];
    Entry table[128];
    u32 count : 8;
    u32 rest : 24;
} D;

extern D data_ov111_020ec674;

void func_ov111_020e568c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    Entry *e;
    u32 idx;

    idx = data_ov111_020ec674.count;
    if (idx >= 0x80) {
        return;
    }
    e = &data_ov111_020ec674.table[idx];
    e->lo = arg4 | (arg5 | ((arg1 & 0xFF) | (arg7 << 10)) | ((u32) (arg0 & 0x1FF) << 16));
    e->hi = arg3 | (arg6 << 10) | (arg2 << 12);
    data_ov111_020ec674.count++;
}
