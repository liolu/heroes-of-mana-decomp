#include "m2c.h"

void ReadySetUpWaza(int);
int GetEnemyInOneUnitSite(int);
int GetAooNoFromCharNo(int);
void changeOcc(int, int, int, int);
int distanceForBattle(int, int);

void func_ov107_020dcc50(int a) {
    int e;
    int t;
    ReadySetUpWaza(a);
    e = GetEnemyInOneUnitSite(a);
    if (e == -1) {
        t = GetAooNoFromCharNo(10);
        if (t == -1) {
            return;
        }
        changeOcc(2, a, t, 0);
        return;
    }
    if (distanceForBattle(e, a) == 1) {
        changeOcc(3, a, e, 0);
        return;
    }
    changeOcc(2, a, e, 0);
}
