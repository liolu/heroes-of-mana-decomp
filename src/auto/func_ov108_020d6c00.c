/* compiler: 2.0/sp1p5 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct Info {
    u32 a : 11;
    u32 type : 8;
    u32 b : 13;
    u8 pad[12];
    u16 h10;
    u16 h12;
    u16 h14;
    u16 h16;
} Info;
typedef struct Unit {
    u8 pad[0xe8];
    Info *info;
    u8 *ec;
} Unit;
typedef struct Ent {
    u8 pad[0xc];
    u32 lo : 6;
    u32 hi : 26;
    u32 x;
} Ent;
typedef struct Gl {
    u8 pad[8];
    Ent *tbl;
    u8 pad2[0x1c];
    void *g28;
} Gl;
typedef struct Cnt {
    u8 pad[0x6c];
    int c6c;
    int c70;
    int c74;
    int c78;
} Cnt;
extern Gl *data_0203673c;
extern Cnt *data_ov000_02051548;
extern int SearchGoddessOrHookWithShipFunc;
extern int func_0202d478(int, u16);
extern int GetUnitType(Unit *);
extern int GetUnitOfFunc(Unit *, int, int, void *);
extern int distanceForRecover(int, Unit *);
extern void changeOcc(int, Unit *, int, int);
extern int GetFriendOfHalfHP(Unit *);
extern int GetEnemyInOneUnitSite(Unit *);
extern void SetWazaBySpOrNormal(Unit *, int);
extern int GetNowUnitKazuByUnitType(void *, int);
extern int GetNowUnitKazu(void *);
extern int GetEnemyInSite(Unit *);
extern void ReadySetUpWaza(Unit *);
extern int distanceForBattle(int, Unit *);
extern int GetRnd(void);
void func_ov108_020d6c00(Unit *arg0) {
    int r5;
    int r4;
    int f;
    void *g;
    r5 = 0;
    if (func_0202d478(arg0->info->h10 * 100, arg0->info->h12) < 40 && GetUnitType(arg0) == 5) {
        r4 = GetUnitOfFunc(arg0, r5, 1, &SearchGoddessOrHookWithShipFunc);
        if (r4 != -1) {
            if (distanceForRecover(r4, arg0) == 1) {
                changeOcc(r5, arg0, r4, r5);
                return;
            }
            changeOcc(6, arg0, r4, r5);
            return;
        }
    }
    if (arg0->info->type == 7) {
        f = 0;
    } else if (data_0203673c->tbl[arg0->info->h16].lo == 0x15) {
        f = 1;
    } else {
        f = 0;
    }
    if (f == 1) {
        r4 = GetFriendOfHalfHP(arg0);
        if (r4 == -1) {
            r4 = GetEnemyInOneUnitSite(arg0);
            SetWazaBySpOrNormal(arg0, 0);
        } else {
            SetWazaBySpOrNormal(arg0, 1);
        }
    } else {
        r4 = GetEnemyInOneUnitSite(arg0);
    }
    if (r4 == -1) {
        g = data_0203673c->g28;
        switch (GetUnitType(arg0)) {
            case 1:
                if (GetNowUnitKazuByUnitType((u8 *) g + 0x2d0, 1) >= data_ov000_02051548->c6c) {
                    r5 = 1;
                }
                break;
            case 2:
                if (GetNowUnitKazuByUnitType((u8 *) g + 0x2d0, 2) >= data_ov000_02051548->c6c) {
                    r5 = 1;
                }
                break;
            case 3:
                if (GetNowUnitKazuByUnitType((u8 *) g + 0x2d0, 3) >= data_ov000_02051548->c6c) {
                    r5 = 1;
                }
                break;
            case 4:
                if (GetNowUnitKazuByUnitType((u8 *) g + 0x2d0, 4) >= data_ov000_02051548->c6c) {
                    r5 = 1;
                }
                break;
            case 5:
                if (GetNowUnitKazu((u8 *) g + 0x2d0) < data_ov000_02051548->c70) {
                    r5 = 0;
                } else {
                    r5 = 1;
                }
                break;
            case 6:
                r5 = GetNowUnitKazu((u8 *) g + 0x2d0) < data_ov000_02051548->c74;
                break;
        }
        if (GetNowUnitKazu((u8 *) g + 0x2d0) > data_ov000_02051548->c78) {
            if (GetUnitType(arg0) != 5) {
                r5 = 1;
            }
        }
        if (r5 <= 0) {
            return;
        }
        r4 = GetEnemyInSite(arg0);
        if (r4 == -1) {
            return;
        }
    }
    ReadySetUpWaza(arg0);
    if (distanceForBattle(r4, arg0) == 1) {
        changeOcc(3, arg0, r4, 0);
        return;
    }
    if (GetRnd() % 100 < arg0->ec[6]) {
        changeOcc(2, arg0, r4, 0);
    }
}
