#include "m2c.h"
void func_ov123_020c4e28(s32);
void func_ov123_020c8c80(s32, s32, s32 *, s32 *);
void func_ov123_020cb618(void *, void *);
extern u8 *data_ov123_020e46e4;
extern u8 func_ov123_020c4af4;
extern u8 func_ov123_020c4ba8;
void func_ov123_020c4c04(void *arg0) {
    s32 sp4;
    s32 sp0;
    func_ov123_020c8c80(*(s32 *) data_ov123_020e46e4, 0, &sp0, &sp4);
    sp4 += 0xC;
    func_ov123_020c4e28(sp4);
    if (sp4 < 0xC0) {
        return;
    }
    if (*(u8 *) (data_ov123_020e46e4 + 0x1E) != 0) {
        func_ov123_020cb618(arg0, &func_ov123_020c4ba8);
        return;
    }
    func_ov123_020cb618(arg0, &func_ov123_020c4af4);
}
