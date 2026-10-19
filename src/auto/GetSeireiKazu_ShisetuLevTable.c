/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetSeireiKazu_ShisetuLevTableSub(void *);                    /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa4f4;

void GetSeireiKazu_ShisetuLevTable(void) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0x77C) = GetSeireiKazu_ShisetuLevTableSub(data_ov000_02051548 + 0x780);
}
