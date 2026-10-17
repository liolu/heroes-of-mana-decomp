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
    u8 c210[12];
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
    u8 pad2c[4];
    void *buf30;
} Sys;

extern Sys *data_0203673c;
extern u32 data_02036738;
void MIi_CpuClear16(u16 v, void *dst, u32 size);

void func_020018b8(void) {
    int i, j;
    Chan *c = data_0203673c->chan;
    void *p;
    u32 *q;
    for (i = 0; i < 4; i++, c++) {
        c->b21 = 0;
        c->b22 = 0;
        c->b24 = 0;
        c->b26 = 0;
        c->f2  = 0;
        c->b23 = 0;
        MIi_CpuClear16(0, c->ch, 8);
        MIi_CpuClear16(0, c->c210, 12);
        MIi_CpuClear16(0, c->e, 0x48);
        MIi_CpuClear16(0, c->tbl, 0x4a);
        c->s[0] = 0;
        c->s[1] = 0;
        c->s[2] = 0;
        MIi_CpuClear16(0, c->b2b4, 12);
        MIi_CpuClear16(0, c->c2c0, 16);
        c->on   = 1;
        c->mode = i;
        c->f17  = 0;
        for (j = 0; j < 8; j++) {
            c->ch[j] = 8;
        }
        for (j = 0; j < 12; j++) {
            c->b2b4[j].vol = 0x7f;
        }
        q = &c->e[0].v;
        for (j = 0; j < 9; j++, q += 2) {
            *q &= ~0xf;
        }
        for (j = 0; j < 37; j++) {
            c->tbl[j] = 0xffff;
        }
        c->s[0] = 0xffff;
    }
    MIi_CpuClear16(0, data_0203673c->buf24, 0x11e0);
    MIi_CpuClear16(0, data_0203673c->buf30, 0x14);
    data_02036738 = 5;
}
