#include "m2c.h"

void CARDi_SetRomOp(u32 arg0, s32 arg1);

u32 CARDi_ReadRomIDCore(void) {
    u32 value;

    CARDi_SetRomOp(0xB8000000, 0);
    value                        = (*(u32 *) 0x027FFE60 & ~0x7000000) | 0xA7000000;
    *(volatile u32 *) 0x040001A4 = value & -0x2000;
    while ((*(volatile u32 *) 0x040001A4 & 0x800000) == 0) {
    }
    return *(u32 *) 0x04100010;
}
