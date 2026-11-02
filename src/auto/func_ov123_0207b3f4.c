/* compiler: 1.2/sp3 */
#include "m2c.h"

u64 _ll_udiv(u64, u64);                             /* extern */
s32 func_0200f498();                                /* extern */
u64 func_0200f510();                                /* extern */
M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
extern M2C_UNK data_ov123_020d9bec;
extern M2C_UNK data_ov123_020d9c0c;

void func_ov123_0207b3f4(void) {
    u64 v;

    if (func_0200f498() != 1) {
        func_02020d04(&data_ov123_020d9bec, &data_ov123_020d9c0c, 0, 0x109);
    }
    v = func_0200f510();
    _ll_udiv(v << 6, 0x82EA);
}
