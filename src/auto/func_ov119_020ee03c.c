#include "m2c.h"
typedef struct {
    u8 pad[0x14];
    u8 *code;
    u8 pad2[0x4f8 - 0x18];
    u16 pc;
} G;
extern G *data_ov119_020f2f68;
u16 func_ov119_020edf40(s32);
s32 func_ov119_020edf78(s32);
void func_ov119_020ee03c(void) {
    s32 a;
    s32 b;
    s32 r;
    a = func_ov119_020edf78(1);
    b = func_ov119_020edf78(3);
    r = 0;
    switch (data_ov119_020f2f68->code[data_ov119_020f2f68->pc + 5] & 0xf) {
        case 0:
            if (a == b) {
                r++;
            }
            break;
        case 1:
            if (a != b) {
                r++;
            }
            break;
        case 2:
            if (a > b) {
                r++;
            }
            break;
        case 3:
            if (a < b) {
                r++;
            }
            break;
        case 4:
            if (a >= b) {
                r++;
            }
            break;
        case 5:
            if (a <= b) {
                r++;
            }
            break;
        case 6:
            if (a & b) {
                r++;
            }
            break;
        case 7:
            if (a ^ b) {
                r++;
            }
            break;
        case 8:
            if (a | b) {
                r++;
            }
            break;
    }
    if (r == 1) {
        data_ov119_020f2f68->pc += 8;
        return;
    }
    data_ov119_020f2f68->pc = func_ov119_020edf40(6);
}
