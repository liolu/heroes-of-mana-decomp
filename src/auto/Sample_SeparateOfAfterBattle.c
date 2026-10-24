/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 w0;
    u32 b0 : 1;
    u32 r4 : 31;
    u32 w8;
    u32 pc : 26;
    u32 c3 : 3;
    u32 d3 : 3;
    u32 f0 : 1;
    u32 f1 : 1;
    u32 g : 4;
    u32 h : 4;
    u32 cnt : 8;
    u32 q : 10;
    u32 f28 : 1;
    u32 f29 : 1;
    u32 f30 : 2;
} G;

typedef struct {
    u8 pad[0x10];
    void (*fn)(void);
} VT;

typedef struct {
    u8 pad[0xf44];
    VT *vt;
} OBJ;

void func_ov121_020f3294(s32, s32);
s32 func_ov121_020ecc38(void);
void func_ov121_020f34dc(s32);
s32 PM_GetLCDPower(void);
s32 PM_SetLCDPower(s32);
s32 func_ov121_020ece28(void);
void SetTrsObjCommand(s32, s32, s32, s32);
void func_ov121_020ec77c(void);
s32 CallTrsForLoop(void);

extern G *data_ov000_02051548;
extern OBJ data_ov003_020b54e8;

s32 Sample_SeparateOfAfterBattle(void) {
    s32 s;
    s32 r;

    data_ov000_02051548->b0 = 1;
    func_ov121_020f3294(0x10000, 0x40000000);
    func_ov121_020ecc38();
    func_ov121_020f34dc(0x10000);
    if (((s32) (*(volatile u16 *) 0x27fffa8 & 0x8000) >> 15) == 0 && PM_GetLCDPower() == 0) {
        do {
        } while (PM_SetLCDPower(1) != 1);
    }
    if (data_ov000_02051548->f28 == 0) {
        func_ov121_020f3294(0x20000, 0x40000000);
    } else {
        func_ov121_020f3294(0x40000, 0x40000000);
    }
    data_ov000_02051548->cnt = 0;
    data_ov000_02051548->f1  = 0;
    data_ov000_02051548->b0  = 0;
    while (1) {
        if (data_ov000_02051548->c3 == 0) {
            s = 0;
            switch (func_ov121_020ece28()) {
                case 9:
                    s = 1;
                    break;
                case 10:
                    s = 2;
                    break;
                case 11:
                    s = 3;
                    break;
                case 12:
                    s = 4;
                    break;
                case 14:
                    data_ov003_020b54e8.vt->fn();
                    return 0;
            }
            if (s != 0) {
                data_ov000_02051548->f1 = 1;
                data_ov000_02051548->d3 = s;
                SetTrsObjCommand(10, 12, s, 0);
            }
        } else {
            func_ov121_020ec77c();
        }
        if (data_ov000_02051548->f0 != 0) {
            data_ov003_020b54e8.vt->fn();
            return 15;
        }
        if (CallTrsForLoop() == 0 || data_ov000_02051548->f29 == 0) {
            if (data_ov000_02051548->g != 8 && data_ov000_02051548->g != 7) {
                data_ov003_020b54e8.vt->fn();
                return 0;
            }
        }
        if (data_ov000_02051548->cnt == 0 && (u32) (data_ov000_02051548->g - 7) <= 1) {
            data_ov000_02051548->cnt = 1;
        }
        r = data_ov000_02051548->cnt;
        if (r == 1) {
            break;
        }
        if (r != 0) {
            data_ov000_02051548->cnt = r - 1;
        }
    }
    func_ov121_020f34dc(0x20000);
    return 1;
}
