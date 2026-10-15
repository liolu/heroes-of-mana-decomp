/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern u32 OS_EnableIrqMask(u32 mask);

/* func_0200644c from projets/blue-dragon-awakened-shadow/src/donor/func_0200644c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
static inline BOOL OS_DisableIME(void) {
    u16 prev               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = 0;
    return (BOOL) prev;
}

static inline BOOL OS_RestoreIME(BOOL enable) {
    u16 prev               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = (vu16) enable;
    return (BOOL) prev;
}

u32 OS_EnableIrqMask(u32 mask) {
    BOOL ime               = OS_DisableIME();
    u32 prev               = (*(vu32 *) 0x04000210);
    (*(vu32 *) 0x04000210) = prev | mask;
    OS_RestoreIME(ime);
    return prev;
}
