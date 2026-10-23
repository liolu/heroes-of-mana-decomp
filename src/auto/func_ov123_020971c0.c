/* compiler: 1.2/sp3 */
#include "m2c.h"
void MI_CpuFill8(u8 *, s32, s32);
void func_ov123_0206d3fc(u8 *);

void func_ov123_020971c0(u8 *o) {
    MI_CpuFill8(o + 0x1138, 0, 0x64);
    *(s32 *) (o + 0x1174) = 0xB68;
    *(s32 *) (o + 0x1178) = *(s32 *) (o + 0x19CC);
    *(s32 *) (o + 0x1180) = 0x5EA;
    *(s32 *) (o + 0x1184) = *(s32 *) (o + 0x19D0);
    func_ov123_0206d3fc(o + 0x1138);
}
