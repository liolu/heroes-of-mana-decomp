#include "m2c.h"

typedef struct {
    u32 lo : 16;
    u32 on : 1;
    u32 f17 : 4;
    u32 b21 : 1;
    u32 b22 : 1;
    u32 b23 : 1;
    u32 b24 : 2;
    u32 b26 : 6;
    u32 mode : 2;
    u32 f2 : 6;
    u32 rest : 24;
    u8 ch[8];
    u8 pad[0x200];
    struct {
        u32 lo : 28;
        u32 bit28 : 1;
        u32 hi : 3;
        u32 b;
        u32 mask;
    } c210;
    struct {
        u32 v;
        u32 w;
    } e[9];
    u16 tbl[37];
    u16 s[3];
    struct {
        u8 vol : 7;
        u8 pan : 1;
    } b2b4[12];
    u8 c2c0[16];
} Chan;

typedef struct {
    u8 pad0[0x24];
    void *buf24;
    Chan *chan;
} Sys;

typedef struct {
    u32 pad;
    s32 count;
    u8 data[1];
} Info;

extern Sys *data_0203673c;
void MIi_CpuClear16(u16 v, void *dst, u32 size);
void MIi_CpuCopy16(void *src, void *dst, u32 size);
Info *func_02001598(u32 type, s32 *size);
void func_02002994(Chan *c, u32 bit);
void OS_FreeToHeap(u32 a, s32 b, void *p);

void func_02001ba0(void) {
    int i;
    Info *info;
    int j;
    s32 n;
    u8 *src;
    Chan *c;
    s32 size;
    u32 mask;
    info = func_02001598(8, &size);
    n    = info->count;
    src  = info->data;
    c    = data_0203673c->chan;
    for (i = 0; i < 4; i++, src += 12, c++) {
        MIi_CpuClear16(0, c, 0x2d0);
        if (i < n) {
            c->on   = 1;
            c->mode = i;
            c->f17  = i + 1;
            for (j = 0; j < 8; j++) {
                c->ch[j] = 8;
            }
            for (j = 0; j < 12; j++) {
                c->b2b4[j].vol = 0x7f;
            }
            MIi_CpuCopy16(src, &c->c210, 12);
            if (c->c210.bit28 == 1) {
                c->b26 = 1;
                c->f2  = 1;
                c->e[6].v |= 0x100;
                c->e[8].v |= 0x100;
            }
        }
        mask = c->c210.mask;
        for (j = 0; j < 8; j++) {
            if (mask & (1 << j)) {
                func_02002994(c, j);
            }
        }
        for (j = 0; j < 37; j++) {
            c->tbl[j] = 0xffff;
        }
        c->s[0] = 0xffff;
    }
    if (info != 0) {
        OS_FreeToHeap(0, -1, info);
    }
    MIi_CpuClear16(0, data_0203673c->buf24, 0x11e0);
}
