#include "m2c.h"
typedef struct {
    s32 *arr;
    s32 n;
    s32 f8;
    s32 fc;
    s32 f10;
} R;
extern u8 data_ov123_020d9ba8, data_ov123_020d9b94, data_ov123_020d9bb0, data_ov123_020d9bb8, data_ov123_020d9bc4,
    data_ov123_020d9ba0, data_ov123_020d9bd0;
void func_02020d04(void *, void *, s32, s32);
void *func_ov123_020996d4(s32);
s32 func_ov123_0207a27c(s32, s32, s32);
R *func_ov123_0207a7c4(s32 a, s32 n, s32 b, s32 c, s32 d, s32 e) {
    s32 i;
    R *r;
    if (c == 0) {
        func_02020d04(&data_ov123_020d9ba8, &data_ov123_020d9b94, 0, 0x38);
    }
    if (d == 0) {
        func_02020d04(&data_ov123_020d9bb0, &data_ov123_020d9b94, 0, 0x39);
    }
    if (a == 0) {
        func_02020d04(&data_ov123_020d9bb8, &data_ov123_020d9b94, 0, 0x3A);
    }
    if (n == 0) {
        func_02020d04(&data_ov123_020d9bc4, &data_ov123_020d9b94, 0, 0x3B);
    }
    r = func_ov123_020996d4(0x14);
    if (r == 0) {
        func_02020d04(&data_ov123_020d9ba0, &data_ov123_020d9b94, 0, 0x3E);
    }
    r->arr = func_ov123_020996d4(n << 2);
    if (*(s32 *volatile *) &r->arr == 0) {
        func_02020d04(&data_ov123_020d9bd0, &data_ov123_020d9b94, 0, 0x41);
    }
    for (i = 0; i < n; i++) {
        r->arr[i] = func_ov123_0207a27c(a, b, e);
    }
    r->n   = n;
    r->f8  = e;
    r->f10 = d;
    r->fc  = c;
    return r;
}
