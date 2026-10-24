/* compiler: 1.2/sp3 */
#include "m2c.h"
s64 func_0200f510(void);
void func_ov123_0209d354(s32);
u8 *func_ov123_0209d368(void);
s32 func_ov123_0209de24(void);
void func_ov123_0209ffec(s32, s32, s32);
s32 func_ov123_020a04a8(void);
void func_ov123_020a2118(s32);
void func_ov123_020a2fe4(s32, s32);
s32 func_ov123_0209ff00(s32 arg0) {
    u8 *temp_r4;

    *(s32 *) (func_ov123_0209d368() + 0x208) = 0;
    *(s32 *) (func_ov123_0209d368() + 0x204) = 0;
    *(u8 *) (func_ov123_0209d368() + 0x1A7)  = 0;
    temp_r4                                  = func_ov123_0209d368();
    *(s64 *) (temp_r4 + 0x1CC)               = func_0200f510();
    if (func_ov123_0209d368()[0x15] == 0) {
        func_ov123_0209d354(3);
        func_ov123_020a2118(0);
        if (func_ov123_0209de24() != 0) {
            return 0;
        }
    } else if (func_ov123_0209d368()[0x15] == 1) {
        func_ov123_0209ffec(0, 0, arg0);
        if (func_ov123_020a04a8() != 0) {
            return 0;
        }
    } else if (func_ov123_0209d368()[0x15] == 3) {
        func_ov123_020a2fe4(6, 0xFFFEC5E6);
        return 0;
    }
    return 1;
}
