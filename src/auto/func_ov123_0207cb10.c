/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02083774(void **, s32, s32 *);
void func_ov123_02086078(void **, void *);
s32 func_ov123_0207d7e8(void **, s32 *);
void func_ov123_020996a0(s32);
s32 func_ov123_02083578(s32 *);
void func_ov123_0208372c(void **, s32 *);
extern u8 data_ov123_020d9f78[];

s32 func_ov123_0207cb10(void **arg0, s32 arg1) {
    s32 *sp0;
    u8 *r5;
    s32 r;

    r5 = (u8 *) *arg0;
    if (func_ov123_02083774(arg0, arg1, (s32 *) &sp0) == 0) {
        func_ov123_02086078(arg0, data_ov123_020d9f78);
        return 2;
    }
    if (sp0[4] == 0) {
        func_ov123_02086078(arg0, data_ov123_020d9f78);
        return 2;
    }
    r = func_ov123_0207d7e8(arg0, sp0);
    if (r != 0) {
        return r;
    }
    sp0[5] = sp0[5] - 1;
    if (*(s32 *) (r5 + 0x100) == 0 && sp0[5] <= 0) {
        func_ov123_020996a0(sp0[4]);
        sp0[4] = 0;
        if (func_ov123_02083578(sp0) != 0) {
            func_ov123_0208372c(arg0, sp0);
        }
    }
    return 0;
}
