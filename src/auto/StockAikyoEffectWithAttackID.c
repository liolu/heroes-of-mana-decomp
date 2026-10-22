/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 flags;
    s32 a;
    s32 b;
    s16 x;
} Eff;
Eff *StockAikyoEffect(s32 a, s32 b, s32 c, s32 d, s32 e);
void StockAikyoEffectWithAttackID(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f) {
    Eff *p = StockAikyoEffect(a, b, c, d, e);
    p->flags |= 0x04000000;
    p->x = f;
}
