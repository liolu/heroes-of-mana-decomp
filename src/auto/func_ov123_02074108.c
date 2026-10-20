/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK (*data_ov123_020df210)();

void func_ov123_02074108(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(temp_r4, s8 *, 0x455) = 0;
    if (M2C_FIELD(temp_r4, s32 *, 0x824) != 0) {
        data_ov123_020df210(M2C_FIELD(temp_r4, s32 *, 0x824));
    }
    M2C_FIELD(temp_r4, s32 *, 0x824) = 0;
}
