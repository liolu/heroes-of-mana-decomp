/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 data_ov123_020db3d4[];
extern u8 data_ov123_020db3cc[];
extern u8 data_ov123_020db3c8[];
extern u8 data_ov123_020db3d0[];
extern u8 data_ov123_020db3dc[];
extern u8 data_ov123_020db3e4[];
extern u8 data_ov123_020db3ec[];

void *func_ov123_02086d54(void *a, void *b);
s32 func_02026c4c(void *p);
s32 func_ov123_02086c3c(s32 a, s32 b, s32 c);
u8 *func_02024f10(u8 *a, u8 *b);
void func_ov123_020866bc(s32 a, s32 b, s32 c, s32 d, s32 e);

void func_ov123_02086a10(void *arg0) {
    u8 *q;
    s32 r8;
    s32 r7;
    s32 r6;
    s32 r5;
    s32 third;
    s32 fourth;

    r7    = func_02026c4c(func_ov123_02086d54(arg0, data_ov123_020db3d4));
    r6    = func_02026c4c(func_ov123_02086d54(arg0, data_ov123_020db3cc));
    r5    = func_02026c4c(func_ov123_02086d54(arg0, data_ov123_020db3c8));
    third = r5;
    r5    = func_02026c4c(func_ov123_02086d54(arg0, data_ov123_020db3d0));
    r8    = func_ov123_02086c3c(1, r6, third);
    if (r8 == -1) {
        return;
    }
    r6 = func_02026c4c(func_ov123_02086d54(arg0, data_ov123_020db3dc));
    q  = func_02024f10(arg0, data_ov123_020db3e4);
    if (q == NULL) {
        q  = data_ov123_020db3ec;
        r6 = 0;
    } else {
        q = q + 6;
    }
    func_ov123_020866bc(r8, r7, r5, (s32) q, r6);
}
