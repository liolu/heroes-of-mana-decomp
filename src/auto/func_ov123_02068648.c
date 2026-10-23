/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x2260];
    s32 mode;
    u8 pad2264[8];
    u32 w226c;
    u8 pad2270[0x10];
    u16 h2280;
} Gs;

extern Gs *data_ov123_020df180;
s32 func_0200fa98(void);
void func_0200faac(s32);
void func_ov123_02067a7c(void *, s32);
s32 WM_Init(void *, s32);
void func_ov123_020676ac(s32);
u16 WM_GetAllowedChannel(void);
s32 func_02018490(void);
s32 WM_SetIndCallback(void (*)(void));
s32 WM_Enable(void (*)(void));
void func_ov123_020674e8(void);
void func_ov123_020671dc(void);

s32 func_ov123_02068648(void *a, s32 b) {
    s32 irq;
    irq = func_0200fa98();
    if (data_ov123_020df180 == NULL) {
        func_0200faac(irq);
        return 1;
    }
    switch (data_ov123_020df180->mode) {
        case 1:
            func_ov123_02067a7c(a, b);
            break;
        case 2:
            func_0200faac(irq);
            return 2;
        case 3:
            func_0200faac(irq);
            return 0;
        default:
            func_0200faac(irq);
            return 1;
    }
    switch (WM_Init(data_ov123_020df180, (u16) data_ov123_020df180->w226c)) {
        case 3:
            func_ov123_020676ac(0xB);
            func_0200faac(irq);
            return 7;
        case 4:
            func_0200faac(irq);
            return 5;
        case 1:
        case 2:
        case 5:
        case 6:
        default:
            func_ov123_020676ac(0xB);
            func_0200faac(irq);
            return 7;
        case 0:
            break;
    }
    if (WM_GetAllowedChannel() == 0) {
        if (func_02018490() != 0) {
            func_ov123_020676ac(0xB);
            func_0200faac(irq);
            return 7;
        }
        func_0200faac(irq);
        return 5;
    }
    if (WM_SetIndCallback(func_ov123_020674e8) != 0) {
        func_ov123_020676ac(0xB);
        func_0200faac(irq);
        return 7;
    }
    switch (WM_Enable(func_ov123_020671dc)) {
        case 2:
            func_ov123_020676ac(2);
            data_ov123_020df180->h2280 = 1;
            break;
        case 8:
            func_ov123_020676ac(0xC);
            func_0200faac(irq);
            return 1;
        case 3:
        default:
            func_ov123_020676ac(0xB);
            func_0200faac(irq);
            return 7;
    }
    func_0200faac(irq);
    return 3;
}
