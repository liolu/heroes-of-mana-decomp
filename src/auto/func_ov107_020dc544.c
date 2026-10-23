#include "m2c.h"
typedef struct {
    u8 pad[0x10];
    u16 v;
} Rec;
typedef struct {
    Rec *rec;
    u8 pad[0x110 - 4];
} Ent;
typedef struct {
    u8 pad[0xe8];
    u8 *q;
} U;
extern Ent data_ov003_020b0dd8[];
void ReadySetUpWaza(U *);
s32 GetEnemyInOneUnitSite(U *);
s32 GetAooNoFromCharNo(s32);
s32 func_0202d478(s32, s32);
s32 distanceForBattle(s32, U *);
void changeOcc(s32, U *, s32, s32);
void func_ov107_020dc544(U *u) {
    u8 f;
    s32 r6;
    s32 a;
    f = 0;
    ReadySetUpWaza(u);
    r6 = GetEnemyInOneUnitSite(u);
    if (r6 == -1) {
        a = GetAooNoFromCharNo(0xf0d);
        if (a == -1) {
            f = 1;
        } else if (data_ov003_020b0dd8[a].rec->v < 0x32) {
            f = 1;
        }
        a = GetAooNoFromCharNo(0xf0e);
        if (a == -1) {
            f |= 2;
        } else if (data_ov003_020b0dd8[a].rec->v < 0x32) {
            f |= 2;
        }
        a = GetAooNoFromCharNo(0xf0f);
        if (a == -1) {
            f |= 4;
        } else if (data_ov003_020b0dd8[a].rec->v < 0x32) {
            f |= 4;
        }
        f &= 7;
        if (func_0202d478(*(u16 *) (u->q + 0x10) * 100, *(u16 *) (u->q + 0x12)) < 0x32) {
            f = 7;
        }
        if (f != 7) {
            return;
        }
        r6 = GetAooNoFromCharNo(7);
        if (r6 == -1) {
            return;
        }
    }
    if (distanceForBattle(r6, u) == 1) {
        changeOcc(3, u, r6, 0);
    } else {
        changeOcc(2, u, r6, 0);
    }
}
