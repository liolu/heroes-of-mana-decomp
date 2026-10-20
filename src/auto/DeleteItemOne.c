/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DeleteItemKuni(s32, s32, u32);         /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac790;

void DeleteItemOne(void *arg0, void *arg1) {

    DeleteItemKuni(arg0, arg1, (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C);
}
