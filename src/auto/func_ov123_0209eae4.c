/* compiler: 1.2/sp3 */
#include "m2c.h"
u8 *func_ov123_0209d368(void);
u64 func_0200f510(void);
s32 func_ov123_0209ab40(void);
s32 func_ov123_0209fbc4(s32);
void func_ov123_0209ed70(s32, s32);
void func_ov123_0209efa0(void);
void func_ov123_0209f158(s32);
s32 func_ov123_0209ee60(s32);
s32 func_ov123_0209fc90(s32);
void func_ov123_0209f47c(s32);

s32 func_ov123_0209eae4(void) {
    u64 t;
    s32 i;
    u8 *p;
    if (*(s32 *) (func_ov123_0209d368() + 0x1A0) == 9 || *(s32 *) (func_ov123_0209d368() + 0x1A0) == 16 ||
        *(s32 *) (func_ov123_0209d368() + 0x1A0) == 17) {
        u64 now = func_0200f510();
        u8 *g   = func_ov123_0209d368();
        t       = ((now - *(u64 *) (g + 0x1E0)) << 6) / 0x82EA;
    } else {
        return 1;
    }
    switch (*(s32 *) (func_ov123_0209d368() + 0x1A0)) {
        case 9:
            if (t > 0x1770) {
                if (func_ov123_0209ab40() == 5 && *(u8 *) (func_ov123_0209d368() + 0x1AD) >= 5) {
                    if (func_ov123_0209fbc4(*(s32 *) (func_ov123_0209d368() + 0xF4)) == 0) {
                        return 0;
                    }
                } else {
                    u8 *g    = func_ov123_0209d368();
                    g[0x1AD] = g[0x1AD] + 1;
                    func_ov123_0209ed70(func_ov123_0209d368()[0x2D0], 3);
                }
            }
            break;
        case 16:
            if (t > 0x1770) {
                u8 *g    = func_ov123_0209d368();
                g[0x1AB] = g[0x1AB] + 1;
                if (func_ov123_0209d368()[0x1AB] > 5) {
                    if (func_ov123_0209d368()[0x15] == 0 || func_ov123_0209d368()[0x15] == 1) {
                        func_ov123_0209efa0();
                        func_ov123_0209f158(1);
                    } else {
                        if (func_ov123_0209ee60(*(s32 *) (func_ov123_0209d368() + 0x1D4)) == 0) {
                            return 0;
                        }
                        if (func_ov123_0209d368()[0xD] != 0) {
                            u8 *h;
                            func_ov123_0209d368()[0x1AB] = 0;
                            h                            = func_ov123_0209d368();
                            *(u64 *) (h + 0x1E0)         = func_0200f510();
                        } else {
                            if (func_ov123_0209fc90(*(s32 *) (func_ov123_0209d368() + 0x20C)) == 0) {
                                return 0;
                            }
                        }
                    }
                } else {
                    for (i = 1; i <= func_ov123_0209d368()[0xD]; i++) {
                        u8 *q = func_ov123_0209d368();
                        if (((1 << *(u8 *) (func_ov123_0209d368() + (i + 0x2D0))) & *(s32 *) (q + 0x1D4)) == 0) {
                            func_ov123_0209ed70(*(u8 *) (func_ov123_0209d368() + (i + 0x2D0)), 2);
                        }
                    }
                }
            }
            break;
        case 17:
            if (t > *(u16 *) (func_ov123_0209d368() + 0x1B0)) {
                func_ov123_0209f47c(4);
            }
            break;
    }
    return 1;
}
