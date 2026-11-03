/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 data_ov123_020e4664;
extern u8 data_ov123_020e466c;
extern s16 data_ov123_020e4670;
extern u8 *data_ov123_020e4674;

u8 *func_ov123_020c35d4(void);
void func_ov123_020c36bc(s32 v);
void func_ov123_020bc1fc(void);
void func_ov123_020c23b4(s32 v);
s32 func_ov123_020cb6ac(s32 a, void *b, s32 c, s32 d);
void func_ov123_020bb330(void);
void func_ov123_020bb264(void);
extern void func_ov123_020bb4ac(void);
extern void func_ov123_020bb558(void);

void func_ov123_020baee4(s32 arg0) {
    s32 r4;
    s32 st;
    u8 *obj;

    obj = func_ov123_020c35d4();
    r4  = 0;
    st  = data_ov123_020e4664;
    if (st == 8 && obj[0xF5] == 0) {
        if (arg0 == 0) {
            return;
        }
        if (arg0 == 2) {
            return;
        }
    }
    switch (st) {
        case 0:
            if (arg0 == 1) {
                data_ov123_020e4664 = 0xB;
            } else if (arg0 == 3) {
                data_ov123_020e466c += 1;
            } else {
                r4 = 2;
            }
            break;
        case 10:
            if (arg0 == 1) {
                data_ov123_020e466c -= 1;
            } else if (arg0 != 3) {
                r4 = 2;
            } else {
                data_ov123_020e4664 = data_ov123_020e4674[0x42];
            }
            break;
        case 11:
            if (arg0 == 1) {
                if (data_ov123_020e4674[0x47] != 0) {
                    return;
                }
                func_ov123_020c36bc(9);
                data_ov123_020e4674[0x47] = 1;
                return;
            } else if (arg0 != 3) {
                r4 = 2;
            } else {
                data_ov123_020e4664 = 0;
                data_ov123_020e466c = 0;
                data_ov123_020e4670 = 0;
                func_ov123_020bc1fc();
                func_ov123_020c23b4(0);
            }
            break;
        case 12:
        case 13:
            data_ov123_020e4674[0x42] = st;
            if (arg0 == 1) {
                data_ov123_020e4664 = 0xA;
                data_ov123_020e466c = 3;
                data_ov123_020e4670 = 0x91;
                func_ov123_020bc1fc();
                func_ov123_020c23b4(0x37);
            } else if (arg0 == 3) {
                if (data_ov123_020e4674[0x47] != 0) {
                    return;
                }
                func_ov123_020c36bc(9);
                data_ov123_020e4674[0x47] = 1;
                return;
            } else if (st == 0xC) {
                data_ov123_020e4664 = 0xD;
            } else {
                data_ov123_020e4664 = 0xC;
            }
            break;
        default:
            if (arg0 == 1) {
                if (data_ov123_020e466c != 0) {
                    data_ov123_020e466c -= 1;
                    break;
                }
                func_ov123_020c36bc(0x13);
                *(s32 *) (data_ov123_020e4674 + 0x38) = func_ov123_020cb6ac(0, func_ov123_020bb558, 0, 0x78);
                return;
            } else if (arg0 == 3) {
                if (data_ov123_020e466c < 3U) {
                    data_ov123_020e466c += 1;
                    break;
                }
                func_ov123_020c36bc(0x13);
                *(s32 *) (data_ov123_020e4674 + 0x38) = func_ov123_020cb6ac(0, func_ov123_020bb4ac, 0, 0x78);
                return;
            } else {
                r4 = 2;
                if (st == 2) {
                    data_ov123_020e4664 = 3;
                } else if (st == 3) {
                    data_ov123_020e4664 = r4;
                } else if (st == 7) {
                    data_ov123_020e4664 = 8;
                } else if (st == 8) {
                    data_ov123_020e4664 = 7;
                } else {
                    break;
                }
                func_ov123_020c36bc(8);
                func_ov123_020bb330();
            }
            break;
    }
    if (r4 == 2) {
        return;
    }
    func_ov123_020c36bc(8);
    if (r4 != 0) {
        return;
    }
    func_ov123_020bb264();
}
