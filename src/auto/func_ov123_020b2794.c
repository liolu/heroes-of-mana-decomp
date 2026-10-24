/* compiler: 1.2/sp3 */
#include "m2c.h"

void FS_Init(s32);
void GX_DispOff();
void GX_VBlankIntr(s32);
void RTC_Init(void);
void TP_Init(void);
void func_0200940c(void);
s32 func_0200f498(void);
s32 func_0200f68c(void);
void func_0200fddc(void);
void func_ov123_020a5d64(void);
void func_ov123_020c8ad0(void);
void func_ov123_020c9858(void);
void func_ov123_020ca49c(s32 *);
s32 func_ov123_020ca510(s32, s32);
void func_ov123_020ca588(s32);
void func_ov123_020cac00(void);
void func_ov123_020cacf4(void);
void func_ov123_020cb4cc(void);
void func_ov123_020cb7dc(void);
extern s32 data_ov123_020e45d4;

void func_ov123_020b2794(void) {
    s32 sp0;
    u16 ime                      = *(volatile u16 *) 0x04000208;
    *(volatile u16 *) 0x04000208 = 0;
    GX_DispOff(0, ime);
    *(volatile s32 *) 0x04001000 &= ~0x10000;
    if (func_0200f498() == 0) {
        func_0200fddc();
    }
    if (func_0200f68c() == 0) {
        func_0200fddc();
    }
    GX_VBlankIntr(0);
    func_0200940c();
    FS_Init(-1);
    TP_Init();
    RTC_Init();
    GX_DispOff();
    *(volatile s32 *) 0x04001000 &= ~0x10000;
    func_ov123_020cb4cc();
    func_ov123_020ca588(data_ov123_020e45d4);
    func_ov123_020cacf4();
    func_ov123_020cb7dc();
    func_ov123_020c8ad0();
    func_ov123_020cac00();
    func_ov123_020c9858();
    sp0 = func_ov123_020ca510(0x700, 0x20);
    func_ov123_020a5d64();
    func_ov123_020ca49c(&sp0);
}
