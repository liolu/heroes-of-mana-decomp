#include "m2c.h"
typedef struct {
    u16 f0, f1, f2, f3;
} SC1;

void func_ov123_020d0bf8(void *arg0, void *arg1) {
    *(SC1 *) ((u8 *) arg0 + 0) = *(SC1 *) ((u8 *) arg1 + 20);
}
