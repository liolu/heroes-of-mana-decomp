#include "m2c.h"

typedef struct {
    u8 pad[0x1098];
    u32 f;
} Q;

typedef struct {
    u8 pad[0x2c];
    Q *q;
} P;

typedef struct {
    u8 pad[0xe30];
    s32 a, b, c;
} R;

typedef struct {
    u8 pad[0xc];
    s32 flag;
} B;

extern P *data_0203673c;
extern R data_ov122_02065604;
extern B data_ov122_020664b0;
s32 func_ov122_02055af0(void);
void func_ov122_0205ce60(u32, u32);
void func_ov122_0205db1c(s32);
s32 func_ov123_020d3344(void);

s32 func_ov122_0205e17c(void) {
    s32 r5;
    s32 r4;

    if (!(data_0203673c->q->f & 0x80000000)) {
        data_ov122_020664b0.flag = 1;
        data_ov122_02065604.a    = 5;
        data_ov122_02065604.b    = 0x190;
        data_ov122_02065604.c    = 0x3a;
        func_ov122_0205ce60(0x40000000, 0x80000000);
        data_0203673c->q->f = 0x80000000;
        r5                  = 1;
        r4                  = 0;
        do {
            if (func_ov123_020d3344() == 0) {
                func_ov122_0205db1c(3);
                return 0;
            }
            if (func_ov122_02055af0() == 1) {
                r5 = r4;
            }
        } while (r5 != 0);
    }
    return 1;
}
