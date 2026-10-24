/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_ov123_02079858();
void func_ov123_0207c048(void *, s32, void *, s32);
void func_ov123_0207c12c(void *, s32, s32);
void func_ov123_0208d444();
s32 func_ov123_02099548();
s32 func_ov123_02099804();
s32 func_ov123_0209a704();
void func_ov123_0209a880(s32);
void func_ov123_0209a8a0();
void func_ov123_0209bce0(s32, s32);
void func_ov123_0209bd50();
void func_ov123_0209be68();
void func_ov123_0209d00c();
void func_ov123_020a3744(s32);
void func_ov123_020a4a1c();
extern u8 *data_ov123_020e1748;
extern u8 func_ov123_0209a434;
extern u8 func_ov123_0209a59c;
extern u8 func_ov123_0209ce7c;
extern u8 func_ov123_0209cf60;

void func_ov123_0209ada8(void) {
    if (func_ov123_02099804() != 0) {
        func_ov123_0209a8a0();
    }
    if (data_ov123_020e1748 == NULL) {
        return;
    }
    if (*(u32 *) (data_ov123_020e1748 + 0x24) == 0) {
        return;
    }
    if (func_ov123_02099548() != 0) {
        return;
    }
    switch (*(u32 *) (data_ov123_020e1748 + 0x24)) {
        case 1:
            switch (func_ov123_02079858()) {
                case 1:
                    func_ov123_0207c12c(data_ov123_020e1748 + 0x1C, *(s32 *) (data_ov123_020e1748 + 0xA0), 0);
                    if (func_ov123_0209a704() != 0) {
                        return;
                    }
                    func_ov123_0207c048(data_ov123_020e1748 + 0x1C, 0, &func_ov123_0209a59c, 0);
                    if (func_ov123_0209a704() != 0) {
                        return;
                    }
                    func_ov123_0207c048(data_ov123_020e1748 + 0x1C, 3, &func_ov123_0209a434, 0);
                    if (func_ov123_0209a704() != 0) {
                        return;
                    }
                    func_ov123_0207c048(data_ov123_020e1748 + 0x1C, 1, &func_ov123_0209cf60, 0);
                    if (func_ov123_0209a704() != 0) {
                        return;
                    }
                    func_ov123_0207c048(data_ov123_020e1748 + 0x1C, 2, &func_ov123_0209ce7c, 0);
                    if (func_ov123_0209a704() != 0) {
                        return;
                    }
                    func_ov123_0209a880(2);
                    func_ov123_0209be68();
                    break;
                case 2:
                    func_ov123_0209bce0(3, 0xFFFFB172);
                    return;
                case 3:
                    func_ov123_0209bce0(4, 0xFFFFB17B);
                    return;
            }
            break;
        case 2:
            func_ov123_0209bd50();
            break;
        case 3:
        case 4:
            func_ov123_0209d00c();
            func_ov123_020a3744(0);
            break;
        case 5:
            func_ov123_020a3744(1);
            func_ov123_0209d00c();
            break;
        case 6:
            func_ov123_020a4a1c();
            func_ov123_0209d00c();
            if (*(volatile u8 *) (data_ov123_020e1748 + 0x369) == 2 || *(volatile u8 *) (data_ov123_020e1748 + 0x369) == 3) {
                func_ov123_020a3744(1);
            } else if (*(s32 *) data_ov123_020e1748 != 0) {
                func_ov123_020a3744(0);
            }
            break;
    }
    if (data_ov123_020e1748[0x36C] != 1) {
        return;
    }
    if (*(s32 *) (data_ov123_020e1748 + 0x364) != 0) {
        func_ov123_0208d444();
        *(s32 *) (data_ov123_020e1748 + 0x364) = 0;
    }
    data_ov123_020e1748[0x36C] = 0;
}
