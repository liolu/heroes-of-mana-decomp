/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 p0[8];
    u32 a : 19;
    u32 kind : 3;
    u32 b : 10;
    u32 c : 15;
    u32 id : 8;
    u32 d : 9;
    u8 p1[4];
} Ent;
typedef struct {
    u8 p[8];
    Ent *ents;
} G;
typedef struct {
    u8 p[0x10];
    u32 q : 28;
    u32 lo : 1;
    u32 hi : 1;
    u32 r : 2;
} Gs;
typedef struct {
    u32 w0;
    u32 w4;
    u8 p0[0x1a];
    u16 h22;
    u8 p1[0x14];
    u8 b38;
    u8 b39;
    u8 b3a;
} Unit;
extern G *data_0203673c;
extern Gs *data_ov000_02051548;
extern u8 *GetUnitForAttack(Unit *, s32, s32 *, s32 *, s32, s32);
extern void StockAikyoEffectWithAttackID(s32, s32, s32, s32, u8 *, s32);
extern void TrsAikyoEffectToChild(s32, s32, s32, s32, u8 *);

void SetAikyoWaza(Unit *u, s32 n) {
    s32 cnt;
    s32 x;
    u8 *r   = GetUnitForAttack(u, n, &cnt, &x, 1, 2);
    s32 off = n * 0x14;
    if (((Ent *) ((u8 *) data_0203673c->ents + off))->kind == 1 && cnt != 0) {
        s32 i;
        for (i = 0; i < cnt; i++) {
            if (u->b3a == r[i]) {
                r[0] = u->b3a;
                break;
            }
        }
    }
    StockAikyoEffectWithAttackID(n, ((Ent *) ((u8 *) data_0203673c->ents + off))->id, u->b38, cnt, r, u->h22);
    if (data_ov000_02051548->hi != 0 && data_ov000_02051548->lo == 0) {
        TrsAikyoEffectToChild(n, ((Ent *) ((u8 *) data_0203673c->ents + off))->id, u->b38, cnt, r);
        u->w4 &= ~1;
    }
}
