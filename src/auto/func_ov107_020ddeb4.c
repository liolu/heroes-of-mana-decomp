extern void ReadySetUpWaza(void *);
extern int GetEnemyInOneUnitSite(void *);
extern int GetEnemyInSite(void *);
extern int GetAooNoFromCharNo(int);
extern int distanceForBattle(int, void *);
extern void changeOcc(int, void *, int, int);
void func_ov107_020ddeb4(void *u) {
    int e;
    ReadySetUpWaza(u);
    e = GetEnemyInOneUnitSite(u);
    if (e == -1) {
        e = GetEnemyInSite(u);
        if (e != GetAooNoFromCharNo(6)) {
            return;
        }
    }
    if (distanceForBattle(e, u) == 1) {
        changeOcc(3, u, e, 0);
    } else {
        changeOcc(2, u, e, 0);
    }
}
