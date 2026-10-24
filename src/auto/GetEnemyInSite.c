/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 11;
    u32 idx : 8;
} Y;
typedef struct {
    u32 pad : 18;
    u32 kind : 5;
} Z;
typedef struct {
    u32 w0;
    u32 type : 6;
} X;
typedef struct {
    u32 flag : 1;
    u8 pad[0xE0];
    X *x;
    Y *y;
    u8 pad2[0x40 - 0x30 + 0x20];
} O;
typedef struct {
    u8 pad[0x10];
    Z *tab;
} G;
typedef struct {
    u8 pad[0x2C];
    u16 h : 1;
} O2;
s32 GetFriendOfAbnormalInSite(void *);
s32 GetFriendOfHalfHPInSite(void *);
s32 is_thereEnemyInSite(void *, u32);
extern G *data_0203673c;
s32 GetEnemyInSite(O *o) {
    s32 r2;
    Y *y;
    X *x;
    y = o->y;
    if (y == NULL) {
        return -1;
    }
    if (o->flag == 0) {
        return -1;
    }
    x  = o->x;
    r2 = 2;
    if (x != NULL) {
        if (x->type == 0x15) {
            r2 = 0;
        } else if (x->type == 0x16) {
            r2 = 1;
        }
    }
    switch (r2) {
        case 0:
            return GetFriendOfHalfHPInSite(o);
        case 1:
            return GetFriendOfAbnormalInSite(o);
        default:
            if (((Z *) ((u8 *) (data_0203673c->tab + y->idx) + 8))->kind == 4) {
                return is_thereEnemyInSite(o, ((O2 *) o)->h ^ 1);
            }
            return is_thereEnemyInSite(o, ((O2 *) o)->h);
    }
}
