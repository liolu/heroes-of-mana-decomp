/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned long long u64;
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
extern s32 FX_GetDivResult(void);
typedef unsigned int u32;
typedef volatile u64 vu64;
extern void FX_InvAsync(s32 denom);

/* func_02002a88 from projets/blue-dragon-awakened-shadow/src/donor/func_02002a88.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
s32 FX_GetDivResult(void) {
    while ((*(vu16 *) 0x04000280) & 0x8000) {
    }
    return (s32) (((*(u64 *) 0x040002A0) + (1 << 19)) >> 20);
}

/* func_02002ac0 from projets/blue-dragon-awakened-shadow/src/donor/func_02002ac0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void FX_InvAsync(s32 denom) {
    (*(vu16 *) 0x04000280) = 1;
    (*(vu64 *) 0x04000290) = 0x1000LL << 32;
    (*(vu64 *) 0x04000298) = (u32) denom;
}
