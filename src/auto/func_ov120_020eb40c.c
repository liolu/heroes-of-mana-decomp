#include "m2c.h"

void func_ov120_020f02b8(void);
typedef struct {
    s16 x;
    s16 pad;
    u32 a : 16;
    u32 b : 8;
    u32 c : 3;
    u32 f : 1;
    u32 d : 4;
} S;
typedef struct {
    u8 p[0xa10];
    u32 lo : 16;
    u32 hi : 16;
} T;
extern S data_ov120_020f4228;
extern s16 data_ov120_020f42d4;
extern T data_ov120_020f46dc;

void func_ov120_020eb40c(void) {
    if (data_ov120_020f4228.a == 0x23 && data_ov120_020f4228.b == 0x23) {
        if (data_ov120_020f4228.f == 0) {
            return;
        }
        if (data_ov120_020f42d4 == data_ov120_020f4228.x) {
            return;
        }
        data_ov120_020f46dc.lo = 2;
        data_ov120_020f42d4    = data_ov120_020f4228.x;
        func_ov120_020f02b8();
        data_ov120_020f4228.f = 0;
    }
}
