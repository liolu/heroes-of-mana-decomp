#include "m2c.h"
void func_ov123_020cc97c(s32, s32);
void func_ov123_020ccc44(void *, s32);
void func_ov123_020cdea4(void);
extern void *data_ov123_020e4790;
extern s32 *data_ov123_020e47a4[];
extern void func_ov123_020ce074(void);
void func_ov123_020ce148(s32 arg0, void *arg1, s32 arg2) {
    if (data_ov123_020e47a4[2] == NULL) {
        func_ov123_020cc97c(6, -0x28);
        return;
    }
    if (arg2 > 0 && (u32) arg2 < 0xC) {
        func_ov123_020cc97c(6, -0x28);
        return;
    }
    if (arg0 != 0) {
        if (*(s32 *) ((u8 *) arg1 + 4) != 0x44535359) {
            func_ov123_020cc97c(6, -0x28);
            return;
        }
        switch (*(s32 *) ((u8 *) arg1 + 8)) {
            case 0xD4:
                func_ov123_020ccc44(NULL, 0);
                *(s32 *) ((u8 *) data_ov123_020e4790 + 0xDF4) = *(s32 *) ((u8 *) arg1 + 0xC);
                *data_ov123_020e47a4[2]                       = 4;
                func_ov123_020ccc44((void *) func_ov123_020ce074, 0);
                break;
            case 0xCA:
                func_ov123_020ccc44(NULL, 0);
                switch (*(s32 *) ((u8 *) arg1 + 0xC) - 0x15) {
                    case 0:
                        func_ov123_020cc97c(9, -2);
                        break;
                    case 3:
                        func_ov123_020cc97c(6, -0x14);
                        break;
                    case 6:
                        func_ov123_020cc97c(6, -0xA);
                        break;
                    case 8:
                        func_ov123_020cdea4();
                        break;
                }
                break;
            default:
                func_ov123_020cc97c(6, -0x28);
                break;
        }
    } else {
        func_ov123_020ccc44(NULL, 0);
        func_ov123_020cc97c(6, -0xA);
    }
}
