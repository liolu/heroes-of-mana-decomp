/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_ov000_02051548;
extern void SetUpEffectForCreate(s32 a, s32 b, s32 c);
void FinishMakeUnitBefore(u32 a, s32 b) {
    u32 v = *(u32 *) (data_ov000_02051548 + 0x14);
    if (a == ((v << 20) >> 28)) {
        SetUpEffectForCreate(b, 0, 0);
    }
}
