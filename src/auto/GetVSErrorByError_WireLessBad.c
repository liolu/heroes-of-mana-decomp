/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct G {
    u8 pad[0xa40];
    s32 mode;
    u8 pad2[4];
    u32 : 31;
    u32 top : 1;
} G;

extern s32 data_ov000_02051540;
extern G data_ov121_020f6d60;
extern void func_ov121_020f3af8(void);
extern void func_ov121_020f3524(s32, s32);
extern s32 func_ov121_020f3c60(void);
extern s32 PM_GetLCDPower(void);
extern s32 PM_SetLCDPower(s32);
extern void func_ov121_020f34dc(s32);
extern void func_ov121_020f3294(s32, s32);
extern s32 func_ov121_020ece28(void);

void GetVSErrorByError_WireLessBad(void) {
    s32 r;
    if (data_ov000_02051540 != 0) {
        if (data_ov121_020f6d60.top != 0) {
            func_ov121_020f3af8();
        }
        if (data_ov121_020f6d60.mode == 1) {
            func_ov121_020f3524(0, 0x6b);
            do {
                r = func_ov121_020f3c60();
            } while (r == 0 || r == 14);
            func_ov121_020f3af8();
        } else {
            if (PM_GetLCDPower() == 0) {
                s32 one = 1;
                while (PM_SetLCDPower(one) != 1) {
                }
            }
            func_ov121_020f34dc(0x80000);
            func_ov121_020f3294(0x80000, 0x40000000);
            do {
                r = func_ov121_020ece28();
            } while (r == 0 || r == 14);
            func_ov121_020f34dc(0x80000);
        }
    }
}
