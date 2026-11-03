#include "m2c.h"

s32 func_0200ed38(s32, s32, s32);
void func_ov119_020ea754(void);
void func_ov119_020ea798(s32, s32);
s32 func_ov119_020edf78(s32);

typedef struct {
    u8 pad0[0x34];
    s32 f34;
    u8 pad38[0x444 - 0x38];
    s32 f444;
    u8 pad448[0x4D4 - 0x448];
    s32 f4d4;
} A;
typedef struct {
    u8 *p;
    s32 f4;
    s32 f8;
} B;
extern A data_ov119_020f2258;
extern B data_ov119_020f2f68;

void func_ov119_020f0640(void) {
    *(s32 *) 0x04000010      = 0x01100000;
    data_ov119_020f2f68.f8   = (func_ov119_020edf78(1) << 8) + 0x30;
    data_ov119_020f2258.f444 = func_ov119_020edf78(1);
    data_ov119_020f2258.f4d4 = func_0200ed38(0, -1, 0x10000);
    func_ov119_020ea754();
    func_ov119_020ea798(0, 0);
    data_ov119_020f2258.f34 |= 0xC0000;
    *(u16 *) (data_ov119_020f2f68.p + 0x4F8) += 3;
}
