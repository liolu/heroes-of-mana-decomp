#include "m2c.h"

s32 func_ov123_020c8f80(void *, s32);
void func_ov123_020c9324(s32, s32, s32);
void func_ov123_020c8cb8(void *, s32, s32);
void func_ov123_020c8d2c(void *, s32, u16, u16);
extern void *data_ov123_020e45c0;
extern u16 data_ov123_020d7d80[];

void func_ov123_020b0e10(void) {
    s32 r4;
    s32 cls;

    if (*(s8 *) ((u8 *) data_ov123_020e45c0 + 0x63) <= 11) {
        r4 = 0x44;
    } else {
        r4 = 0x45;
    }
    func_ov123_020c9324(0, r4, func_ov123_020c8f80(*(void **) ((u8 *) data_ov123_020e45c0 + 0x58), 0));
    func_ov123_020c8cb8(*(void **) ((u8 *) data_ov123_020e45c0 + 0x58), -1, 2);
    cls = *(s8 *) ((u8 *) data_ov123_020e45c0 + 0x63);
    func_ov123_020c8d2c(*(void **) ((u8 *) data_ov123_020e45c0 + 0x58), -1, data_ov123_020d7d80[cls * 2],
                        data_ov123_020d7d80[cls * 2 + 1]);
}
