#include "m2c.h"

typedef struct Ent {
    u32 f0 : 1;
    u32 f1 : 1;
    u32 kind : 8;
    u32 pad : 6;
    u32 id : 16;
    u32 val;
} Ent;
typedef struct Tbl {
    Ent e[0x80];
    u8 t1[12];
    u8 t2[12];
} Tbl;
typedef struct C {
    u8 pad[0xa8];
    u16 ha8;
    u8 pad2[8];
    u16 hb2;
    u8 pad3[4];
    u16 hb8;
    s16 hba;
    u16 hbc;
    u16 hbe;
} C;
typedef struct D {
    u8 pad[0x5ac];
    u8 n;
    u8 pad2[7];
    u32 lo : 10;
    u32 f : 8;
    u32 hi : 14;
} D;
typedef struct E {
    u8 pad[0xcd4];
    u32 v;
} E;

extern Tbl data_ov122_02062cb0;
extern u8 data_ov122_020630cc[];
extern C data_ov122_02063020;
extern D data_ov122_02062b20;
extern E data_ov122_02063b20;

void func_ov122_02051a20(void *);
u32 func_ov123_020d4b34(u16);
s32 func_ov123_020d4b78(u16);

void func_ov122_02051a68(void) {
    s32 n;
    s32 i;
    Ent *p;
    u32 r7;
    s32 k;

    p = data_ov122_02062cb0.e;
    for (i = 0; i < 0x80; i++) {
        p->f0   = 0;
        p->f1   = 0;
        p->kind = 3;
        p++;
    }
    for (i = 0; i < 12; i++) {
        data_ov122_02062cb0.t1[i] = 0xff;
        data_ov122_02062cb0.t2[i] = 0xff;
    }
    func_ov122_02051a20(data_ov122_020630cc);
    data_ov122_02063020.hbc = 0x38;
    data_ov122_02063020.hb2 = 0x60;
    data_ov122_02063020.hbe = 6;
    data_ov122_02063020.hb8 = 2;
    data_ov122_02063020.hba = -24;
    data_ov122_02062b20.f   = 1;
    k                       = 1;
    n                       = 0;
    for (; k < 0x1f; k++) {
        data_ov122_02062cb0.e[n].f0  = 1;
        data_ov122_02062cb0.e[n].val = func_ov123_020d4b34(k);
        data_ov122_02062cb0.e[n].id  = k;
        if (data_ov122_02063b20.v >= data_ov122_02062cb0.e[n].val) {
            data_ov122_02062cb0.e[n].kind = 2;
        } else {
            if (n == 0) {
                data_ov122_02062cb0.e[n].kind = 4;
                n++;
                break;
            }
            if (n != 0 && data_ov122_02062cb0.e[n - 1].kind != 3) {
                data_ov122_02062cb0.e[n].kind = 4;
                n++;
                break;
            }
            data_ov122_02062cb0.e[n].kind = 3;
        }
        n++;
        r7 = (u16) func_ov123_020d4b78(k);
        if (r7 != 0) {
            data_ov122_02062cb0.e[n].f0  = 1;
            data_ov122_02062cb0.e[n].val = func_ov123_020d4b34(k);
            data_ov122_02062cb0.e[n].id  = (u16) r7;
            if (data_ov122_02063b20.v >= data_ov122_02062cb0.e[n].val) {
                data_ov122_02062cb0.e[n].kind = 1;
            } else {
                data_ov122_02062cb0.e[n].kind = 3;
            }
            n++;
        }
    }
    data_ov122_02062b20.n   = n;
    data_ov122_02063020.ha8 = 0;
}
