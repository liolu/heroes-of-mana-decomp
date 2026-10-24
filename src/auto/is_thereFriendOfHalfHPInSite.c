/* compiler: 2.0/sp1p5 -profile */
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct Sub {
    int a0, a4;
    u32 lo : 23;
    u32 b : 1;
    u32 hi : 8;
    int ac;
    u16 h10, h12;
} Sub;
typedef struct U {
    u32 alive : 1;
    u32 p0 : 31;
    int a4;
    u32 lo : 23;
    u32 team : 4;
    u32 hi : 5;
    char pad[0x2c - 0xc];
    u16 side : 1;
    u16 s2 : 15;
    char pad2[0x60 - 0x2e];
    signed char x, y;
    char pad3[0x6c - 0x62];
    u32 m6c, m70;
    char pad4[0x7c - 0x74];
    int a7c;
    char pad5[0xe8 - 0x80];
    Sub *sub;
    char pad6[0x110 - 0xec];
} U;
typedef struct G {
    char pad[0x14];
    u32 lo : 8;
    u32 mid : 4;
    u32 hi : 20;
} G;
extern U data_ov003_020b0cf0[];
extern G *data_ov000_02051548;
extern int CheckCanTargetting(U *);
extern int checkCanSeeUnitByUser(U *);
extern int CheckAreaMapMaskForEnemy(int, int);
extern int FX_Sqrt(int);

int is_thereFriendOfHalfHPInSite(U *me, int side) {
    U *p = data_ov003_020b0cf0;
    int i;
    int best;
    int idx;
    best = 0x2710000;
    idx  = -1;
    i    = 0;
    do {
        if (p->alive && p->team < 4 && side == p->side && p != me) {
            Sub *s;
            if (CheckCanTargetting(p) != 0 && (s = p->sub) != 0) {
                if (s->b == 0 && s->h10 * 2 <= s->h12 && p->a7c != 0) {
                    u32 t = data_ov000_02051548->mid;
                    int v;
                    if (me->team == t || me->team == t + 2) {
                        v = checkCanSeeUnitByUser(p);
                    } else {
                        v = CheckAreaMapMaskForEnemy(p->x, p->y);
                    }
                    if (v == 1) {
                        int dy = p->y - me->y;
                        int dx = p->x - me->x;
                        int d  = FX_Sqrt((dx * dx + dy * dy) << 12);
                        if (!(p->m70 & me->m6c)) {
                            d += 0x64000;
                        }
                        if (best > d) {
                            best = d;
                            idx  = i;
                        }
                    }
                }
            }
        }
        i++;
        p++;
    } while (i < 0x42);
    return idx;
}
