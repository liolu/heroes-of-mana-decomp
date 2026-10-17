/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK func_02000f78(M2C_UNK);                     /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa15c;

void UnReadUnitLogic(void) {
    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) << 5) >> 0x1F) != 0) {
        if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xC8) << 0x1E) >> 0x1F) != 0) {
            func_02000f78(5);
        } else {
            func_02000f78(4);
        }
    }
    M2C_FIELD(data_ov000_02051548, s32 *, 0x20) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) & ~0x04000000);
}
