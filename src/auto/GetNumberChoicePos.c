/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020acc08;

s32 GetNumberChoicePos(void) {
    return (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x18) << 0xC) >> 0x1E;
}
