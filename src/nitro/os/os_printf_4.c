/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned long u32;
typedef signed char s8;
typedef signed long s32;
extern s32 OS_SPrintf(s8 *buffer, const s8 *format, ...);
extern s32 OS_VSPrintf(s8 *buffer, const s8 *format, void *args);
extern s32 OS_VSPrintf(s8 *buffer, const s8 *format, void *args);

/* func_020068c0 from projets/blue-dragon-awakened-shadow/src/donor/func_020068c0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
s32 OS_SPrintf(s8 *buffer, const s8 *format, ...) {
    void *args = (void *) ((u32 *) ((u32) &format & ~0x3) + 1);
    return OS_VSPrintf(buffer, format, args);
}
