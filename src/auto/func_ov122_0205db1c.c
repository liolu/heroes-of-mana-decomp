#include "m2c.h"
u32 func_ov123_020d2fb4(void);
s32 func_ov123_020d2fcc(void);
void func_ov123_020d2fe4(void);
void func_ov123_020d2f1c(void);
void func_ov122_0205da7c(s32, s32);
void func_ov122_0205db1c(s32 a) {
    u32 k = func_ov123_020d2fb4();
    s32 n = -func_ov123_020d2fcc();
    switch (k) {
        case 0:
            return;
        case 1:
            func_ov123_020d2fe4();
            return;
        case 3:
            func_ov123_020d2f1c();
            func_ov122_0205da7c(n, a);
            return;
        case 2:
        case 4:
        default:
            func_ov123_020d2f1c();
            func_ov122_0205da7c(n, a);
            func_ov122_0205da7c(n, 1);
            return;
    }
}
