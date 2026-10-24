#include "m2c.h"

typedef struct U {
    u8 pad[0xe8];
    u16 *st;
} U;

extern void ReadySetUpWaza(U *);
extern s32 GetEnemyInOneUnitSite(U *);
extern s32 GetAooNoFromCharNo(s32);
extern s32 func_0202d478(s32, s32);
extern s32 distanceForBattle(s32, U *);
extern void changeOcc(s32, U *, s32, s32);

void func_ov107_020ddd80(U *u) {
    s32 t;
    ReadySetUpWaza(u);
    t = GetEnemyInOneUnitSite(u);
    if (GetAooNoFromCharNo(0x18) != -1) {
        u16 *s = u->st;
        if (func_0202d478(s[8] * 100, s[9]) < 99) {
            t = GetAooNoFromCharNo(2);
            if (t == -1) {
                t = GetAooNoFromCharNo(0xd);
                if (t == -1) {
                    t = GetEnemyInOneUnitSite(u);
                }
            }
        }
    }
    if (t == -1) {
        return;
    }
    if (t == GetAooNoFromCharNo(0x18)) {
        return;
    }
    if (distanceForBattle(t, u) == 1) {
        changeOcc(3, u, t, 0);
    } else {
        changeOcc(2, u, t, 0);
    }
}
