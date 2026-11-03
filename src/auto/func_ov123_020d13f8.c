#include "m2c.h"

typedef struct {
    s32 v[6];
} Blk24;

void func_ov123_020d13f8(void *arg0, void *arg1) {
    *(Blk24 *) arg0 = *(Blk24 *) ((u8 *) arg1 + 8);
}
