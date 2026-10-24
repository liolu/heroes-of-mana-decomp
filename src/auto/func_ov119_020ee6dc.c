#include "m2c.h"
extern void func_ov119_020edf04(s32, s32);
extern s32 func_ov119_020edf40(s32);
extern s32 func_ov119_020edf78(s32);
extern s16 data_02030644[];
extern u8 *data_ov119_020f2f68;
void func_ov119_020ee6dc(void) {
    s32 t = func_ov119_020edf78(3);
    s32 a = func_ov119_020edf40(1);
    func_ov119_020edf04(a, data_02030644[((u16) t >> 4) * 2 + 1]);
    *(u16 *) (data_ov119_020f2f68 + 0x4F8) += 5;
}
