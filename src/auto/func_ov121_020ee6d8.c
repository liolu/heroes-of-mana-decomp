#include "m2c.h"

typedef struct {
    u8 pad[0xd];
    u8 b;
} G;
typedef struct {
    u8 pad[8];
    s32 v;
} X;
typedef struct {
    u8 b[0x5c];
} Y;

extern void func_ov121_020ee638(s32);
extern void func_ov121_020ec77c(void);
extern void func_ov121_020ec2c4(s32, s32, void *, s32, s32, void *, s32);
extern s32 func_ov121_020ee670(s32, s32);
extern void func_ov121_020ec130(s32, s32, s32, s32);
extern G data_ov121_020f6608;
extern Y data_ov121_020f6628[];
extern X data_ov121_020f6d60;
extern u8 data_ov121_020f6b90[];
extern u32 data_ov121_020f6678[];
extern u32 data_ov121_020f667c[];

void func_ov121_020ee6d8(s32 a, s32 flag) {
    s32 k;

    k = data_ov121_020f6608.b + a;
    if (k >= 15) {
        return;
    }
    data_ov121_020f6d60.v = (k % 6) * 0x20 + 0x750;
    func_ov121_020ee638(k % 6);
    if (flag != 0) {
        func_ov121_020ec77c();
    }
    k                     = data_ov121_020f6608.b + a;
    data_ov121_020f6d60.v = (k % 6) * 0x20 + 0x750;
    func_ov121_020ec2c4(0, 0, &data_ov121_020f6628[k], 0, 0, data_ov121_020f6b90 + (k % 6) * 0x40, 8);
    k = data_ov121_020f6608.b + a;
    func_ov121_020ec130(func_ov121_020ee670((u16) * (u32 *) ((u8 *) data_ov121_020f6678 + k * 0x5c), 0x63), 4, 1, (k % 4) * 3);
    k = data_ov121_020f6608.b + a;
    func_ov121_020ec130(func_ov121_020ee670(*(u32 *) ((u8 *) data_ov121_020f6678 + k * 0x5c) >> 16, 0x63), 4, 1,
                        (k % 4) * 3 + 1);
    k = data_ov121_020f6608.b + a;
    func_ov121_020ec130(func_ov121_020ee670((u16) * (u32 *) ((u8 *) data_ov121_020f667c + k * 0x5c), 0x63), 4, 1,
                        (k % 4) * 3 + 2);
}
