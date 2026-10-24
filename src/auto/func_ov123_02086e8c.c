/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_02021338(u8 *, u8 *, s32);
s32 func_ov123_0207ae10(s32, u8 *, s32, s32);
s32 func_ov123_020867e0(u8 *, s32);
s32 func_ov123_02086d48(s32);
void func_ov123_02087008(void);
u8 *func_ov123_020996b8(u8 *, s32);
extern s32 data_ov123_020db368;
extern s32 data_ov123_020e0e94;
extern u8 *data_ov123_020e0e98;
extern s32 data_ov123_020e0ea0;
extern s32 data_ov123_020e0ea8;

s32 func_ov123_02086e8c(void) {
    s32 n;
    s32 k;

    if (data_ov123_020db368 == -1) {
        return 0;
    }
    if (data_ov123_020e0ea0 != 5) {
        return 0;
    }
    if (func_ov123_02086d48(data_ov123_020db368) != 0) {
        do {
            if (data_ov123_020e0ea8 - data_ov123_020e0e94 < 0x80) {
                if (data_ov123_020e0ea8 < 0x100) {
                    data_ov123_020e0ea8 = 0x100;
                } else {
                    data_ov123_020e0ea8 *= 2;
                }
                data_ov123_020e0e98 = func_ov123_020996b8(data_ov123_020e0e98, data_ov123_020e0ea8 + 1);
                if (data_ov123_020e0e98 == 0) {
                    return 0;
                }
            }
            n = func_ov123_0207ae10(data_ov123_020db368, data_ov123_020e0e98 + data_ov123_020e0e94,
                                    data_ov123_020e0ea8 - data_ov123_020e0e94, 0);
            if (n <= 0) {
                func_ov123_02087008();
                return 0;
            }
            data_ov123_020e0e94 += n;
            data_ov123_020e0e98[data_ov123_020e0e94] = 0;
            k                                        = func_ov123_020867e0(data_ov123_020e0e98, data_ov123_020e0e94);
            if (k == data_ov123_020e0e94) {
                data_ov123_020e0e94 = 0;
            } else {
                func_02021338(data_ov123_020e0e98, data_ov123_020e0e98 + k, data_ov123_020e0e94 - k);
                data_ov123_020e0e94 -= k;
            }
        } while (func_ov123_02086d48(data_ov123_020db368) != 0);
    }
    if (data_ov123_020db368 != -1) {
        return 1;
    }
    return 0;
}
