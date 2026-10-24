/* MTX_Inverse43 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fx/fx_mtx43.c (license: none), reused by
 * tools/donor_match.py */
typedef long long s64;
typedef int s32;
typedef struct {
    s32 _00, _01, _02;
    s32 _10, _11, _12;
    s32 _20, _21, _22;
    s32 _30, _31, _32;
} Mtx43;
extern void FX_InvAsync(s32);
extern s32 FX_GetDivResult(void);
extern void MI_Copy48B(const void *pSrc, void *pDest);
s32 MTX_Inverse43(const Mtx43 *src, Mtx43 *dst) {
    Mtx43 tmp;
    Mtx43 *m;
    s32 det0, det1, det2;
    s32 det;
    s32 t01, t02, t11, t12;

    if (src == dst) {
        m = &tmp;
    } else {
        m = dst;
    }

    det0 = (s32) (((s64) src->_11 * src->_22 - (s64) src->_12 * src->_21 + (s64) (0x1000 >> 1)) >> 12);
    det1 = (s32) (((s64) src->_10 * src->_22 - (s64) src->_12 * src->_20 + (s64) (0x1000 >> 1)) >> 12);
    det2 = (s32) (((s64) src->_10 * src->_21 - (s64) src->_11 * src->_20 + (s64) (0x1000 >> 1)) >> 12);
    det  = (s32) (((s64) src->_00 * det0 - (s64) src->_01 * det1 + (s64) src->_02 * det2 + (s64) (0x1000 >> 1)) >> 12);

    if (det == 0) {
        return -1;
    }

    FX_InvAsync(det);

    t01 = (s32) (((s64) src->_01 * src->_22 - (s64) src->_21 * src->_02) >> 12);
    t02 = (s32) (((s64) src->_01 * src->_12 - (s64) src->_11 * src->_02) >> 12);
    t11 = (s32) (((s64) src->_00 * src->_22 - (s64) src->_20 * src->_02) >> 12);
    t12 = (s32) (((s64) src->_00 * src->_12 - (s64) src->_10 * src->_02) >> 12);

    det = FX_GetDivResult();

    m->_00 = (s32) (((s64) det * det0) >> 12);
    m->_01 = -(s32) (((s64) det * t01) >> 12);
    m->_02 = (s32) (((s64) det * t02) >> 12);

    m->_10 = -(s32) (((s64) det * det1) >> 12);
    m->_11 = (s32) (((s64) det * t11) >> 12);
    m->_12 = -(s32) (((s64) det * t12) >> 12);

    m->_20 = (s32) (((s64) det * det2) >> 12);
    m->_21 = -(s32) (((s64) det * (s32) (((s64) src->_00 * src->_21 - (s64) src->_20 * src->_01) >> 12)) >> 12);
    m->_22 = (s32) (((s64) det * (s32) (((s64) src->_00 * src->_11 - (s64) src->_10 * src->_01) >> 12)) >> 12);

    m->_30 = -(s32) (((s64) m->_00 * src->_30 + (s64) m->_10 * src->_31 + (s64) m->_20 * src->_32) >> 12);
    m->_31 = -(s32) (((s64) m->_01 * src->_30 + (s64) m->_11 * src->_31 + (s64) m->_21 * src->_32) >> 12);
    m->_32 = -(s32) (((s64) m->_02 * src->_30 + (s64) m->_12 * src->_31 + (s64) m->_22 * src->_32) >> 12);

    if (m == &tmp) {
        MI_Copy48B(&tmp, dst);
    }
    return 0;
}
