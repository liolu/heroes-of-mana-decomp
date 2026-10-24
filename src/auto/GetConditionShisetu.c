/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x14];
    u32 lo : 8;
    u32 area : 4;
    u32 rest : 16;
} A;
typedef struct {
    u32 v : 4;
    u32 rest : 28;
    u32 w1;
} Cond;
typedef struct {
    u8 pad[0x28];
    u8 *tbl;
} B;
extern A *data_ov000_02051548;
extern B *data_0203673c;
u32 GetConditionShisetu(s32 n) {
    A *a     = data_ov000_02051548;
    B *b     = data_0203673c;
    u8 *base = b->tbl + a->area * 0x2d0;
    if (n > 8) {
        n = 8;
    }
    return ((Cond *) (base + 0x21c))[n].v;
}
