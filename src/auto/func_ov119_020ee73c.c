#include "m2c.h"
typedef struct {
    s16 a;
    s16 b;
} P;
typedef struct {
    u8 pad[0x4f8];
    u16 c;
} G;
u32 func_ov119_020edf78(s32);
u32 func_ov119_020edf40(s32);
void func_ov119_020edf04(u32, s32);
extern P data_02030644[];
extern G *data_ov119_020f2f68;
void func_ov119_020ee73c(void) {
    u32 v = func_ov119_020edf78(3);
    u32 r = func_ov119_020edf40(1);
    func_ov119_020edf04(r, data_02030644[(u16) v >> 4].a);
    data_ov119_020f2f68->c += 5;
}
