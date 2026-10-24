#include "m2c.h"

typedef struct Ch {
    u8 p[0x10];
    u16 v;
} Ch;
typedef struct Slot {
    Ch *c;
    u8 rest[0x10c];
} Slot;
extern Slot data_ov003_020b0dd8[];
s32 GetAooNoFromCharNo(s32);
void ReadySetUpWaza(s32);
s32 distanceForBattle(s32, s32);
void changeOcc(s32, s32, s32, s32);
s32 GetFriendOfHalfHP(s32);
s32 GetEnemyInOneUnitSite(s32);
void SetDestination(s32, s32, s32);

void func_ov107_020df7ec(s32 a) {
    s32 r;
    r = GetAooNoFromCharNo(0x2c);
    if (r == -1) {
        return;
    }
    if (data_ov003_020b0dd8[r].c->v < 0x1f4) {
        ReadySetUpWaza(a);
        if (distanceForBattle(r, a) == 1) {
            changeOcc(3, a, r, 0);
            return;
        }
        changeOcc(2, a, r, 0);
        return;
    }
    r = GetAooNoFromCharNo(0x16);
    if (r != -1 && data_ov003_020b0dd8[r].c->v < 0x1f4) {
        ReadySetUpWaza(a);
        if (distanceForBattle(r, a) == 1) {
            changeOcc(3, a, r, 0);
            return;
        }
        changeOcc(2, a, r, 0);
        return;
    }
    r = GetFriendOfHalfHP(a);
    ReadySetUpWaza(a);
    if (r == -1) {
        r = GetEnemyInOneUnitSite(a);
        ReadySetUpWaza(a);
    }
    if (r == -1) {
        return;
    }
    if (distanceForBattle(r, a) == 1) {
        changeOcc(3, a, r, 0);
        return;
    }
    SetDestination(a, 10, 0x26);
}
