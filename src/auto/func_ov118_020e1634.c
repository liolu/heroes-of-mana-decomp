#include "m2c.h"
s32 func_ov118_020e2448(s32, s32, s32, s32, s32);
extern u8 data_ov118_020e31e0[];
void func_ov118_020e1634(s32 a, s32 b) {
    s32 r;
    *(s32 *) (data_ov118_020e31e0 + 4)   = 0x200;
    *(s32 *) (data_ov118_020e31e0 + 0xC) = 1;
    if (b == 0) {
        r = func_ov118_020e2448(10, 20, a, 0, 1);
    } else {
        r = func_ov118_020e2448(10, 1, a, 0, 1);
    }
    *(s32 *) 0x04001010 = ((0 - r) & 0x1FF) | 0xFE0000 | 0x1000000;
}
