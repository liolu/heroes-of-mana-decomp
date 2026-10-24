#include "m2c.h"

typedef struct {
    u8 pad0[4];
    u8 mutex[0x18];
    s32 f1c;
    u16 f20;
    u8 pad22[2];
    u8 f24;
    u8 f25;
    u16 f26;
    u8 f28[1];
} Ctx;

typedef struct {
    u8 pad[0xa];
    s16 len;
    s32 **src;
} Ent;

extern Ctx *data_ov123_020e47a0;
extern s32 func_ov123_02073624(s32, void *);
extern void OS_LockMutex(void *);
extern Ent *func_ov123_02073aec(s32);
extern void func_0200e644(void *);
extern void MI_CpuCopy8(void *, void *, s32);

s32 func_ov123_020cd59c(void) {
    Ent *e;
    s32 v;
    data_ov123_020e47a0->f24 = 8;
    data_ov123_020e47a0->f25 = 2;
    if (func_ov123_02073624(data_ov123_020e47a0->f1c, data_ov123_020e47a0->f28) == 0) {
        OS_LockMutex(data_ov123_020e47a0->mutex);
        e = func_ov123_02073aec(data_ov123_020e47a0->f1c);
        if (e != 0) {
            MI_CpuCopy8(*e->src, data_ov123_020e47a0->f28, e->len);
        }
        func_0200e644(data_ov123_020e47a0->mutex);
        if (e == 0) {
            return -0x1e;
        }
    }
    v                        = data_ov123_020e47a0->f20;
    data_ov123_020e47a0->f26 = ((v >> 8) & 0xFF) | ((v << 8) & 0xFF00);
    return data_ov123_020e47a0->f20;
}
