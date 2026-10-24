/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern void GX_SetBankForSubBG(s32);
extern void GX_SetBankForSubOBJ(s32);
extern void func_020096b0(s32);
extern void GX_SetBankForSubBGExtPltt(s32);
extern void InitOfAreaMap(void);
extern void AreaMapRoll(void);
extern void func_0200acd8(s32 *, s32, s32, s32, s32);
extern u8 *data_ov000_02051548;
extern u8 *data_ov000_0205154c;

void BengineScreenSetUp(void) {
    GX_SetBankForSubBG(4);
    GX_SetBankForSubOBJ(8);
    *(volatile s32 *) 0x04001000 = (*(volatile s32 *) 0x04001000 & 0xFFCFFFEF) | 0x200010;
    func_020096b0(3);
    *(u16 *) (data_ov000_0205154c + 0x604) = 0x1c;
    *(volatile s32 *) 0x04001000 = (*(volatile s32 *) 0x04001000 & ~0x1F00) | (*(u16 *) (data_ov000_0205154c + 0x604) << 8);
    GX_SetBankForSubBGExtPltt(0x80);
    *(s32 *) (data_ov000_02051548 + 0x480)            = 0x06204000;
    *(s32 *) (data_ov000_02051548 + 0x484)            = 0x06210000;
    *(s32 *) (data_ov000_02051548 + 0x488)            = 0x05000400;
    *(volatile u16 *) 0x0400100E                      = (*(volatile u16 *) 0x0400100E & 0x43) | 0x4810;
    *(volatile u16 *) 0x0400100C                      = (*(volatile u16 *) 0x0400100C & 0x43) | 0xA08;
    **(volatile s16 **) (data_ov000_02051548 + 0x488) = 0x3000;
    *(volatile u16 *) 0x0400100C                      = (*(volatile u16 *) 0x0400100C & ~3) | 2;
    *(volatile u16 *) 0x0400100E                      = (*(volatile u16 *) 0x0400100E & ~3) | 3;
    InitOfAreaMap();
    AreaMapRoll();
    *(volatile s32 *) 0x04001000 = *(volatile s32 *) 0x04001000 & ~0xE000;
    func_0200acd8((s32 *) 0x04001050, 4, 8, 0x10, 8);
}
