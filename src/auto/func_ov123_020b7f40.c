/* compiler: 1.2/sp3 */
#include "m2c.h"
extern s8 func_ov123_020ae120(void);
extern void func_ov123_020c36bc(s32);
extern void func_ov123_020b73f0(void);
extern s32 func_02008fb4(s32, s32);
extern void func_ov123_020c2384(void);
extern void func_ov123_020ae090(void);
extern void func_ov123_020c536c(s32, s32, s32, s32, s32);
extern void func_ov123_020b2410(void *);
extern void func_ov123_020b73b8(void);
extern void func_ov123_020b7f18(void);
extern u8 *data_ov123_020e4654;
extern u8 data_ov123_020e464c;
extern u16 data_ov123_020e4650;

void func_ov123_020b7f40(void) {
    s32 idx;
    if (*(s32 *) (data_ov123_020e4654 + 0x38) != 0) {
        return;
    }
    if (data_ov123_020e4654[0x57] != 0) {
        return;
    }
    switch (func_ov123_020ae120()) {
        case 0:
            func_ov123_020c36bc(7);
            break;
        case 1:
            if (data_ov123_020e464c == 4) {
                data_ov123_020e4654[0x54] = 1;
                func_ov123_020c36bc(6);
                func_ov123_020b73f0();
            } else {
                idx = data_ov123_020e464c + func_02008fb4(data_ov123_020e4650, 0x1c);
                if (*(u8 *) (*(u8 **) data_ov123_020e4654 + idx * 0x2a + 0x28) == 2) {
                    func_ov123_020c36bc(9);
                    func_ov123_020c2384();
                    func_ov123_020ae090();
                    func_ov123_020c536c(0xe, 1, 1, -1, 0);
                    func_ov123_020b2410(func_ov123_020b73b8);
                    return;
                }
                data_ov123_020e4654[0x54] = 1;
                data_ov123_020e4654[0x52] = idx;
                func_ov123_020c36bc(6);
            }
            break;
        default:
            return;
    }
    func_ov123_020b2410(func_ov123_020b7f18);
}
