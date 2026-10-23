#include "m2c.h"
typedef struct {
    u8 pad[0xe08];
    s32 st;
} G;
void func_ov123_020cc134(s32);
extern G *data_ov123_020e4790;
void func_ov123_020cc564(s32 a) {
    switch (data_ov123_020e4790->st) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            break;
        case 5:
            func_ov123_020cc134(a);
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            break;
    }
}
