/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern void *data_0203673c;
extern M2C_UNK data_ov003_020ad058;

void SystemHelpMessageMaxSet(s32 arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(data_0203673c, void **, 0x2C);
    M2C_FIELD(temp_r0, s32 *, 0x108C) =
        (s32) ((M2C_FIELD(temp_r0, s32 *, 0x108C) & 0xFFE01FFF) | ((u32) (arg0 << 0x18) >> 0xB));
}
