/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern void *data_ov003_020b5328;
void *func_0200ed38(u32, s32, s32);
void MIi_CpuClear16(s16, void *, s32);
void TrsGameWorkInit(s32 n) {
    if (data_ov003_020b5328 == 0) {
        data_ov003_020b5328 = func_0200ed38(0, -1, n << 4);
    }
    MIi_CpuClear16(0, data_ov003_020b5328, n << 4);
}
