#include "m2c.h"
void func_ov123_020c8f8c(void);
extern s32 *data_ov123_020e45b0;
void func_ov123_020ae628(void) {
    s32 i = 0;
    do {
        if (data_ov123_020e45b0[i] != 0) {
            func_ov123_020c8f8c();
            data_ov123_020e45b0[i] = 0;
        }
        i += 1;
    } while (i < 4);
}
