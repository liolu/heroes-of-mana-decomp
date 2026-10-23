/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_ov123_020c9468(s32, s32);
extern void func_ov123_020ca49c(s32 *);
extern u8 *data_ov123_020e4710;
void func_ov123_020c8840(s32 a, ...) {
    func_ov123_020ca49c(&a);
    func_ov123_020c9468(*(s32 *) (data_ov123_020e4710 + 0x84), a);
}
