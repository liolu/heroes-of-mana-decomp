/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ReleaseRetryData(s32);                   /* extern */
s32 GetCompressDataForRetry(void *);                    /* extern */
extern M2C_UNK data_ov000_020509c8;
extern void *data_ov000_02051548;

void StockRetryData(M2C_UNK arg0) {
    ReleaseRetryData(arg0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x770) = GetCompressDataForRetry(data_ov000_02051548 + 0x774);
}
