#include "m2c.h"
typedef struct {
    u8 pad[0x85c];
    u32 lo : 8;
    u32 mid : 8;
    u32 hi : 16;
} D;
extern D data_ov115_020e9160;
extern void func_020037e8(s32 a);
extern s32 func_ov115_020e2980(s32 a);
s32 func_ov115_020e2a24(u32 a) {
    D *d;
    func_020037e8(0x66);
    d      = &data_ov115_020e9160;
    d->mid = a;
    if (func_ov115_020e2980(a) == 0) {
        d      = &data_ov115_020e9160;
        d->mid = 0x34;
        return 0;
    }
    d      = &data_ov115_020e9160;
    d->mid = 0x34;
    return 1;
}
