/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct M {
    u8 pad0[2];
    u16 type;
    u8 pad1[4];
    u16 sub;
    u16 val;
    u8 pad2[2];
    u16 q;
} M;
extern u8 *data_ov123_020df180;
extern u8 func_ov123_020669a8;
void func_ov123_020676ac(s32);
void func_ov123_0206759c(void);
s32 WM_StartDCF(void *, void *, u32);
void func_ov123_020677b0(s32, void *, s32, s32);

void func_ov123_02066bb8(M *m) {
    s32 r;
    u16 w;
    switch (m->type) {
        case 0:
            switch (m->sub) {
                case 6:
                    break;
                case 8:
                case 9:
                    switch (*(s32 *) (data_ov123_020df180 + 0x2260)) {
                        case 11:
                            break;
                        case 10:
                            *(u16 *) (data_ov123_020df180 + 0x2282) = 0;
                        case 8:
                            func_ov123_020676ac(0xC);
                            return;
                        case 9:
                            *(u16 *) (data_ov123_020df180 + 0x2282) = 0;
                            *(u16 *) (data_ov123_020df180 + 0x2280) = 6;
                        case 12:
                            func_ov123_0206759c();
                            return;
                    }
                    break;
                case 7:
                    if (*(s32 *) (data_ov123_020df180 + 0x2260) == 0xC) {
                        func_ov123_020676ac(8);
                        func_ov123_0206759c();
                        return;
                    }
                    w = m->val;
                    if (w >= 1 && w <= 0x7D7) {
                        *(u16 *) (data_ov123_020df180 + 0x2282) = w;
                        r = WM_StartDCF(&func_ov123_020669a8, data_ov123_020df180 + 0x1500, 0x620);
                        if (r == 2) {
                            return;
                        }
                        if (r != 3 && r == 8) {
                            func_ov123_020676ac(0xC);
                            func_ov123_020677b0(1, data_ov123_020df180 + 0x2140, 0, 0x7ED);
                            return;
                        }
                        func_ov123_020676ac(0xB);
                        func_ov123_020677b0(7, data_ov123_020df180 + 0x2140, 0, 0x7F6);
                        return;
                    }
                    func_ov123_0206759c();
                    return;
                case 0x1A:
                    return;
                default:
                    func_ov123_020676ac(0xB);
                    func_ov123_020677b0(7, data_ov123_020df180 + 0x2140, m->sub, 0x804);
                    return;
            }
            break;
        case 1:
            *(u16 *) (data_ov123_020df180 + 0x22F8) = m->q;
        case 6:
        case 11:
        case 12:
            func_ov123_020676ac(8);
            func_ov123_0206759c();
            return;
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
        case 8:
        case 9:
        case 10:
        default:
            func_ov123_020676ac(0xB);
            func_ov123_020677b0(7, data_ov123_020df180 + 0x2140, 0, 0x81B);
            break;
    }
}
