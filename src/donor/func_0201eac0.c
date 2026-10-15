/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MBi_GetBeaconPeriodDispersion from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_wm_base.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u32 vu32;
static inline vu32 OS_GetVBlankCount(void) {
    return *(vu32 *) (0x02000000 + 0x007ffc3c);
}
extern void OS_GetMacAddress(u8 *macAddress);
u32 func_0201eac0(void) {
    u8 mac[6];
    u32 ret;
    s32 i;

    OS_GetMacAddress(mac);

    for (i = 0, ret = 0; i < 6; i++) {
        ret += mac[i];
    }

    ret += OS_GetVBlankCount();
    ret *= 7;

    return (ret % 20);
}
