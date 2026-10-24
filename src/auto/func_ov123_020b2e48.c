/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    s32 f0, f4, f8, fc, f10, f14;
    u8 f18;
} S;
void func_0200fddc(void);
u8 func_ov123_020b22f4(void);
s32 func_ov123_020b29dc(s32, s32);
s32 func_ov123_020c84e0(void);
void func_ov123_020c86e0(void *, S *);
u8 *func_ov123_020ca510(s32, s32);
s32 func_ov123_020cb6ac(s32, void *, s32, s32);
extern S data_ov123_020ddab0;
extern u8 *data_ov123_020e45f4;
extern s32 data_ov123_020e45fc;
extern u8 func_ov123_020b2ae4;
void func_ov123_020b2e48(s32 arg0) {
    S s;
    u8 *r;

    r                            = func_ov123_020ca510(0x1E2A4, 0x20);
    data_ov123_020e45f4          = r;
    *(s32 *) (r + 0x1E298)       = arg0;
    data_ov123_020e45f4[0x1E2A0] = 0;
    data_ov123_020e45f4[0x1E2A1] = 0;
    s                            = data_ov123_020ddab0;
    s.f4                         = func_ov123_020b29dc(data_ov123_020e45fc, 0);
    s.f8                         = func_ov123_020b29dc(data_ov123_020e45fc, 1);
    s.f18                        = func_ov123_020b22f4();
    func_ov123_020c86e0(data_ov123_020e45f4, &s);
    if (func_ov123_020c84e0() == 0) {
        func_0200fddc();
    }
    *(s32 *) (data_ov123_020e45f4 + 0x1E29C) = func_ov123_020cb6ac(0, &func_ov123_020b2ae4, 0, 0x78);
}
