/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 data_ov003_020b6440[];
extern void OS_GetMacAddress(u8 *);
extern void WH_ChangeSysState(s32);
extern s32 WH_StateInMeasureChannel(s32);
extern void WH_SetError(s32);
typedef volatile u32 vu32;
static inline u32 OS_GetVBlankCount(void) {
    return *(vu32 *) 0x27FFC3C;
}
s32 WH_StartMeasureChannel(void) {
    u16 mac[3];
    s32 r;
    OS_GetMacAddress((u8 *) mac);
    *(u32 *) (data_ov003_020b6440 + 0x2C) = (u32) (mac[0] + OS_GetVBlankCount() + mac[1] + mac[2]) * 69069 + 12345;
    *(u16 *) (data_ov003_020b6440 + 8)    = 0;
    *(u16 *) (data_ov003_020b6440 + 2)    = 0x65;
    WH_ChangeSysState(3);
    r = WH_StateInMeasureChannel(1);
    if (r == 0x18) {
        WH_SetError(0x18);
        WH_ChangeSysState(9);
        return 0;
    }
    if (r == 2) {
        return 1;
    }
    WH_SetError(r);
    WH_ChangeSysState(9);
    return 0;
}
