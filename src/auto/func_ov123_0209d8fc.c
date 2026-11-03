#include "m2c.h"
typedef struct {
    u8 pad[0x17C];
    u8 c17c;
    u8 p17d[3];
    s32 x180;
    s32 x184;
    s32 x188;
    u8 p18c[0x14];
    s32 x1a0;
    u8 p1a4[0x228];
    u8 b3cc;
} St;
void func_ov123_0209d354(s32);
St *func_ov123_0209d368(void);
s32 func_ov123_0209dce0(void);
void func_ov123_020a1dc0(s32, s32, s32);
void func_ov123_0209d8fc(s32 arg0) {
    St *p;
    if (func_ov123_0209d368()->x1a0 == 1) {
        func_ov123_0209d354(6);
    } else if (func_ov123_0209d368()->x1a0 != 6 && func_ov123_0209d368()->x1a0 != 0xB) {
        return;
    }
    if (arg0 == func_ov123_0209d368()->x180) {
        p = func_ov123_0209d368();
        p->c17c++;
    } else {
        func_ov123_0209d368()->c17c = 0;
        func_ov123_0209d368()->x180 = arg0;
    }
    p       = func_ov123_0209d368();
    p->x184 = 0;
    p->x188 = 0;
    func_ov123_020a1dc0(1, arg0, 0);
    if (func_ov123_0209dce0() != 0) {
        return;
    }
    func_ov123_0209d368()->b3cc = 0xFF;
}
