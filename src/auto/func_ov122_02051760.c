#include "m2c.h"

void BGM_Fade(s32);
void GX_DispOn(void);
void GX_SetBankForLCDC(s32);
void OS_DisableIrqMask(s32);
void OS_EnableIrqMask(s32);
void OS_SetIrqFunction(s32, void *);
void TP_RequestAutoSamplingStopAsync(void);
void TP_WaitBusy(s32);
void VBlankIntrWaitInGame(void);
void func_02000f44(s32);
void func_02000f78(s32);
void func_02015374(s32, s32, s32, s32);
void func_020158e0(s32);
void func_ov122_020516cc(void);
void func_ov122_020516f4(void);
void func_ov122_02051704(void);
void func_ov122_020529c4(void);
void func_ov122_020556bc(s32, s32, s32);
void func_ov122_02055780(s32, s32, s32);
void func_ov122_02055af0(void);
void func_ov122_0205ce60(s32, s32);
void func_ov122_0205dafc(s32, s32);
s32 func_ov123_020d2e24(void);
void func_ov123_020d2ec4(void);
void func_ov123_020d2f74(void);
extern u8 VBlankIntr[];
extern s32 data_ov000_0205154c;
typedef struct S {
    u8 pad[0xDE0];
    s32 fDE0;
    u8 pad2[0xE34 - 0xDE4];
    s32 fE34;
} S;
extern S data_ov122_02065604;

void func_ov122_02051760(void) {
    s32 temp_r0;
    s32 temp_r4;
    u16 old;

    temp_r4 = *(volatile u16 *) 0x04000304 & 0x20E;
    func_02000f44(0x13);
    func_ov122_020516cc();
    temp_r0 = func_ov123_020d2e24();
    switch (temp_r0) {
        case 3:
            func_ov122_0205dafc(0, 3);
            break;
        case 4:
            data_ov122_02065604.fDE0 &= ~0x80;
            data_ov122_02065604.fE34 = 0x3C;
            func_ov122_0205ce60(0x100000, 0x80000000);
            for (;;) {
                func_ov122_02055af0();
            }
    }
    BGM_Fade(1);
    func_ov122_020516f4();
    func_ov122_020529c4();
    func_ov122_02051704();
    func_ov122_020556bc(-0x10, 3, 1);
    TP_RequestAutoSamplingStopAsync();
    TP_WaitBusy(4);
    func_020158e0(4);
    OS_DisableIrqMask(1);
    func_ov123_020d2f74();
    OS_SetIrqFunction(1, VBlankIntr);
    OS_EnableIrqMask(1);
    OS_EnableIrqMask(0x40000);
    old                          = *(volatile u16 *) 0x04000208;
    *(volatile u16 *) 0x04000208 = 1;
    GX_SetBankForLCDC(0x1FF);
    func_ov122_02051704();
    VBlankIntrWaitInGame();
    GX_DispOn();
    *(volatile u32 *) 0x04001000 |= 0x10000;
    *(volatile u16 *) 0x04000304 = (*(volatile u16 *) 0x04000304 & 0xFFFFFDF1) | temp_r4;
    func_ov122_02055780(-0x10, 3, 1);
    func_ov122_020529c4();
    func_02015374(0, 4, data_ov000_0205154c, 5);
    TP_WaitBusy(2);
    func_020158e0(2);
    func_ov123_020d2ec4();
    func_02000f78(0x13);
    BGM_Fade(0);
}
