/* compiler: 2.0/sp1p5 -profile */
/* near start: 3 diffs with profile "2.0/sp1p5 -profile" */
/* near start: 4 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
    u32 rest : 28;
    u32 f4;
    u32 f8;
    u32 fc;
} Ent;

typedef struct {
    u8 pad0[0x170];
    u32 p0 : 5;
    u32 bit5 : 1;
    u32 p1 : 13;
    u32 fld : 4;
    u32 p2 : 9;
    u8 pad1[0x20];
    Ent *ents;
    s32 cnt;
} Gl;

typedef struct {
    u8 pad[0x10];
    u32 p0 : 29;
    u32 d : 1;
    u32 rest : 2;
} Ctx;

extern Ctx *data_ov000_02051548;
extern Gl data_ov003_020b5380;

void func_0200fddc(void);
s32 func_0200ed38(s32, s32, u32);

void GetDataMP(s32 unused, u16 *d, s32 flag) {
    u16 idx;
    u16 h;
    Ent *e;
    u32 a;
    u32 n;
    u16 *dst;
    s32 i;
    s32 cnt;
    if (d == 0 || data_ov000_02051548->d == 0) {
        data_ov003_020b5380.fld = 1;
        return;
    }
    idx = d[0];
    h   = d[1];
    if ((idx | (h << 16)) == 0x98765432) {
        data_ov003_020b5380.bit5 = 0;
        return;
    }
    if (data_ov003_020b5380.bit5 == 0 && flag != 0 && idx < (u32) data_ov003_020b5380.cnt) {
        e = &data_ov003_020b5380.ents[idx];
        if (e->b2 != 0) {
            if (h & 0x8000) {
                e->b1 = 1;
            } else if (e->b1 != 0) {
                e->b1 = 0;
            } else if (h & 0x4000) {
                if (e->b3 == 0) {
                    func_0200fddc();
                }
                a                                = d[4] | (d[5] << 16);
                data_ov003_020b5380.ents[idx].f8 = a;
                data_ov003_020b5380.ents[idx].f4 = func_0200ed38(0, -1, a);
                data_ov003_020b5380.ents[idx].b3 = 0;
            } else if (e->b3 == 0) {
                a   = d[2] | (d[3] << 16);
                n   = d[4] | (d[5] << 16);
                dst = (u16 *) (e->f4 + (a & ~1));
                if (e->f8 < a + n) {
                    func_0200fddc();
                }
                cnt = (n << 15) >> 16;
                d += 6;
                for (i = 0; i < cnt; i++) {
                    *dst++ = *d++;
                }
            }
        }
    }
}
