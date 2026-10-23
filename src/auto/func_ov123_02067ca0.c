/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct G {
    u8 pad[0x2260];
    s32 st;
    u8 pad2[7];
    u8 b26b;
    u8 pad3[0x2280 - 0x226c];
    u16 h2280;
} G;

extern G *data_ov123_020df180;

u32 func_0200fa98(void);
void func_0200faac(u32);
void func_ov123_020676ac(s32);
u16 *WMi_GetStatusAddress(void);
void DC_InvalidateRange(void *, s32);
s32 func_02018490(void);
s32 WM_Disable(void *);
s32 WM_PowerOff(void *);
s32 WM_Reset(void *);
void func_ov123_020671dc(void);
void func_ov123_020664ec(void);

s32 func_ov123_02067ca0(void) {
    u32 irq;
    G *g;
    u16 *st;
    s32 r;

    irq = func_0200fa98();
    g   = data_ov123_020df180;
    if (g == 0) {
        func_0200faac(irq);
        return 1;
    }
    switch (g->st) {
        case 13:
            func_0200faac(irq);
            return 2;
        case 1:
            func_0200faac(irq);
            return 0;
        case 6:
            func_ov123_020676ac(0xd);
            data_ov123_020df180->h2280 = 9;
            func_0200faac(irq);
            return 3;
        default:
            func_0200faac(irq);
            return 1;
        case 3:
        case 9:
        case 12:
            if (g->b26b == 1) {
                func_ov123_020676ac(0xd);
                data_ov123_020df180->h2280 = 9;
                goto done3;
            }
            st = WMi_GetStatusAddress();
            DC_InvalidateRange(st, 2);
            switch (*st) {
                case 0:
                    r = func_02018490();
                    if (r == 0) {
                        func_ov123_020676ac(1);
                        data_ov123_020df180->h2280 = 0;
                        func_0200faac(irq);
                        return 0;
                    }
                    break;
                case 1:
                    r = WM_Disable(func_ov123_020671dc);
                    break;
                case 2:
                    r = WM_PowerOff(func_ov123_020671dc);
                    break;
                default:
                    data_ov123_020df180->b26b = 1;
                    r                         = WM_Reset(func_ov123_020664ec);
                    break;
            }
            switch (r) {
                case 2:
                    func_ov123_020676ac(0xd);
                    data_ov123_020df180->h2280 = 9;
                    goto done3;
                case 8:
                    func_0200faac(irq);
                    return 4;
                case 3:
                default:
                    func_ov123_020676ac(0xb);
                    func_0200faac(irq);
                    return 7;
            }
    }
done3:
    func_0200faac(irq);
    return 3;
}
