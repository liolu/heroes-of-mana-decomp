/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_0200fa98(void);
void func_0200faac(s32);
s32 NNS_SndArcSetCurrent(s32);
s32 NNS_SndArcGetFileAddress(u32);
void NNS_SndArcSetFileAddress(s32, s32);

void DisposeCallback(s32 a, s32 b, u32 c) {
    s32 prev;
    s32 irq;
    if (b == 0) {
        return;
    }
    irq  = func_0200fa98();
    prev = NNS_SndArcSetCurrent(b);
    if (a == NNS_SndArcGetFileAddress(c)) {
        NNS_SndArcSetFileAddress(c, 0);
    }
    NNS_SndArcSetCurrent(prev);
    func_0200faac(irq);
}
