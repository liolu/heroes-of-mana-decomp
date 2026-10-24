/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern s32 PM_GetLCDPower();
extern s32 PM_SetLCDPower(s32);
extern void func_02000f44(s32);
extern void func_02000f78(s32);
extern void func_ov119_020e9a60();
extern void func_ov121_020e9aa0();
extern s32 func_ov121_020ece28();
extern void func_ov121_020f3294(s32, s32);
extern void func_ov121_020f34dc(s32);
extern void func_ov121_020f3524(s32, s32);
extern void func_ov121_020f3af8();
extern s32 func_ov121_020f3c60();
extern s32 data_ov000_02051540;

typedef struct D {
    u8 p[0xa40];
    s32 f_a40;
    u32 f_a44;
    u32 f_a48;
} D;
extern D data_ov121_020f6d60;

void GetVSErrorByError_Link(void) {
    s32 r;
    if (data_ov000_02051540 == 0) {
        func_02000f44(0x10);
        func_ov119_020e9a60();
        func_ov121_020f3294(0x80000, 0x40000000);
        do {
            r = func_ov121_020ece28();
        } while (r == 0 || r == 0xE);
        func_ov121_020f34dc(0x80000);
        func_ov121_020e9aa0();
        func_02000f78(0x10);
    } else {
        if ((data_ov121_020f6d60.f_a48 >> 31) != 0) {
            func_ov121_020f3af8();
        }
        if (data_ov121_020f6d60.f_a40 == 1) {
            func_ov121_020f3524(0, 0x6B);
            do {
                r = func_ov121_020f3c60();
            } while (r == 0 || r == 0xE);
            func_ov121_020f3af8();
        } else {
            if (PM_GetLCDPower() == 0) {
                do {
                } while (PM_SetLCDPower(1) != 1);
            }
            func_ov121_020f34dc(0x80000);
            func_ov121_020f3294(0x80000, 0x40000000);
            do {
                r = func_ov121_020ece28();
            } while (r == 0 || r == 0xE);
            func_ov121_020f34dc(0x80000);
        }
    }
}
