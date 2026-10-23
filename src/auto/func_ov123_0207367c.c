/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_ov123_020e0a9c[];
void func_ov123_02073594(s32, void *, void *, s32);
u8 *func_ov123_0207367c(s32 a0, s32 a1, s32 a2, s32 a3) {
    func_ov123_02073594(2, &a0, data_ov123_020e0a9c, 0x10);
    return data_ov123_020e0a9c;
}