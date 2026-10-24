#include "m2c.h"
typedef struct {
    u8 pad[0x488];
    u32 a : 1;
    u32 a1 : 31;
    u32 b0 : 17;
    u32 b : 1;
    u32 b1 : 14;
} D;
typedef struct {
    u16 p : 15;
    u16 on : 1;
} R;
typedef struct {
    u8 pad[0x10];
    u32 f : 1;
    u32 f1 : 31;
} G;
extern D data_ov112_020ec588;
extern G *data_ov000_02051548;
extern s32 data_ov112_020eedb0[2];
void VBlankIntrWaitInGame(void);
void func_ov112_020e2898(void);
void func_ov112_020e2754(void);
void func_ov112_020e26c0(void);
void func_ov112_020e9abc(void);
void func_ov112_020e9ba8(void);
s32 CallTrsForLoop(void);
void func_ov112_020e289c(void) {
    VBlankIntrWaitInGame();
    func_ov112_020e2898();
    *(volatile u16 *) 0x4000304 = (data_ov112_020ec588.a << 15) | (*(volatile u16 *) 0x4000304 & ~0x8000);
    *(volatile u32 *) 0x4000018 = (data_ov112_020ec588.a << 24) & 0x1ff0000;
    *(volatile u32 *) 0x400001c = (data_ov112_020ec588.a << 24) & 0x1ff0000;
    *(volatile u32 *) 0x4001018 = (data_ov112_020ec588.a << 24) & 0x1ff0000;
    *(volatile u32 *) 0x400101c = (data_ov112_020ec588.a << 24) & 0x1ff0000;
    func_ov112_020e2754();
    func_ov112_020e26c0();
    func_ov112_020e9abc();
    func_ov112_020e9ba8();
    if (data_ov112_020ec588.b != 0) {
        if (data_ov112_020eedb0[1] != 0) {
            data_ov112_020eedb0[0] = 1;
        }
        if (data_ov000_02051548->f != 0) {
            data_ov112_020eedb0[0] = 1;
        }
        if (CallTrsForLoop() == 0) {
            data_ov112_020eedb0[0] = 1;
        }
    }
}
