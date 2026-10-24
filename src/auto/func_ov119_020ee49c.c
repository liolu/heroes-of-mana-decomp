#include "m2c.h"
extern s32 func_ov119_020edf78(s32);
extern s32 func_ov119_020edf40(s32);
extern s32 func_0202d478(s32, s32);
extern void func_ov119_020edf04(s32, s32);
extern u8 *data_ov119_020f2f68;
void func_ov119_020ee49c(void) {
    s16 v = func_ov119_020edf78(3);
    u8 *p;
    if (v != 0) {
        s32 t = func_ov119_020edf40(1);
        func_ov119_020edf04(t, func_0202d478(func_ov119_020edf78(1), v));
    }
    p = data_ov119_020f2f68 + 0x400;
    *(u16 *) (p + 0xf8) += 5;
}
