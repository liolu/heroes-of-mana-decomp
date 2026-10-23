#include "m2c.h"
typedef struct {
    u32 f : 6;
} B6;
s32 GetFriendOfHalfHP(void *);
s32 GetEnemyInOneUnitSite(void *);
void SetWazaBySpOrNormal(void *, s32);
s32 GetEnemyInSite(void *);
s32 CheckObjIsResource(s32);
s32 GetUnitTypeByNo(s32);
void ReOrderOrderUnit(void *);
void ReadySetUpWaza(void *);
s32 distanceForBattle(s32, void *);
void changeOcc(s32, void *, s32, s32);
extern u8 *data_0203673c;

void func_ov108_020d8e04(void *arg0) {
    s32 r;
    s32 t;
    u8 *p = *(u8 **) ((u8 *) arg0 + 0xe8);
    if (((*(u32 *) p << 13) >> 24) == 7) {
        r = 0;
    } else {
        B6 *v = (B6 *) (*(u8 **) (data_0203673c + 8) + *(u16 *) (p + 0x16) * 0x14 + 0xc);
        r     = v->f == 0x15 ? 1 : 0;
    }
    if (r == 1) {
        t = GetFriendOfHalfHP(arg0);
        if (t == -1) {
            t = GetEnemyInOneUnitSite(arg0);
            SetWazaBySpOrNormal(arg0, 0);
        } else {
            SetWazaBySpOrNormal(arg0, 1);
        }
    } else {
        t = GetEnemyInOneUnitSite(arg0);
    }
    if (t == -1) {
        t = GetEnemyInSite(arg0);
        if (t == -1) {
            return;
        }
        if (CheckObjIsResource(t) == 1) {
            return;
        }
        if (GetUnitTypeByNo(t) != 7) {
            ReOrderOrderUnit(arg0);
            return;
        }
    }
    ReadySetUpWaza(arg0);
    if (distanceForBattle(t, arg0) == 1) {
        changeOcc(3, arg0, t, 0);
        return;
    }
    changeOcc(2, arg0, t, 0);
}
