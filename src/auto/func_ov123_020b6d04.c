/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_020ae090(void);
void func_ov123_020cb5ec(s32, s32);
s32 func_ov123_020c95a4(s16);
void func_ov123_020b2410(void *);
extern s32 data_ov123_020e4644;
extern void func_ov123_020b6c94(void);

void func_ov123_020b6d04(void) {
    s32 v;
    func_ov123_020ae090();
    v = data_ov123_020e4644;
    if (v != 0) {
        func_ov123_020cb5ec(1, v);
    }
    func_ov123_020c95a4(8);
    func_ov123_020b2410(func_ov123_020b6c94);
}
