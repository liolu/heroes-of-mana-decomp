#include "m2c.h"

typedef struct {
    s32 v[2];
} P2;
s32 func_02024d8c(s32, s32);
extern P2 data_ov123_020d5034;

s32 func_ov123_0208e85c(s32 a) {
    P2 p = data_ov123_020d5034;
    u32 i;
    for (i = 0; i < 2; i++) {
        if (func_02024d8c(a, p.v[i]) == 0) {
            return 0;
        }
    }
    return 1;
}
