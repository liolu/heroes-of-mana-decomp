/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 *OSi_ThreadInfo[];
extern u8 data_ov123_020df47c[];
s32 func_ov123_0206e7e8(s32);
void func_ov123_0206f04c(s32, s32, void *, s32, s32);
s32 func_ov123_02070284(s32);
void func_ov123_0206fb0c(s32);
void func_ov123_0206e76c(u8 *p, s32 a, s32 b) {
    if (func_ov123_0206e7e8(*(s32 *) (p + 0x1c)) != 0 || (u8 *) OSi_ThreadInfo[1] != data_ov123_020df47c) {
        func_ov123_0206f04c(0, 0, p, a, b);
    } else {
        func_ov123_0206fb0c(func_ov123_02070284(*(s32 *) (p + 0x1c)));
    }
}
