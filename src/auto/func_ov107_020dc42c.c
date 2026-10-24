typedef struct Ent {
    unsigned char pad[0x10];
    unsigned short h10;
} Ent;
typedef struct Ship {
    unsigned char pad[0xA8];
    unsigned short sl : 14;
    unsigned short m : 2;
} Ship;
extern int GetGaiaTrentFromShip(Ship *);
extern void ReOrderOrderUnit(Ship *);
extern void researchHookObj(Ship *);
extern int GetHookAooNo(Ship *, int, int, int);
extern int checkHookStatus(int);
extern void changeOccWithKihon(int, Ship *, int, int);
extern Ent *data_ov003_020b0dd8[][0x44];

void func_ov107_020dc42c(Ship *s) {
    int n;
    int r;
    if (s->m == 2) {
        r = GetGaiaTrentFromShip(s);
        if (r == -1) {
            return;
        }
        if (*(unsigned short *) ((unsigned char *) data_ov003_020b0dd8[r][0] + 0x10) >= 5) {
            ReOrderOrderUnit(s);
            return;
        }
    }
    researchHookObj(s);
    n = GetHookAooNo(s, 0, 0, 1);
    if (n == -1 || checkHookStatus(n) != -1) {
        n = GetHookAooNo(s, 0, 0, 2);
    }
    if (n == -1 || checkHookStatus(n) != -1) {
        n = GetHookAooNo(s, 0, 0, 3);
    }
    if (n == -1) {
        return;
    }
    if (checkHookStatus(n) != -1) {
        return;
    }
    changeOccWithKihon(2, s, n, 0);
}
