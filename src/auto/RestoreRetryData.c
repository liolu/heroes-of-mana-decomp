/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ReflectSystemConfig();                      /* extern */
M2C_UNK GetUncompressDataForRetry();                      /* extern */
extern M2C_UNK data_ov000_020509d8;
extern void *data_ov000_02051548;

void RestoreRetryData(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x770) != 0) {
        GetUncompressDataForRetry();
        ReflectSystemConfig();
    }
}
