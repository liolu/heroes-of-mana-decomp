extern int GetFriendOfHalfHP(void *);
extern void ReadySetUpWaza(void *);
extern int GetEnemyInOneUnitSite(void *);
extern int distanceForBattle(int, void *);
extern void changeOcc(int, void *, int, int);
void func_ov107_020dc9a0(void *u) {
    int e = GetFriendOfHalfHP(u);
    ReadySetUpWaza(u);
    if (e == -1) {
        e = GetEnemyInOneUnitSite(u);
        ReadySetUpWaza(u);
    }
    if (e == -1) {
        return;
    }
    if (distanceForBattle(e, u) == 1) {
        changeOcc(3, u, e, 0);
    } else {
        changeOcc(2, u, e, 0);
    }
}
