/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 p0[0x2c];
    s32 f;
    u8 p1[0x10];
} Blk2;
typedef struct {
    s32 v;
    u8 p2[0x3c];
} Blk1;
extern Blk2 data_ov111_020eca98[];
extern Blk1 data_ov111_020ecac8[];
extern Blk1 data_ov111_020ecacc[];
extern void *data_ov111_020f1bd8;
s32 func_ov111_020e5d60(s32);
s32 func_ov111_020e5d98(s32);
void func_ov111_020e8650(void) {
    s32 i;
    Blk2 *e;
    i                                            = func_ov111_020e5d60(1);
    e                                            = &data_ov111_020eca98[i];
    e->f                                         = ((e->f & ~1) | 1) & ~2;
    data_ov111_020ecac8[i].v                     = 0;
    data_ov111_020ecacc[i].v                     = func_ov111_020e5d98(3);
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 5);
}
