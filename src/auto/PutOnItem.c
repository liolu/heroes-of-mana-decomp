/* compiler: 2.0/sp1p5 -profile */
/* near start: 8 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

M2C_UNK PutOffItem(s32, s32);
M2C_UNK DeleteItemOne(s32, M2C_UNK);
M2C_UNK func_0200273c(s32, M2C_UNK);
extern s32 *data_0203673c;

void PutOnItem(s32 arg0, s32 arg1) {
    s32 temp_r6;

    temp_r6 = (u32) (M2C_FIELD((M2C_FIELD(data_0203673c, s32 *, 0xC) + (arg1 * 8)), s32 *, 8) << 0x1D) >> 0x1D;
    if (temp_r6 != 0) {
        PutOffItem(arg0, temp_r6 - 1);
        DeleteItemOne(arg1, 1);
        M2C_FIELD((arg0 + (temp_r6 - 1)), s8 *, 0xC) = (s8) arg1;
        func_0200273c(arg0, 1);
    }
}
