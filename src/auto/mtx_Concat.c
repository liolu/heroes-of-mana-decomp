/* compiler: 2.0/sp1p5 -profile */
typedef long long s64;
typedef int s32;
typedef struct {
    s32 v[12];
} M12;
static inline s32 M(s32 x, s32 y) {
    return (s32) (((s64) x * y) >> 12);
}
void mtx_Concat(s32 *a, s32 *b, s32 *ab) {
    M12 tmp;
    s32 *m;
    if (ab == a || ab == b) {
        m = &tmp.v[0];
    } else {
        m = ab;
    }
    m[0]  = M(a[0], b[0]) + M(a[3], b[1]) + M(a[6], b[2]);
    m[1]  = M(a[1], b[0]) + M(a[4], b[1]) + M(a[7], b[2]);
    m[2]  = M(a[2], b[0]) + M(a[5], b[1]) + M(a[8], b[2]);
    m[3]  = M(a[0], b[3]) + M(a[3], b[4]) + M(a[6], b[5]);
    m[4]  = M(a[1], b[3]) + M(a[4], b[4]) + M(a[7], b[5]);
    m[5]  = M(a[2], b[3]) + M(a[5], b[4]) + M(a[8], b[5]);
    m[6]  = M(a[0], b[6]) + M(a[3], b[7]) + M(a[6], b[8]);
    m[7]  = M(a[1], b[6]) + M(a[4], b[7]) + M(a[7], b[8]);
    m[8]  = M(a[2], b[6]) + M(a[5], b[7]) + M(a[8], b[8]);
    m[9]  = a[9] + (M(a[0], b[9]) + M(a[3], b[10]) + M(a[6], b[11]));
    m[10] = a[10] + (M(a[1], b[9]) + M(a[4], b[10]) + M(a[7], b[11]));
    m[11] = a[11] + (M(a[2], b[9]) + M(a[5], b[10]) + M(a[8], b[11]));
    if (m == &tmp.v[0]) {
        *(M12 *) ab = tmp;
    }
}
