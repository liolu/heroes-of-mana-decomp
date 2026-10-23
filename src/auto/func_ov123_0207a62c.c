/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct Obj {
    s32 **list;
    s32 a;
    s32 b;
    s32 (*fn)(s32, s32);
    s32 c;
} Obj;
extern u8 data_ov123_020d9ba0[];
extern u8 data_ov123_020d9b94[];
void func_02020d04(void *, void *, s32, s32);
s32 func_ov123_02079df4(void *, s32, s32, s32, s32);
void func_ov123_0207a140(void *, s32);
void func_ov123_02079ec0(void *, s32, s32);
void func_ov123_0207a62c(Obj *o, s32 arg) {
    s32 idx;
    s32 r;
    if (o == 0) {
        func_02020d04(data_ov123_020d9ba0, data_ov123_020d9b94, 0, 0x71);
    }
    if (o == 0) {
        return;
    }
    idx = o->fn(arg, o->a);
    r   = func_ov123_02079df4(o->list[idx], arg, o->c, 0, 0);
    if (r == -1) {
        func_ov123_0207a140(o->list[idx], arg);
    } else {
        func_ov123_02079ec0(o->list[idx], arg, r);
    }
}
