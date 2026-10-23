/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct Ent {
    u8 pad0[4];
    void *buf;
    s32 cap;
    u8 pad1[0x18];
    s64 time;
    s32 flag;
} Ent;
typedef struct Root {
    Ent ents[1];
} Root;
typedef struct Root2 {
    u8 pad[0x604];
    void (*cb)(s32, void *, s32);
    s32 on;
} Root2;
extern Ent *data_ov123_020e2048;
u8 func_ov123_0209a9fc(s32);
void MI_CpuCopy8(void *, void *, s32);
s64 func_0200f510(void);
void func_ov123_020a4758(s32 arg, void *src, s32 size) {
    u8 idx = func_ov123_0209a9fc(arg);
    Ent *e = &data_ov123_020e2048[idx];
    if (e->buf == 0) {
        return;
    }
    if (e->cap < size) {
        return;
    }
    MI_CpuCopy8(src, e->buf, size);
    if (((Root2 *) data_ov123_020e2048)->cb != 0) {
        ((Root2 *) data_ov123_020e2048)->cb(idx, e->buf, size);
    }
    if (((Root2 *) data_ov123_020e2048)->on == 0) {
        return;
    }
    if (e->flag == 0) {
        return;
    }
    e->time = func_0200f510();
}
