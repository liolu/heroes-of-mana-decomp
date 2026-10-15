/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
#include "m2c.h"

M2C_UNK FX_GetDivResult();

M2C_UNK FX_DivAsync();
s32 FX_GetSqrtResult();
typedef unsigned long long u64;
typedef unsigned short u16;
typedef long long s64;
typedef volatile u16 vu16;
extern s64 FX_GetDivResultFx64c(void);

void FX_Div(void) {
    FX_DivAsync();
    FX_GetDivResult();
}

s32 FX_Sqrt(s32 arg0) {
    if (arg0 <= 0) {
        return 0;
    }
    M2C_FIELD((void *) 0x040002B0, s16 *, 0)   = 1;
    M2C_FIELD((void *) 0x040002B0, s32 *, 8)   = 0;
    M2C_FIELD((void *) 0x040002B0, s32 *, 0xC) = arg0;
    return FX_GetSqrtResult();
}

/* func_02002a64 from projets/blue-dragon-awakened-shadow/src/donor/func_02002a64.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
s64 FX_GetDivResultFx64c(void) {
    while ((*(vu16 *) 0x04000280) & 0x8000) {
    }
    return (*(u64 *) 0x040002A0);
}
