/* near start: 8 diffs with profile "2.0/sp1p5" */
/* compiler: 2.0/sp1p5 */
#include "m2c.h"

typedef struct {
    u32 a0 : 1;
    u32 a1 : 1;
    u32 a2 : 1;
    u32 g : 8;
    u32 id : 8;
    u32 rest : 13;
    u32 w4;
} T;

typedef struct {
    T t[12];
    u8 b[6];
} Tbl;

typedef struct {
    u32 act : 1;
    u32 id : 8;
    u32 rest : 23;
    u8 pad[0xd8];
} S;

typedef struct {
    u8 pad[0x4ec];
    u8 cnt;
    u8 pad1[7];
    u32 p0 : 10;
    u32 q : 8;
    u32 p1 : 14;
} B;

typedef struct {
    u8 pad[0xe8];
    s16 e8;
    u8 pad1[8];
    s16 f2;
    u8 pad2[4];
    s16 f8;
    s16 fa;
    s16 fc;
    s16 fe;
} F;

extern Tbl data_ov122_02063880;
extern B data_ov122_02063b20;
extern F data_ov122_02063f20;
extern u8 data_ov122_0206400c[];
extern S data_ov122_020651b8[];

void func_ov122_02051a20(void *);

void func_ov122_0205232c(void) {
    s32 i;
    s32 n;
    T *t;
    S *s;

    t = data_ov122_02063880.t;
    i = 0;
    do {
        i++;
        t->a0 = 0;
        t->a1 = 0;
        t->a2 = 0;
        t++;
    } while (i < 12);
    for (i = 0; i < 6; i++) {
        data_ov122_02063880.b[i] = 0xff;
    }
    func_ov122_02051a20(data_ov122_0206400c);
    data_ov122_02063f20.fc = 0x38;
    data_ov122_02063f20.f2 = 0x60;
    data_ov122_02063f20.fe = 3;
    data_ov122_02063f20.f8 = 4;
    data_ov122_02063f20.fa = -0x30;
    i                      = 0;
    s                      = data_ov122_020651b8;
    data_ov122_02063b20.q  = 4;
    t                      = data_ov122_02063880.t;
    n                      = 0;
    do {
        if (s->act != 0) {
            t->a0 = 1;
            t->id = s->id;
            t->g  = 0;
            t++;
            n++;
        }
        i++;
        s++;
    } while (i < 5);
    data_ov122_02063b20.cnt = n;
    data_ov122_02063f20.e8  = 0;
}
