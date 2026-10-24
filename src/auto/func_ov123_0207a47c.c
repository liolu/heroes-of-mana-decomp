/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_02020d04(void *, void *, s32, s32);
void func_ov123_02079d8c(void *, s32, s32);
extern u8 data_ov123_020d9b90[];
extern u8 data_ov123_020d9b94[];
void func_ov123_0207a47c(s32 *p, s32 a, s32 b) {
    s32 i;
    if (a == 0) {
        func_02020d04(data_ov123_020d9b90, data_ov123_020d9b94, 0, 0xb6);
    }
    for (i = 0; i < p[1]; i++) {
        func_ov123_02079d8c((void *) ((s32 *) p[0])[i], a, b);
    }
}
