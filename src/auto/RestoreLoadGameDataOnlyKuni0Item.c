/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);           /* extern */
extern void *data_0203673c;
extern M2C_UNK data_ov000_02050990;

void RestoreLoadGameDataOnlyKuni0Item(M2C_UNK arg0) {
    MIi_CpuCopy16(arg0 + 0x118, M2C_FIELD(data_0203673c, s32 *, 0x28), 0x2D0);
}
