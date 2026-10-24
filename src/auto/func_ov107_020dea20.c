#include "m2c.h"

typedef struct Q {
    u8 pad[0x10];
    u16 h10;
} Q;
typedef struct R {
    Q *q;
    u8 pad[0x10C];
} R;
extern R data_ov003_020b0dd8[];
void ReadySetUpWaza(s32);
s32 GetEnemyInOneUnitSite(s32);
s32 GetAooNoFromCharNo(s32);
s32 GetEnemyInSite(s32);
s32 GetUnitTypeByNo(s32);
s32 distanceForBattle(s32, s32);
void changeOcc(s32, s32, s32, s32);

void func_ov107_020dea20(s32 arg0) {
    s32 t;
    s32 r6;
    s32 r4 = 0;
    ReadySetUpWaza(arg0);
    r6 = GetEnemyInOneUnitSite(arg0);
    if (r6 == -1) {
        t = GetAooNoFromCharNo(0x10);
        if (t != -1 && data_ov003_020b0dd8[t].q->h10 < 0x9C4) {
            r4 = 1;
        }
        if (r4 <= 0) {
            return;
        }
        r6 = GetEnemyInSite(arg0);
        if (r6 == -1) {
            return;
        }
        if (r6 != GetAooNoFromCharNo(0xA) && GetUnitTypeByNo(r6) != 7) {
            return;
        }
    }
    if (distanceForBattle(r6, arg0) == 1) {
        changeOcc(3, arg0, r6, 0);
    } else {
        changeOcc(2, arg0, r6, 0);
    }
}
