/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 act : 1;
    u32 p0 : 1;
    u32 id : 9;
    u32 p1 : 21;
    u32 team : 4;
    u32 f4 : 1;
    u32 f5 : 1;
    u32 f67 : 2;
    u32 p2 : 24;
    u32 w8;
    u32 wc;
    u16 h10;
    u8 pad[0x22];
} Unit;
typedef struct {
    u32 a;
    u32 b;
    u32 d : 10;
    u32 kind : 4;
    u32 e : 18;
    u8 pad[0x14];
} Info;
typedef struct {
    u8 p[0x10];
    u32 q1 : 28;
    u32 lo : 1;
    u32 hi : 1;
    u32 q0 : 2;
} Gs;
typedef struct {
    u8 p[4];
    Info *info;
    u8 p2[0x1c];
    Unit *units;
} G2;
extern Gs *data_ov000_02051548;
extern G2 *data_0203673c;
extern void SetTrsObjCommand(s32, s32, s32, s32);
extern void SetUD_ST_paras(void *, s32);
extern void checkUnitKazuInShip(s32);

void Make2DeleteForCarisuma(s32 team) {
    s32 i;
    Unit *u = data_0203673c->units;
    if (data_ov000_02051548->hi != 0 && data_ov000_02051548->lo != 0) {
        SetTrsObjCommand(9, team, 0, 0);
    } else {
        for (i = 0; i < 0x58; i++, u++) {
            if (u->act != 0 && team == u->team) {
                if (data_0203673c->info[u->id].kind == 5 && u->f67 == 2 && u->f5 == 1) {
                    u->f67 = 0;
                    u->h10 = 0;
                    u->w8 |= 0x800000;
                    if (data_ov000_02051548->hi != 0 && data_ov000_02051548->lo == 0) {
                        SetUD_ST_paras((u8 *) u + 4, 8);
                        SetUD_ST_paras((u8 *) u + 0x10, 2);
                    }
                }
            }
        }
        checkUnitKazuInShip(team);
    }
}
