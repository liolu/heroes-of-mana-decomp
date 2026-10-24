/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov123_02077fb4(void *);
s32 func_02024c28(void *);
void func_ov123_02077ef4(void *, void *, s32);
void func_ov123_02077e80(void *, void *);
void func_ov123_02077974(void *);
void func_ov123_020778b4(void *, void *, s32);
void func_ov123_02077840(void *, void *);

void func_ov123_020761b0(void *out, void *str, u8 *ctx) {
    u8 sp[0x14];
    u8 *h = ctx + 0x348;
    u8 *h2;
    func_ov123_02077fb4(h);
    func_ov123_02077ef4(h, str, func_02024c28(str));
    func_ov123_02077ef4(h, ctx, 0x30);
    func_ov123_02077ef4(h, ctx + 0x34, 0x40);
    func_ov123_02077e80(h, sp);
    h2 = ctx + 0x3FC;
    func_ov123_02077974(h2);
    func_ov123_020778b4(h2, ctx, 0x30);
    func_ov123_020778b4(h2, sp, 0x14);
    func_ov123_02077840(h2, out);
}
