/* compiler: 1.2/sp3 */
#include "m2c.h"

extern M2C_UNK (*data_ov123_020e1724)();

void func_ov123_02099778(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 == 0) {
        return;
    }
    ((void (*)(void *, s32, s32)) data_ov123_020e1724)(arg0, arg1, arg2);
}
