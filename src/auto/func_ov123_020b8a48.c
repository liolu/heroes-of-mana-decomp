/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct G {
    u8 pad0[0xc];
    s32 fc;
    u8 pad1[0x3c - 0x10];
    s32 f3c;
    u8 pad2[0x51 - 0x40];
    s8 f51;
} G;

void func_ov123_020ae2a4(s32, s32, s32);
void func_ov123_020ae530(s32);
void func_ov123_020ae8b8(void);
void func_ov123_020b2398(s32 *, s32);
void func_ov123_020b2410(void *);
void func_ov123_020b76b8(void);
void func_ov123_020b7bc4(void);
void func_ov123_020b86b8(void);
void func_ov123_020b883c(void);
void func_ov123_020b88e8(void);
s8 func_ov123_020c27ac(G *);
s32 func_ov123_020c9c88(s32, s32);
G *func_ov123_020ca4ec(s32, s32);
s32 func_ov123_020cb6ac(s32, void *, s32, s32);
extern s8 data_ov123_020e464c;
extern s16 data_ov123_020e4650;
extern G *data_ov123_020e4654;
extern void func_ov123_020b770c(void);
extern void func_ov123_020b865c(void);

void func_ov123_020b8a48(void) {
    s32 sp0;
    data_ov123_020e4654 = func_ov123_020ca4ec(0x5c, 4);
    func_ov123_020b2398(&sp0, 0);
    if (sp0 == 0) {
        data_ov123_020e464c = 0;
        data_ov123_020e4650 = 0;
    }
    data_ov123_020e4654->f51 = func_ov123_020c27ac(data_ov123_020e4654);
    func_ov123_020b88e8();
    func_ov123_020ae8b8();
    func_ov123_020ae2a4(0x34, -1, 0);
    func_ov123_020ae530(2);
    func_ov123_020b883c();
    func_ov123_020b86b8();
    data_ov123_020e4654->fc  = func_ov123_020c9c88(0, 0);
    data_ov123_020e4654->f3c = func_ov123_020cb6ac(1, func_ov123_020b770c, 0, 0x6e);
    func_ov123_020b7bc4();
    func_ov123_020b76b8();
    func_ov123_020b2410(func_ov123_020b865c);
}
