/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200e0a4(M2C_UNK);                     /* extern */
M2C_UNK func_ov123_02070498();                      /* extern */
M2C_UNK func_ov123_020704f8(M2C_UNK);               /* extern */
s32 func_ov123_02070f14();                          /* extern */
s32 func_ov123_02072e94();                          /* extern */
extern s32 data_ov123_020df220;
extern void *data_ov123_020e0a00;
extern s32 data_ov123_020e0a08;
extern M2C_UNK data_ov123_020e0a14;

s32 func_ov123_02072fc8(void) {
    s32 temp_r0;

    if (data_ov123_020e0a08 == 0) {
        data_ov123_020e0a08 = data_ov123_020df220;
    }
    if (func_ov123_02072e94() == -0x1A) {
        do {
            func_0200e0a4(0x64);
        } while (func_ov123_02072e94() == -0x1A);
    }
    temp_r0 = func_ov123_02070f14();
    if (temp_r0 >= 0) {
        func_ov123_02070498();
        func_ov123_020704f8(0);
        if (M2C_FIELD(data_ov123_020e0a00, s32 *, 0x28) == 0) {
            M2C_FIELD(data_ov123_020e0a00, M2C_UNK(**)(s32), 0x1C)(M2C_FIELD(&data_ov123_020e0a14, s32 *, 0x1C));
        }
        data_ov123_020e0a00 = NULL;
    }
    return temp_r0;
}
