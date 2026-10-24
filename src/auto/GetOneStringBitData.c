/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void StringToChrData(int, int, int, int, s16 *, int);
extern u8 data_ov000_020512dc;
typedef struct {
    u8 p0[0x22c];
    u8 base[0x110];
    u16 w33c;
    u16 p1[2];
    u16 cur;
    struct {
        u8 q[8];
        void *ptr;
        u8 r[4];
    } ent[1];
} G;
extern G *data_ov000_02051550;

void GetOneStringBitData(int a, int b, int c, int d, s16 *e) {
    data_ov000_02051550->cur                               = 0;
    data_ov000_02051550->ent[data_ov000_02051550->cur].ptr = data_ov000_02051550->base;
    *e                                                     = 0;
    data_ov000_02051550->w33c                              = c;
    StringToChrData(a, b, d, 0, e, 0);
}
