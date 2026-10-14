/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02002b80 from projets/blue-dragon-awakened-shadow/src/donor/func_02002b80.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef vu16 REGType16v;
typedef vu32 REGType32v;
typedef vu64 REGType64v;
typedef s32 fx32;
extern fx32 func_02008ff0(fx32 num, fx32 mod);
#pragma thumb off
#pragma thumb off
fx32 func_02008ff0(fx32 num, fx32 mod) {
    (*(REGType16v *) 0x4000280)                  = 0x0;
    *(REGType32v *) &(*(REGType64v *) 0x4000290) = (u32) num;
    (*(REGType64v *) 0x4000298)                  = (u32) mod;
    while ((*(REGType16v *) 0x4000280) & 0x8000) {
    }
    return (fx32) (*(REGType32v *) &(*(REGType64v *) 0x40002A8));
}
