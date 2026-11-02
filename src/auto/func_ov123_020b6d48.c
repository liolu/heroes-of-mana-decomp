/* compiler: 1.2/sp3 */
#include "m2c.h"

s8 func_ov123_020ae120(void);
void func_ov123_020cb5f8(s32, s32);
void func_ov123_020ae090(void);
void func_ov123_020b2410(s32);
void func_ov123_020b6a88(void);
extern s32 data_ov123_020e4644;

void func_ov123_020b6d48(void) {
    s32 v;

    if (func_ov123_020ae120() != 0) {
        return;
    }
    v = data_ov123_020e4644;
    if (v == 0) {
        return;
    }
    func_ov123_020cb5f8(1, v);
    data_ov123_020e4644 = 0;
    func_ov123_020ae090();
    func_ov123_020b2410((s32) func_ov123_020b6a88);
}
