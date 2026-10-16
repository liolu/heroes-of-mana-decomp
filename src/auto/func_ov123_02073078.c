/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200e0a4(M2C_UNK);                     /* extern */
s32 func_0200faf0();                                /* extern */
extern s32 data_ov123_020df220;
extern s32 data_ov123_020e0a08;
extern s32 data_ov123_020e0a0c;

s32 func_ov123_02073078(void) {
    if (data_ov123_020df220 == 0) {
        if (((data_ov123_020e0a0c & 3) == 1) && (func_0200faf0() != 0x12)) {
            func_0200e0a4(0xA);
        }
    } else if (data_ov123_020e0a08 == 0) {
        data_ov123_020e0a08 = data_ov123_020df220;
    }
    return data_ov123_020df220;
}
