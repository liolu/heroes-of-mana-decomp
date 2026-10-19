/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_02070d58(void *, s32);               /* extern */
s32 func_ov123_02070e98(M2C_UNK *, void *, M2C_UNK); /* extern */
extern M2C_UNK func_ov123_02071c00;

s32 func_ov123_02071c10(void *arg0) {
    void *temp_r1;
    s32 t;

    temp_r1 = M2C_FIELD(arg0, void **, 0x64);
    if ((s32) M2C_FIELD(temp_r1, s32 *, 0xF8) < (s32) M2C_FIELD(temp_r1, u16 *, 0xFC)) {
        return 0;
    }
    t = func_ov123_02070e98(&func_ov123_02071c00, arg0, 0);
    if (t == 0) {
        return -0x21;
    }
    return func_ov123_02070d58(arg0, t);
}
