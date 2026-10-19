/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 CallTrsForLoop(s32);                       /* extern */
M2C_UNK PutWirelessLevel(u32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa844;

s32 CallTrsForMainLoop(M2C_UNK arg0) {
    s32 temp_r4;
    u32 temp_r0;

    temp_r4 = CallTrsForLoop(arg0);
    temp_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) * 4) >> 0x1F;
    if (temp_r0 != 0) {
        PutWirelessLevel(temp_r0);
    }
    return temp_r4;
}
