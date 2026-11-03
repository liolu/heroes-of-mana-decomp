/* compiler: 1.2/sp3 -O1 */
/* profile "1.2/sp3 -O1" */
#include "m2c.h"

extern void VBlankIntrWaitInGame(void);
extern void MIi_CpuCopy16(void *src, void *dst, u32 size);
extern void MIi_CpuClearFast(u32 value, void *dst, u32 size);

void func_ov117_020e5ee0(void) {
    u32 base;
    void *d;
    VBlankIntrWaitInGame();
    *(u32 *) 0x4000064 = 0x80300000;
    VBlankIntrWaitInGame();
    base = 0x6400000;
    MIi_CpuCopy16((void *) 0x6802000, (void *) (base + 0x10000), 0x8000);
    MIi_CpuCopy16((void *) 0x6814000, (void *) (base + 0x18000), 0x8000);
    d = (void *) (base + 0x13000);
    MIi_CpuClearFast(0, d, 0x1000);
    d = (void *) (base + 0x18000);
    MIi_CpuClearFast(0, d, 0x3000);
}
