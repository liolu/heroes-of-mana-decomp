/* compiler: 2.0/sp1p5 -profile */
/* near start: 2 diffs with profile "2.0/sp1p5 -profile" */
typedef struct Ship {
    unsigned int f0 : 1;
    unsigned int w0hi : 31;
    unsigned int p4;
    unsigned int lo : 29;
    unsigned int f29 : 1;
    unsigned int hi : 2;
    unsigned char pad[0x9C];
    unsigned short sl : 14;
    unsigned short m : 2;
} Ship;
typedef struct Unit {
    unsigned int p0;
    unsigned int p4;
    unsigned int lo : 23;
    unsigned int kind : 4;
    unsigned int hi : 5;
    unsigned char pad[0x20];
    unsigned short h2c : 1;
    unsigned short h2c_hi : 15;
    unsigned char pad2[0xA];
    unsigned char b38;
} Unit;
extern int checkHookStatus(int);
extern Ship *GetShipAooSt(int);

int CheckAttackTarget(Unit *u, int a, int b) {
    int r;
    int st;
    unsigned int k;
    Ship *s;
    k = u->kind;
    switch (k) {
        case 4:
            st = checkHookStatus(u->b38);
            if (st == -1) {
                r = 0;
            } else {
                s = GetShipAooSt(st);
                if (s == 0) {
                    r = 0;
                } else if (s->f0 == 0 || s->f29 == 0) {
                    r = 0;
                } else if (s->m != 2) {
                    r = 0;
                } else if ((st & 1) == a) {
                    r = 1;
                } else {
                    r = 0;
                }
            }
            break;
        case 5:
        case 6:
            if (b != 0) {
                r = 1;
            } else {
                r = 0;
            }
            break;
        case 7:
            r = 0;
            break;
        default:
            if (a == u->h2c) {
                r = 1;
            } else {
                r = 0;
            }
            break;
    }
    return r;
}
