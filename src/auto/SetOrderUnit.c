/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_ov003_020a8f38;

void SetOrderUnit(void *arg0) {

    MIi_CpuCopy16(arg0 + 0xCC, arg0 + 0xD0, 4);
}
