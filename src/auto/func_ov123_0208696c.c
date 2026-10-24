/* compiler: 1.2/sp3 */
#include "m2c.h"

void *func_ov123_02086d54(void *, void *);
s32 func_02026c4c(void *);
s32 func_ov123_02086c3c(s32, s32, s32);
void func_ov123_020866bc(s32, s32, s32, s32, s32);
extern u8 data_ov123_020db3c0;
extern u8 data_ov123_020db3c8;
extern u8 data_ov123_020db3cc;
extern u8 data_ov123_020db3d0;

void func_ov123_0208696c(void *a) {
    s32 s1;
    s32 s2;
    s32 s3;
    s32 s4;
    s32 r;
    s1 = func_02026c4c(func_ov123_02086d54(a, &data_ov123_020db3c0));
    s2 = func_02026c4c(func_ov123_02086d54(a, &data_ov123_020db3c8));
    s3 = func_02026c4c(func_ov123_02086d54(a, &data_ov123_020db3cc));
    s4 = func_02026c4c(func_ov123_02086d54(a, &data_ov123_020db3d0));
    r  = func_ov123_02086c3c(2, s3, s2);
    if (r == -1) {
        return;
    }
    func_ov123_020866bc(r, s1, s4, 0, 0);
}
