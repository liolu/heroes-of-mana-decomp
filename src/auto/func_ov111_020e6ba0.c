#include "m2c.h"
extern u8 *data_0203673c;
extern u8 data_ov000_02050718[];
extern u8 *data_ov111_020f1bd8;
s32 func_ov111_020e5d98(s32 a);
void func_02003734(s32 a, s32 b);
void func_ov111_020e6ba0(void) {
    s32 r   = func_ov111_020e5d98(1);
    s32 lim = data_ov000_02050718[((*(u32 *) (*(u8 **) (data_0203673c + 0x2c) + 0x108c)) << 23) >> 29];
    if (r > lim) {
        r = lim;
    }
    func_02003734(r, func_ov111_020e5d98(3));
    *(u16 *) (data_ov111_020f1bd8 + 0x500 + 0xc) += 5;
}
