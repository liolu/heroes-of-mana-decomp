/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef long long s64;
typedef int s32;
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;
extern s32 VEC_DotProduct(const Vec *a, const Vec *b);
extern void VEC_CrossProduct(const Vec *a, const Vec *b, Vec *axb);
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
extern s32 VEC_Mag(const Vec *v);
typedef volatile u64 vu64;
extern void VEC_Normalize(const Vec *src, Vec *dst);

/* func_02002c24 from projets/blue-dragon-awakened-shadow/src/donor/func_02002c24.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
s32 VEC_DotProduct(const Vec *a, const Vec *b) {
    return (s32) (((s64) a->x * b->x + (s64) a->y * b->y + (s64) a->z * b->z + (1 << 11)) >> 12);
}

/* func_02002c60 from projets/blue-dragon-awakened-shadow/src/donor/func_02002c60.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void VEC_CrossProduct(const Vec *a, const Vec *b, Vec *axb) {
    s32 x = (s32) (((s64) a->y * b->z - (s64) a->z * b->y + (1 << 11)) >> 12);
    s32 y = (s32) (((s64) a->z * b->x - (s64) a->x * b->z + (1 << 11)) >> 12);
    s32 z = (s32) (((s64) a->x * b->y - (s64) a->y * b->x + (1 << 11)) >> 12);

    axb->x = x;
    axb->y = y;
    axb->z = z;
}

/* func_02002ce4 from projets/blue-dragon-awakened-shadow/src/donor/func_02002ce4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
s32 VEC_Mag(const Vec *v) {
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

/* func_02002d44 from projets/blue-dragon-awakened-shadow/src/donor/func_02002d44.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void VEC_Normalize(const Vec *src, Vec *dst) {
    s64 t = (s64) src->x * src->x;
    s32 sqrt;
    s64 div;

    t += (s64) src->y * src->y;
    t += (s64) src->z * src->z;

    (*(vu16 *) 0x04000280) = 2;
    (*(vu64 *) 0x04000290) = 1LL << 56;
    (*(vu64 *) 0x04000298) = t;

    (*(vu16 *) 0x040002B0) = 1;
    (*(u64 *) 0x040002B8)  = t << 2;

    while ((*(vu16 *) 0x040002B0) & 0x8000) {
    }
    sqrt = (s32) (*(vu32 *) 0x040002B4);

    while ((*(vu16 *) 0x04000280) & 0x8000) {
    }
    div = (s64) (*(u64 *) 0x040002A0);

    div *= sqrt;

    dst->x = (s32) ((div * src->x + (1LL << 44)) >> 45);
    dst->y = (s32) ((div * src->y + (1LL << 44)) >> 45);
    dst->z = (s32) ((div * src->z + (1LL << 44)) >> 45);
}
