#include "m2c.h"

void func_ov123_020c8c80(s32, s32, s32 *, s32 *);
void func_ov123_020af5e8(u8, s32, s32);
void func_ov123_020af3a4(void);
void func_ov123_020cb618(s32, void *);
extern u8 *data_ov123_020e45bc;
extern u8 data_ov123_020d7a4c[];
extern u8 func_ov123_020b0258[];

void func_ov123_020b0278(s32 arg0) {
    s32 sp4;
    s32 sp0;

    func_ov123_020c8c80(*(s32 *) (data_ov123_020e45bc + 0xFC), 0, &sp0, &sp4);
    sp4 = sp4 - 0xC;
    if (sp4 > (s32) * (u16 *) (data_ov123_020d7a4c + 2)) {
        func_ov123_020af5e8(data_ov123_020e45bc[0x11D], 4, sp4);
        return;
    }
    func_ov123_020af5e8(data_ov123_020e45bc[0x11D], 4, *(u16 *) (data_ov123_020d7a4c + 2));
    func_ov123_020af3a4();
    func_ov123_020cb618(arg0, func_ov123_020b0258);
}
