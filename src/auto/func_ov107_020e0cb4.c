#include "m2c.h"
typedef struct P {
    u8 pad[0x10];
    u16 h10;
} P;
typedef struct E {
    P *p;
    u8 pad[0x10c];
} E;
extern E data_ov003_020b0dd8[];
void ReadySetUpWaza(s32);
s32 GetEnemyInOneUnitSite(s32);
s32 GetAooNoFromCharNo(s32);
s32 GetEnemyInSite(s32);
s32 distanceForBattle(s32, s32);
void changeOcc(s32, s32, s32, s32);
void func_ov107_020e0cb4(s32 arg) {
    s32 r;
    s32 t;
    ReadySetUpWaza(arg);
    r = GetEnemyInOneUnitSite(arg);
    if (r == -1) {
        t = GetAooNoFromCharNo(0xf00);
        if (t == -1) {
            t = GetAooNoFromCharNo(0xf19);
            if (t == -1) {
                return;
            }
        }
        if (data_ov003_020b0dd8[t].p->h10 >= 0x1324) {
            return;
        }
        r = GetEnemyInSite(arg);
        if (r == -1) {
            return;
        }
    }
    if (distanceForBattle(r, arg) == 1) {
        changeOcc(3, arg, r, 0);
    } else {
        changeOcc(2, arg, r, 0);
    }
}
