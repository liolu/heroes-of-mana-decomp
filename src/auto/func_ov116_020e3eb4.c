#include "m2c.h"

typedef struct G {
    u8 pad[0x9A4];
    u8 f9A4;
    u8 f9A5;
    u8 pad2[2];
    u32 pad3 : 21;
    u32 b21 : 1;
    u32 rest : 10;
} G;

typedef struct H {
    u8 pad[0xB0];
    s16 fB0;
} H;

s32 FX_Div(s32, s32);
void func_ov116_020e2870(s32, s32, s32, s32);
extern G data_ov116_020e71a8;
extern H data_ov116_020e7aa8;

void func_ov116_020e3eb4(void) {
    s32 a;
    s32 fx;
    s32 t;
    s32 b;
    u32 temp_r1;
    s32 var_r5;
    s32 var_r6;
    s32 temp_r7;
    s32 temp_r8;

    a       = FX_Div(6, data_ov116_020e71a8.f9A4);
    fx      = (s32) (((s64) a * 0x60 + 0x800) >> 12);
    t       = (fx << 12) >> 12;
    temp_r7 = t / 8;
    temp_r8 = t % 8;
    var_r6  = 0x38;
    b       = FX_Div((0x60 - fx) << 12, data_ov116_020e71a8.f9A4 - 6);
    temp_r1 = data_ov116_020e71a8.b21;
    if (temp_r1 != 0) {
        var_r6 += data_ov116_020e7aa8.fB0;
    } else {
        var_r6 += (s32) (((s64) b * data_ov116_020e71a8.f9A5 + 0x800) >> 12) >> 12;
    }
    func_ov116_020e2870(0xF4, var_r6 + 8, temp_r1 * 3 + 0x13, 1);
    var_r5 = 0;
    if (temp_r7 > 0) {
        do {
            func_ov116_020e2870(0xF4, var_r6 + 0xC, data_ov116_020e71a8.b21 * 3 + 0x15, 1);
            var_r5 += 1;
            var_r6 += 8;
        } while (var_r5 < temp_r7);
    }
    func_ov116_020e2870(0xF4, temp_r8 + var_r6 + 8, data_ov116_020e71a8.b21 * 3 + 0x14, 1);
    if (temp_r8 == 0) {
        return;
    }
    t = 8 - temp_r8;
    func_ov116_020e2870(0xF4, (var_r6 - t) + 0xC, data_ov116_020e71a8.b21 * 3 + 0x15, 1);
}
