/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_02075310(void *);
s32 func_ov123_02074edc(void *);
void func_ov123_02075f44(s32);
void func_ov123_02074d7c(void *);
s32 func_ov123_020748dc(void *);

s32 func_ov123_02074840(u8 *a) {
    if (func_ov123_02075310(a) != 1) {
        return 1;
    }
    if (func_ov123_02074edc(a) != 0) {
        func_ov123_02075f44(*(s32 *) (a + 0xc));
        func_ov123_02074d7c(a);
        if (func_ov123_020748dc(a) != 0) {
            return 1;
        }
    } else {
        if (func_ov123_02075310(a) != 5) {
            return 1;
        }
        if (func_ov123_020748dc(a) != 0) {
            return 1;
        }
        func_ov123_02074d7c(a);
    }
    return 0;
}
