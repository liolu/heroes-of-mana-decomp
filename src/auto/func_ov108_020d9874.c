#include "m2c.h"
typedef struct {
    u8 pad[0x10];
    u16 a;
    u16 b;
} St;
typedef struct {
    u8 pad[0xe8];
    St *st;
} O;
void ReadySetUpWaza(O *);
s32 GetEnemyInOneUnitSite(O *);
s32 func_0202d478(s32, s32);
s32 GetAooNoFromUnitBaseNo(s32);
s32 GetAooNoFromCharNo(s32);
void changeOcc(s32, O *, s32, s32);
s32 distanceForBattle(s32, O *);
void func_ov108_020d9874(O *o) {
    s32 e;
    s32 r;
    s32 id;
    ReadySetUpWaza(o);
    e = GetEnemyInOneUnitSite(o);
    if (e == -1) {
        r = func_0202d478(o->st->a * 100, o->st->b);
        if (r >= 0x32) {
            return;
        }
        if (r < 0x32 && r >= 10) {
            id = GetAooNoFromUnitBaseNo(0x3d);
        } else {
            id = GetAooNoFromCharNo(0);
        }
        if (id == -1) {
            return;
        }
        changeOcc(2, o, id, 0);
    } else {
        if (distanceForBattle(e, o) == 1) {
            changeOcc(3, o, e, 0);
        } else {
            changeOcc(2, o, e, 0);
        }
    }
}
