#include "m2c.h"
s32 func_0200fa98(void);
void func_0200faac(s32);
u16 func_0200cc10(void *);
s32 OS_TryLockCartridge(u32);
void WaitByLoop(s32);

void CTRDGi_LockByProcessor(u32 a, u32 *b) {
    while (1) {
        b[1] = func_0200fa98();
        b[0] = func_0200cc10((void *) 0x27fffe8) & 0x40;
        if (b[0] != 0) {
            return;
        }
        if (OS_TryLockCartridge(a) == 0) {
            return;
        }
        func_0200faac(b[1]);
        WaitByLoop(1);
    }
}
