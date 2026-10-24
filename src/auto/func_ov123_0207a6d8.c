#include "m2c.h"
typedef struct {
    s32 *items;
    s32 count;
} Arr;
extern void func_02020d04(void *, void *, s32, s32);
extern s32 func_ov123_0207a204(s32);
extern u8 data_ov123_020d9ba0[];
extern u8 data_ov123_020d9b94[];
s32 func_ov123_0207a6d8(Arr *a) {
    s32 sum = 0;
    s32 i;
    if (a == 0) {
        func_02020d04(data_ov123_020d9ba0, data_ov123_020d9b94, 0, 0x61);
    }
    if (a == 0) {
        return 0;
    }
    for (i = 0; i < a->count; i++) {
        sum += func_ov123_0207a204(a->items[i]);
    }
    return sum;
}
