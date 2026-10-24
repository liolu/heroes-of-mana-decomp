/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Obj {
    s32 *arr;
    s32 f4;
    s32 f8;
    s32 (*fn)(s32, s32);
    s32 f10;
} Obj;
void func_02020d04(void *, void *, s32, s32);
s32 func_ov123_02079df4(s32, s32, s32, s32, s32);
void func_ov123_02079f1c(s32, s32);
extern u8 data_ov123_020d9ba0;
extern u8 data_ov123_020d9b94;

s32 func_ov123_0207a58c(Obj *o, s32 x) {
    s32 i;
    s32 r;
    if (o == 0) {
        func_02020d04(&data_ov123_020d9ba0, &data_ov123_020d9b94, 0, 0x82);
    }
    if (o == 0) {
        return 0;
    }
    i = o->fn(x, o->f4);
    r = func_ov123_02079df4(o->arr[i], x, o->f10, 0, 0);
    if (r == -1) {
        return 0;
    }
    func_ov123_02079f1c(o->arr[i], r);
    return 1;
}
