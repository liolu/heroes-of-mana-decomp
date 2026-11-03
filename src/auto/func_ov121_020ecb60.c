#include "m2c.h"
typedef struct {
    s32 a;
    u8 pad[0xa44];
    u32 lo : 27;
    u32 flag : 1;
    u32 hi : 4;
} D;
extern D data_ov121_020f6d60;
extern void func_ov121_020eb6d0(s32, s32, s32, s32, s32, s32);
extern void func_ov121_020eb5a4(s32, s32, s32, s32, s32, s32);
extern void TrsModeSet(s32, s32);
extern void func_ov121_020ec77c(void);
extern s32 CallTrsForLoop(void);
void func_ov121_020ecb60(void) {
    s32 z;
    data_ov121_020f6d60.a = 0x280;
    z                     = 0;
    func_ov121_020eb6d0(2, 8, 0x1c, 6, z, z);
    func_ov121_020eb5a4(2, 8, 0x3d, z, z, z);
    TrsModeSet(7, z);
    while (1) {
        data_ov121_020f6d60.flag = 0;
        func_ov121_020ec77c();
        CallTrsForLoop();
    }
}
