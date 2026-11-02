#include "m2c.h"
extern void func_0200fd0c(u8 *buf);
extern void func_ov123_02075154(u8 *buf, s32 n);
extern s32 func_ov123_020cd050(s32 flags);
extern s32 func_ov123_020cd0e8(u8 *p);
extern u8 *data_ov123_020e47a0;
void func_ov123_020ccad4(void) {
    u8 buf[0x20];
    u8 *p;
    u32 fl;
    s32 r;
    func_0200fd0c(buf);
    func_ov123_02075154(buf, 0x20);
    p = data_ov123_020e47a0;
    if (p == 0) {
        return;
    }
    fl = *(u32 *) p;
    if (fl & 0x200) {
        func_ov123_020cd050(fl);
        return;
    }
    if (fl & 0x100) {
        r = func_ov123_020cd0e8(p + 0x920);
        if (r == 0) {
            r = func_ov123_020cd0e8(data_ov123_020e47a0 + 0x860);
        }
        if (r != 0) {
            return;
        }
        func_ov123_020cd050(r);
        return;
    }
    if (!(fl & 0x20)) {
        return;
    }
    func_ov123_020cd0e8(p + 0x920);
}
