/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Q {
    s32 a;
    s32 b;
} Q;
s32 func_02024ea0(s32, void *, s32);
s32 func_ov123_0207e5e0(s32, Q, s32 *, void *, s32);
void func_ov123_0207e68c(s32, s32, s32);
void func_ov123_02081e10(s32, void *);
void func_ov123_02086078(s32, void *);
void func_ov123_0208608c(s32, s32, void *);
s32 func_ov123_02086484(s32, s32, s32);
s32 *func_ov123_020996d4(s32);
extern u8 data_ov123_020db200[];
extern u8 data_ov123_020db208[];
extern u8 data_ov123_020db238[];

s32 func_ov123_02085f74(s32 arg0, u8 *arg1, s32 arg2) {
    Q q;
    s32 *p;
    s32 r;
    s32 z;

    if (func_ov123_02086484(arg0, arg2, 1) != 0) {
        return 4;
    }
    if (func_02024ea0(arg2, data_ov123_020db200, 4) != 0) {
        func_ov123_0208608c(arg0, 1, data_ov123_020db208);
        func_ov123_0207e68c(arg0, 3, 1);
        return 3;
    }
    q = *(Q *) (arg1 + 0xC);
    if (q.a != 0) {
        p = func_ov123_020996d4(4);
        if (p == NULL) {
            func_ov123_02086078(arg0, data_ov123_020db238);
            return 1;
        }
        *p = 0;
        r  = func_ov123_0207e5e0(arg0, q, p, arg1, 0);
        if (r != 0) {
            return r;
        }
    }
    func_ov123_02081e10(arg0, arg1);
    return 0;
}
