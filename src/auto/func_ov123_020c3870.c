/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_020c8c80(void *, s32, s32 *, s32 *);
void func_ov123_020c8d2c(void *, s32, s32, u16);
void func_ov123_020cb5f8(s32, s32);
void func_ov123_020c8f8c(void *);
void func_ov123_020ca49c(void *);
extern void *data_ov123_020e46dc;
extern u16 data_ov123_020d8308[];

void func_ov123_020c3870(s32 arg0) {
    s32 a;
    s32 b;
    s32 i;

    func_ov123_020c8c80(((void **) data_ov123_020e46dc)[0], 0, &a, &b);
    a = a - 8;
    for (i = 0; i < 5; i++) {
        func_ov123_020c8d2c(((void **) data_ov123_020e46dc)[i], -1, a, data_ov123_020d8308[i * 2 + 1]);
    }
    if (a > 0x1D6) {
        return;
    }
    if (a < 0x100) {
        return;
    }
    func_ov123_020cb5f8(0, arg0);
    for (i = 0; i < 5; i++) {
        func_ov123_020c8f8c(((void **) data_ov123_020e46dc)[i]);
    }
    func_ov123_020ca49c(&data_ov123_020e46dc);
}
