/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_WakeupThread(M2C_UNK *);                 /* extern */
M2C_UNK func_ov123_02067630();                      /* extern */
extern M2C_UNK data_ov123_020df184;
extern M2C_UNK data_ov123_020df188;

void func_ov123_02069064(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0) != 0x12) {
        return;
    }
    M2C_FIELD(&data_ov123_020df184, s32 *, 0x24) = (s32) M2C_FIELD(arg0, u16 *, 2);
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        func_ov123_02067630();
    }
    OS_WakeupThread(&data_ov123_020df188);
}
