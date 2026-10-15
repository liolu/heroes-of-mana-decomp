/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;

/* func_020047a4 from projets/blue-dragon-awakened-shadow/src/donor/func_020047a4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void *G2_GetBG2CharPtr(void) {
    s32 bgMode = (*(vu32 *) 0x04000000) & 7;
    u32 bgcnt  = (*(vu16 *) ((0x04000000) | 0xc));

    if (bgMode < 5 || !(bgcnt & 0x80)) {
        u32 offset = ((*(vu32 *) 0x04000000) & 0x7000000) >> 24;
        u32 block  = (bgcnt & 0x3c) >> 2;
        return (void *) (0x6000000 + offset * 0x10000 + block * 0x4000);
    }
    return 0;
}

/* func_020047f4 from projets/blue-dragon-awakened-shadow/src/donor/func_020047f4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void *G2S_GetBG2CharPtr(void) {
    s32 bgMode = (*(vu32 *) 0x04001000) & 7;
    u32 bgcnt  = (*(vu16 *) ((0x04001000) | 0xc));

    if (bgMode < 5 || !(bgcnt & 0x80)) {
        u32 block = (bgcnt & 0x3c) >> 2;
        return (void *) (0x6200000 + block * 0x4000);
    }
    return 0;
}

/* func_02004834 from projets/blue-dragon-awakened-shadow/src/donor/func_02004834.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void *G2_GetBG3CharPtr(void) {
    s32 bgMode = (*(vu32 *) 0x04000000) & 7;
    u32 bgcnt  = (*(vu16 *) ((0x04000000) | 0xe));

    if (bgMode < 3 || (bgMode < 6 && !(bgcnt & 0x80))) {
        u32 offset = ((*(vu32 *) 0x04000000) & 0x7000000) >> 24;
        u32 block  = (bgcnt & 0x3c) >> 2;
        return (void *) (0x6000000 + offset * 0x10000 + block * 0x4000);
    }
    return 0;
}

/* func_0200488c from projets/blue-dragon-awakened-shadow/src/donor/func_0200488c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void *G2S_GetBG3CharPtr(void) {
    s32 bgMode = (*(vu32 *) 0x04001000) & 7;
    u32 bgcnt  = (*(vu16 *) ((0x04001000) | 0xe));

    if (bgMode < 3 || (bgMode < 6 && !(bgcnt & 0x80))) {
        u32 block = (bgcnt & 0x3c) >> 2;
        return (void *) (0x6200000 + block * 0x4000);
    }
    return 0;
}
