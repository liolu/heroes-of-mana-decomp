/* compiler: 1.2/sp3 */
/* near start: 4 diffs with profile "1.2/sp3" */
#include "m2c.h"

s32 func_ov123_02091360(void);
u8 *func_ov123_020913d8(s32);
void func_ov123_020919e4(s32, u8 *);
s32 func_ov123_02091bcc(s32, u8 *, u8, u8 *);
s32 func_ov123_02091cac(u8 *, u8 *);
s32 func_ov123_02091d44(u8 *, u8, u8 *);
void func_ov123_02093600(u16);

void func_ov123_02091e88(u8 *arg0) {
    s32 r;
    s32 v;
    s32 r6;
    u16 h;
    u8 c;
    u8 r5;
    u8 *r4;
    u8 *q;
    s32 o;

    r6                                     = -1;
    r4                                     = func_ov123_020913d8(0x10);
    *(s8 *) (func_ov123_020913d8(1) + 0xB) = 1;
    r                                      = func_ov123_02091360();
    switch (r) {
        case 3:
            h  = *(u16 *) (arg0 + 0xA);
            r5 = *(r4 + 0xD11);
            if ((h == 0) || (c = *(arg0 + 0xC), (c == 0))) {
                func_ov123_02093600(*(u16 *) (arg0 + 0x36));
            } else if ((h == 1) || (c == 0x20)) {
                func_ov123_02093600(*(u16 *) (arg0 + 0x36));
                r6 = func_ov123_02091d44(arg0, *(r4 + 0xD10), r4 + 0x300);
            } else {
                r6 = func_ov123_02091d44(arg0, *(r4 + 0xD10), r4 + 0x300);
            }
            break;
        case 4:
            r5 = *(u16 *) (r4 + *(r4 + 0xD0F) * 0xC0 + 0x4A6) - 1;
            r6 = func_ov123_02091cac(arg0, r4);
            if (r6 >= 0) {
                q            = r4 + 0x447;
                v            = *(r4 + 0xD0F);
                *(q + v * 4) = *(q + v * 4) | 0x80;
            }
            break;
        case 5:
            r5 = *(r4 + 0xD11);
            r6 = func_ov123_02091d44(arg0, 1, r4 + 0x300 + *(r4 + 0xD0F) * 0x24);
            if (r6 >= 0) {
                q        = r4 + 0x300;
                o        = *(r4 + 0xD0F) * 0x24;
                *(q + o) = (*(q + o) & ~0xF) | 1;
            }
            break;
        default:
            return;
    }
    if (r6 < 0) {
        return;
    }
    func_ov123_020919e4(func_ov123_02091bcc(r6, arg0, r5, r4), r4);
}
