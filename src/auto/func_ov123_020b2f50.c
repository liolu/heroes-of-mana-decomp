#include "m2c.h"
typedef struct {
    s32 f0, f1, f2;
} SC1;

extern void *data_ov123_020e45f8;

void func_ov123_020b2f50(void *arg0) {
    *(SC1 *) ((u8 *) data_ov123_020e45f8 + 0) = *(SC1 *) ((u8 *) arg0 + 0);
}
