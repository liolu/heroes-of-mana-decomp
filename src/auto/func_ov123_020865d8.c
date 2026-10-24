/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct T {
    u8 b[16];
} T;

s32 func_ov123_0207a204();
void func_ov123_0207a20c(s32);
void func_ov123_02086e44(T *, s32);
void func_ov123_020866bc(s32, s32, s32, T *, s32);
extern T data_ov123_020d4f1c;
extern u8 data_ov123_020db380;
extern void *data_ov123_020db36c;
extern s32 data_ov123_020e0e9c;

void func_ov123_020865d8(void) {
    T b;
    T a;
    s32 i;
    if (data_ov123_020e0e9c == 0) {
        return;
    }
    i = func_ov123_0207a204() - 1;
    if (i >= 0) {
        a = data_ov123_020d4f1c;
        do {
            b                   = a;
            data_ov123_020db36c = &data_ov123_020db380;
            func_ov123_02086e44(&b, 15);
            func_ov123_020866bc(i, 0, 0, &b, 0);
            i--;
        } while (i >= 0);
    }
    func_ov123_0207a20c(data_ov123_020e0e9c);
    data_ov123_020e0e9c = 0;
}
