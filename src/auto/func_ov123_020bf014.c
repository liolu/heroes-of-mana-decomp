#include "m2c.h"

s32 func_ov123_020c8f80(void *, s32);
void func_ov123_020c9324(s32, s32, s32);
void func_ov123_020c8d2c(void *, s32, u16, u16);
void func_ov123_020c8cb8(void *, s32, s32);
extern u8 data_ov123_020e4690;
extern void *data_ov123_020e4694;
extern u16 data_ov123_020d8128[];

void func_ov123_020bf014(void) {
    s32 r4;
    s32 k;
    s32 *ent;

    r4  = data_ov123_020e4690 - 4;
    ent = (s32 *) ((u8 *) data_ov123_020e4694 + r4 * 4);
    func_ov123_020c9324(0, 0x32, func_ov123_020c8f80((void *) ent[4], 0));
    k   = (r4 + 3) * 2;
    ent = (s32 *) ((u8 *) data_ov123_020e4694 + r4 * 4);
    func_ov123_020c8d2c((void *) ent[4], -1, data_ov123_020d8128[k], data_ov123_020d8128[k + 1]);
    ent = (s32 *) ((u8 *) data_ov123_020e4694 + r4 * 4);
    func_ov123_020c8cb8((void *) ent[4], -1, 3);
}
