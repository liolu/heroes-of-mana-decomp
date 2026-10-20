/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_02073078();                          /* extern */

typedef struct S123 {
    s32 a;
    s32 b;
} S123;

extern S123 data_ov123_020df238;

s32 func_ov123_020730ec(s32 arg0, s32 arg1) {
    if (func_ov123_02073078() == 0) {
        return -0x27;
    }
    data_ov123_020df238.a = arg0;
    data_ov123_020df238.b = arg1;
    return 0;
}
