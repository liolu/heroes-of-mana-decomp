/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK MI_CpuCopy8(void *, void *, M2C_UNK);
s32 func_0200fa98();
M2C_UNK func_0200faac(s32);
s32 func_020213f0(u8 *, void *, M2C_UNK);
extern u8 data_ov123_020e0c04[];
void func_ov123_02077798(u8 *arg0) {
    s32 i;
    s32 saved;
    u8 *p;
    saved          = func_0200fa98();
    *(arg0 + 0x30) = 0;
    p              = data_ov123_020e0c04;
    for (i = 0; i < 4; i++, p += 0x5C) {
        if (*(p + 0x5A) != 0 && *(s32 *) (p + 0x54) == 0 && *(u16 *) (p + 0x58) == 0 &&
            func_020213f0(p, arg0 + 0x74, 0x20) == 0) {
            MI_CpuCopy8(p + 0x20, arg0, 0x30);
            *(arg0 + 0x30) = 1;
            break;
        }
    }
    func_0200faac(saved);
}
