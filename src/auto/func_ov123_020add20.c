#include "m2c.h"

extern void *data_ov123_020e4568;
extern M2C_UNK func_ov123_020adca4;

void func_ov123_020adfe4(s32);
void func_ov123_020c8c80(void *, s32, void *, s32 *);
void func_ov123_020cb618(void *, s32);

void func_ov123_020add20(void *arg0) {
    s32 sp4;
    u8 sp0[4];
    s32 temp_r0;

    func_ov123_020c8c80(*(void **) ((u8 *) data_ov123_020e4568 + 8), 0, sp0, &sp4);
    temp_r0 = sp4 + 4;
    sp4     = temp_r0;
    func_ov123_020adfe4(temp_r0);
    if (sp4 < 0xC0) {
        return;
    }
    func_ov123_020cb618(arg0, (s32) &func_ov123_020adca4);
}
