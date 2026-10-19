/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern void *data_0203673c;
extern M2C_UNK data_ov003_020aceb4;

s32 GetCountCallByUnitBaseNo(M2C_UNK arg0) {
    return (u32) (M2C_FIELD((M2C_FIELD(data_0203673c, s32 *, 0x2C) + (arg0 * 4)), s32 *, 0xCCC) << 0x16) >> 0x16;
}
