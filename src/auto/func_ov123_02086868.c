/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02024ea0(u8 *, u8 *, s32);
void func_ov123_0208696c(u8 *, s32);
void func_ov123_02086a10(u8 *, s32);
void func_ov123_02086af4(u8 *, s32);
void func_ov123_02086b8c(u8 *, s32);
extern u8 data_ov123_020db390;
extern u8 data_ov123_020db39c;
extern u8 data_ov123_020db3a8;
extern u8 data_ov123_020db3b4;

void func_ov123_02086868(u8 *a, s32 b) {
    a[b] = 0;
    if (func_02024ea0(a, &data_ov123_020db390, 8) == 0) {
        func_ov123_02086b8c(a, b);
        return;
    }
    if (func_02024ea0(a, &data_ov123_020db39c, 9) == 0) {
        func_ov123_02086af4(a, b);
        return;
    }
    if (func_02024ea0(a, &data_ov123_020db39c, 9) == 0) {
        func_ov123_02086af4(a, b);
        return;
    }
    if (func_02024ea0(a, &data_ov123_020db3a8, 8) == 0) {
        func_ov123_02086a10(a, b);
        return;
    }
    if (func_02024ea0(a, &data_ov123_020db3b4, 8) != 0) {
        return;
    }
    func_ov123_0208696c(a, b);
}
