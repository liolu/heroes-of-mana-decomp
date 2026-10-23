#include "m2c.h"
u8 *func_ov123_0209d368(void);
void func_ov123_0209d354(s32);
s32 func_ov123_020a2118(s32);
s32 func_ov123_0209de24(void);
s32 func_ov123_020a02f4(s32, s32);
s32 func_ov123_020a04a8(void);
void func_ov123_0209f158(s32);
s32 func_ov123_0209f054(void) {
    s32 r;
    func_ov123_0209d368()[0x17]             = 0;
    *(s32 *) (func_ov123_0209d368() + 0x20) = 0;
    func_ov123_0209d368()[0x1a8]            = 0;
    if (*(s32 *) (func_ov123_0209d368() + 0x208) != 0) {
        if (func_ov123_0209d368()[0x15] == 0) {
            func_ov123_0209d354(3);
            r = func_ov123_020a2118(0);
            if (func_ov123_0209de24() != 0) {
                return r;
            }
        } else if (func_ov123_0209d368()[0x15] == 1) {
            func_ov123_0209d354(4);
            r = func_ov123_020a02f4(*(s32 *) (func_ov123_0209d368() + 0x208), 0);
            if (func_ov123_020a04a8() != 0) {
                return r;
            }
        }
    } else {
        func_ov123_0209f158(1);
    }
    return 0;
}
