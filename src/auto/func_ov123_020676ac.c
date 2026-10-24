/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct S {
    u8 pad[0x2260];
    s32 st;
    u8 pad2[0x68];
    u8 alarm[1];
} S;
extern S *data_ov123_020df180;
extern s32 func_0200fa98(void);
extern void func_0200faac(s32);
extern void func_0200f8b4(void *);
extern void OS_SetAlarm(void *, s32, s32, void *, s32);
extern void func_ov123_02067614(void);

void func_ov123_020676ac(s32 a) {
    s32 irq = func_0200fa98();
    if (data_ov123_020df180->st == 9 && a != 9) {
        func_0200f8b4(data_ov123_020df180->alarm);
    }
    if (data_ov123_020df180->st != 0xB) {
        data_ov123_020df180->st = a;
    }
    if (a == 9) {
        OS_SetAlarm(data_ov123_020df180->alarm, 0x022F5341, 0, func_ov123_02067614, 0);
    }
    func_0200faac(irq);
}
