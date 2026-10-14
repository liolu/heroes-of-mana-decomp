/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02002c24 from projets/blue-dragon-awakened-shadow/src/donor/func_02002c24.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long long s64;
typedef int s32;
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;
extern s32 func_0200902c(const Vec *a, const Vec *b);
s32 func_0200902c(const Vec *a, const Vec *b) {
    return (s32) (((s64) a->x * b->x + (s64) a->y * b->y + (s64) a->z * b->z + (1 << 11)) >> 12);
}
