#include "m2c.h"
typedef struct {
    u8 pad[0x28];
    u8 *code;
    u8 pad2[0x50c - 0x2c];
    u16 pc;
} G;
extern G *data_ov111_020f1bd8;
u16 func_ov111_020e5d60(s32);
s32 func_ov111_020e5d98(s32);
void func_ov111_020e5e5c(void) {
    s32 a;
    s32 b;
    s32 r;
    a = func_ov111_020e5d98(1);
    b = func_ov111_020e5d98(3);
    r = 0;
    switch (data_ov111_020f1bd8->code[data_ov111_020f1bd8->pc + 5] & 0xf) {
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
        data_ov111_020f1bd8->pc += 8;
        return;
    }
    data_ov111_020f1bd8->pc = func_ov111_020e5d60(6);
}
