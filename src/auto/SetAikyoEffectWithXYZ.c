/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x38];
    u8 f38;
} One;

extern u8 *func_0200ed38(s32, s32, s32);
extern One *Get_aONEOBJadrsByCharno(s32);
extern void *StockAikyoEffect(s32, s32, s32, s32, u8 *);
extern void SetAikyoEffectXYZ(void *, s32, s32, s32);

void SetAikyoEffectWithXYZ(s32 arg0, s32 arg1, s32 arg2, u16 *arg3, s32 x, s32 y, s32 z) {
    s32 cnt;
    s32 i;

    u8 res;
    u8 *buf;
    One *o;
    void *r;
    res = 0;
    buf = 0;
    cnt = 0;
    if (arg2 != 0) {
        buf = func_0200ed38(0, -1, arg2);
        for (i = 0; i < arg2; i++) {
            o = Get_aONEOBJadrsByCharno(arg3[i]);
            if (o != 0) {
                buf[cnt] = o->f38;
                cnt++;
            }
        }
    }
    o = Get_aONEOBJadrsByCharno(arg1);
    if (o != 0) {
        res = o->f38;
    }
    r = StockAikyoEffect(0, arg0, res, cnt, buf);
    SetAikyoEffectXYZ(r, x, y, z);
}
