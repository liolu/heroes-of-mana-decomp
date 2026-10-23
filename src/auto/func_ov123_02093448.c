#include "m2c.h"
typedef struct {
    u8 pad[0xcb0];
    u64 t;
    u8 pad2[0x59];
    s8 f;
} Z;
u64 func_0200f510(void);
void func_ov123_02092ec0(void *, void *, s32, s32);
extern u8 data_ov123_020d4e88[];
extern u8 data_ov123_020d4e90[];
s32 func_ov123_02093448(Z *z) {
    z->t = func_0200f510();
    z->f = 0;
    z->t = func_0200f510();
    func_ov123_02092ec0(data_ov123_020d4e88, data_ov123_020d4e90, z->f, 0x200000);
    return 3;
}
