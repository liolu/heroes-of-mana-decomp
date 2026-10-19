/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK deleteUseStringStOne(void *, s32);           /* extern */
extern M2C_UNK data_ov000_0205135c;
extern void *data_ov000_02051550;

void deleteUseStringSt(M2C_UNK arg0) {
    deleteUseStringStOne(data_ov000_02051550 + 0x1A0, arg0);
    M2C_FIELD(data_ov000_02051550, s32 *, 0x1A0) = 0;
}
