/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_InitMutex(M2C_UNK *);                    /* extern */
extern M2C_UNK data_ov123_020df184;
extern M2C_UNK data_ov123_020df190;

void func_ov123_020693f0(void) {
    if (M2C_FIELD(&data_ov123_020df184, u8 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_ov123_020df184, u8 *, 0)     = 1U;
    M2C_FIELD(&data_ov123_020df184, s32 *, 0x24) = 0;
    M2C_FIELD(&data_ov123_020df184, s32 *, 8)    = 0;
    M2C_FIELD(&data_ov123_020df184, s32 *, 4)    = 0;
    OS_InitMutex(&data_ov123_020df190);
}
