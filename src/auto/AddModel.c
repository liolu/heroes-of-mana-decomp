/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct TypeSt {
    u8 pad0[8];
    u16 n8;
    u16 na;
    u8 padc[0x24];
    s32 s30;
    s32 s34;
} TypeSt;

typedef struct Model {
    u32 f0_lo : 4;
    u32 kind : 2;
    u32 aa : 8;
    u32 id : 8;
    u32 f0_hi : 10;
    u16 on : 1;
    u16 flg : 7;
    u16 f4_hi : 8;
    u16 cnt;
    s16 s8;
    s16 sa;
    struct Model *next;
    TypeSt *st;
    s32 pos[3];
    s32 rot[3];
    s16 sc[3];
    s16 padsc;
    void *f34;
    s32 f38;
    void *f3c;
} Model;

typedef struct Cur {
    Model *m;
    TypeSt *st;
} Cur;

typedef struct Glob {
    u8 p0[0x290];
    TypeSt *curSt;
    Model *curModel;
    u8 p298[0x34];
    Model *list;
    u8 p2d0[0x10];
    s32 e0;
    s32 e4;
} Glob;

extern Glob *data_ov000_02051548;
extern Cur data_ov003_020aea80;
void *func_0200ed38(s32, s32, s32);
void MIi_CpuClear16(s32, void *, s32);
s32 GetEmptyModelId(void);
void CopyVecFx32(void *, void *);
void CopyVecFx16(void *, void *);
TypeSt *AddModelTypeSt(s32, s32, s32);

Model *AddModel(s32 a, s32 b, s32 *pos, s32 *rot, s16 *sc, s32 flg, s32 s8, s32 sa) {
    Model *m = func_0200ed38(0, -1, 0x40);
    TypeSt *st;
    MIi_CpuClear16(0, m, 0x40);
    m->on                     = 1;
    m->next                   = data_ov000_02051548->list;
    data_ov000_02051548->list = m;
    m->id                     = GetEmptyModelId();
    m->aa                     = a;
    m->kind                   = b;
    CopyVecFx32(pos, m->pos);
    CopyVecFx32(rot, m->rot);
    CopyVecFx16(sc, m->sc);
    m->f38                 = 0x1000;
    m->flg                 = (u16) flg;
    m->s8                  = s8;
    m->sa                  = sa;
    st                     = AddModelTypeSt(b, a, m->id);
    m->st                  = st;
    data_ov003_020aea80.st = st;
    data_ov003_020aea80.m  = m;
    if (m->kind == 0) {
        if (m->aa != 5) {
            m->cnt = st->na;
            m->f3c = func_0200ed38(0, -1, data_ov003_020aea80.st->na * 0x34);
            MIi_CpuClear16(0, m->f3c, data_ov003_020aea80.st->na * 0x34);
        } else {
            m->cnt = 10;
            m->f3c = func_0200ed38(0, -1, 0x208);
            MIi_CpuClear16(0, m->f3c, 0x208);
        }
    } else {
        m->cnt = 3000;
        m->f3c = func_0200ed38(0, -1, 0x26160);
        MIi_CpuClear16(0, m->f3c, 0x26160);
    }
    m->f34 = func_0200ed38(0, -1, data_ov003_020aea80.st->n8 * 0x30);
    MIi_CpuClear16(0, m->f34, data_ov003_020aea80.st->n8 * 0x30);
    if (b == 1) {
        data_ov000_02051548->curModel = m;
        data_ov000_02051548->curSt    = m->st;
        data_ov000_02051548->e0       = data_ov000_02051548->curSt->s30;
        data_ov000_02051548->e4       = data_ov000_02051548->curSt->s34 - data_ov000_02051548->curSt->s30;
    }
    return m;
}
