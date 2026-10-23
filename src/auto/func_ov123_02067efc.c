/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 WM_EndDCF(void *);
u32 func_0200fa98(void);
void func_0200faac(u32);
void func_ov123_020676ac(s32);
extern u8 *data_ov123_020df180;
extern u8 func_ov123_02066850[];

s32 func_ov123_02067efc(void) {
    s32 r;
    u32 irq;
    irq = func_0200fa98();
    if (data_ov123_020df180 == NULL) {
        func_0200faac(irq);
        return 1;
    }
    switch (*(s32 *) (data_ov123_020df180 + 0x2260)) {
        case 10:
            func_0200faac(irq);
            return 2;
        case 3:
            func_0200faac(irq);
            return 0;
        default:
            func_0200faac(irq);
            return 1;
        case 9:
            if (*(u8 *) (data_ov123_020df180 + 0x226b) == 1) {
                func_ov123_020676ac(0xa);
                *(s16 *) (data_ov123_020df180 + 0x2280) = 6;
                goto end3;
            }
            r = WM_EndDCF(func_ov123_02066850);
            switch (r) {
                case 2:
                    func_ov123_020676ac(0xa);
                    *(s16 *) (data_ov123_020df180 + 0x2280) = 6;
                    goto end3;
                case 8:
                    func_0200faac(irq);
                    return 4;
                default:
                case 3:
                    func_ov123_020676ac(0xb);
                    func_0200faac(irq);
                    return 7;
            }
        end3:
            func_0200faac(irq);
            return 3;
    }
}
