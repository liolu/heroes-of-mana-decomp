/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020068c0 from projets/blue-dragon-awakened-shadow/src/donor/func_020068c0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef signed char s8;
typedef signed long s32;
extern s32 func_02024ad0(s8 *buffer, const s8 *format, ...);
extern s32 func_02024a7c(s8 *buffer, const s8 *format, void *args);
s32 func_02024ad0(s8 *buffer, const s8 *format, ...) {
    void *args = (void *) ((u32 *) ((u32) &format & ~0x3) + 1);
    return func_02024a7c(buffer, format, args);
}
extern s32 func_02024a7c(s8 *buffer, const s8 *format, void *args);
