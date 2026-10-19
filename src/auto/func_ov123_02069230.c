/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200fa98();
M2C_UNK func_0200faac();
extern M2C_UNK data_ov123_020df184;

void func_ov123_02069230(s32 arg0) {
    M2C_UNK t;

    t                                            = func_0200fa98();
    M2C_FIELD(&data_ov123_020df184, s32 *, 0x28) = arg0;
    func_0200faac(t);
}
