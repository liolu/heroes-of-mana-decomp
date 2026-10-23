/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void MIi_CpuClear16(s16, s32, s32);
typedef struct {
    u8 pad[8];
    u8 *p;
} S;
extern S data_ov000_02051544;
void TouchWorkClear(void) {
    MIi_CpuClear16(0, (s32) data_ov000_02051544.p + 0x28, 8);
    *(s32 *) (data_ov000_02051544.p + 0x140) = 0;
    *(s32 *) (data_ov000_02051544.p + 0x13C) = 0;
}
