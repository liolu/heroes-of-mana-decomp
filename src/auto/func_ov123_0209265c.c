/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02067c6c(void);
s32 func_ov123_02068880(void);
void func_ov123_0206853c(void);
void func_ov123_02068294(void);
void func_ov123_02067efc(void);
void func_ov123_02067ca0(void);
void func_ov123_02091334(s32);

s32 func_ov123_0209265c(void) {
    switch (func_ov123_02067c6c()) {
        case 0:
            return 1;
        case 1:
            func_ov123_02068880();
            break;
        case 3:
            func_ov123_0206853c();
            break;
        case 6:
            func_ov123_02068294();
            break;
        case 9:
            func_ov123_02067efc();
            break;
        case 12:
            func_ov123_02067ca0();
            break;
        case 11:
            func_ov123_02091334(0);
            return -1;
    }
    return 0;
}
