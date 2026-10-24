/* compiler: 1.2/sp3 */
#include "m2c.h"

extern s32 func_ov123_0207cbf0(void *, s32, s32, s32);
extern void func_ov123_02086078(void *, void *);
extern u8 data_ov123_020d9c24;
extern u8 data_ov123_020d9c78;

s32 func_ov123_0207b450(void **arg0, s32 arg1, s32 arg2) {
    u8 *ip;

    if (arg0 == 0 || (ip = *arg0) == 0) {
        return 2;
    }
    if (*(s32 *) (ip + 0x108) != 0) {
        return 0;
    }
    if (*(s32 *) (ip + 0x1D8) == 4) {
        func_ov123_02086078(arg0, &data_ov123_020d9c24);
        return 2;
    }
    if (arg2 == 0) {
        func_ov123_02086078(arg0, &data_ov123_020d9c78);
        return 2;
    }
    return func_ov123_0207cbf0(arg0, arg1, 1, arg2);
}
