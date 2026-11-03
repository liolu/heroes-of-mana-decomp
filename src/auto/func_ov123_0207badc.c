/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_02086078(s32 *, s32);
s32 func_ov123_0207cb10(void **, s32);
extern u8 data_ov123_020d9c24[];

s32 func_ov123_0207badc(s32 *p, s32 a1) {
    s32 obj;

    if (p == NULL || *p == 0) {
        return 2;
    }
    obj = *p;
    if (*(s32 *) (obj + 0x108) != 0) {
        return 0;
    }
    if (*(s32 *) (obj + 0x1d8) == 4) {
        func_ov123_02086078(p, (s32) data_ov123_020d9c24);
        return 2;
    }
    return func_ov123_0207cb10((void **) p, a1);
}
