/* compiler: 1.2/sp2p3 */
/* near start: 10 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

extern u8 data_ov123_020da1e0[];
extern u8 data_ov123_020da0e4[];
extern u8 data_ov123_020da204[];

void func_02020d04();
s32 func_ov123_0207a204();
s32 func_ov123_0207dff4();
s32 func_ov123_0207e260();

s32 func_ov123_0207df18(void *arg0, u8 *arg1, s8 b, s32 d) {
    s32 o0;
    s32 o1;
    s32 r;

    if (*(s32 *) (arg1 + 0x28) == 0) {
        func_02020d04(data_ov123_020da1e0, data_ov123_020da0e4, 0, 0xDE);
    }
    if (*(s32 *) (arg1 + 0x30) - *(s32 *) (arg1 + 0x34) == 0) {
        if (func_ov123_0207a204(*(s32 *) (arg1 + 0x38)) == 0) {
            r = func_ov123_0207dff4(arg0, *(s32 *) (arg1 + 8), &b, 1, &o0, &o1, data_ov123_020da204);
            if (r != 0) {
                return r;
            }
            if (o1 != 0) {
                return 0;
            }
        }
    }
    return func_ov123_0207e260(arg0, arg1 + 0x28, b);
}
