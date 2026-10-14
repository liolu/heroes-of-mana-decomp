/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02002ce4 from projets/blue-dragon-awakened-shadow/src/donor/func_02002ce4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef long long s64;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;
extern s32 func_020090ec(const Vec *v);
s32 func_020090ec(const Vec *v) {
    s64 t = (s64) v->x * v->x;
    t += (s64) v->y * v->y;
    t += (s64) v->z * v->z;
    t <<= 2;

    (*(vu16 *) 0x040002B0) = 1;
    (*(u64 *) 0x040002B8)  = t;

    while ((*(vu16 *) 0x040002B0) & 0x8000) {
    }
    return ((s32) (*(vu32 *) 0x040002B4) + 1) >> 1;
}
