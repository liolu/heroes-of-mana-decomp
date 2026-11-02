/* compiler: 1.2/sp3 */
#include "m2c.h"

extern void *data_ov123_020d9d54;
void func_ov123_02086078(s32 *a, void *b);

s32 func_ov123_0207c048(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *ip;
    u8 *base;

    if (arg0 == NULL || (ip = (s32 *) *arg0) == NULL) {
        return 2;
    }
    if (arg1 < 0 || arg1 >= 6) {
        func_ov123_02086078(arg0, &data_ov123_020d9d54);
        return 2;
    }
    base                    = (u8 *) ip + (arg1 * 8);
    *(s32 *) (base + 0x1A4) = arg2;
    *(s32 *) (base + 0x1A8) = arg3;
    return 0;
}
