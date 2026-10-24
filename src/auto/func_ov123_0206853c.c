/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x2260];
    s32 state;
    u8 pad2[0x2280 - 0x2264];
    s16 sub;
} Ctx;

s32 WM_PowerOff(void (*)(void));
s32 func_0200fa98(void);
void func_0200faac(s32);
void func_ov123_020676ac(s32);
extern Ctx *data_ov123_020df180;
extern void func_ov123_020671dc(void);

s32 func_ov123_0206853c(void) {
    s32 irq = func_0200fa98();
    if (data_ov123_020df180 == NULL) {
        func_0200faac(irq);
        return 1;
    }
    switch (data_ov123_020df180->state) {
        case 4:
            func_0200faac(irq);
            return 2;
        case 1:
            func_0200faac(irq);
            return 0;
        default:
            func_0200faac(irq);
            return 1;
        case 3:
            switch (WM_PowerOff(func_ov123_020671dc)) {
                case 2:
                    func_ov123_020676ac(4);
                    data_ov123_020df180->sub = 2;
                    break;
                case 8:
                    func_0200faac(irq);
                    return 4;
                default:
                case 3:
                    func_ov123_020676ac(0xB);
                    func_0200faac(irq);
                    return 7;
            }
            func_0200faac(irq);
            return 3;
    }
}
