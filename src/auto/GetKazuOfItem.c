/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK GetKazuOfItemKuni(s32, u32);              /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac76c;

void GetKazuOfItem(M2C_UNK arg0) {
    GetKazuOfItemKuni(arg0, (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C);
}
