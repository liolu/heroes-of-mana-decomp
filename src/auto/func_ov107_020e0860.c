#include "m2c.h"
typedef struct {
    u8 pad[0x10];
    u16 a;
    u16 b;
} Stat;
typedef struct {
    u8 pad[0xE8];
    Stat *stat;
} Unit;
typedef struct {
    u8 pad[0x8C];
    u32 flags;
} Glob;
s32 func_0202d478(s32, s32);
void ReadySetUpWaza(Unit *);
s32 GetEnemyInOneUnitSite(Unit *);
s32 GetAooNoFromUnitBaseNo(s32);
s32 GetAooNoFromCharNo(s32);
s32 distanceForBattle(s32, Unit *);
void changeOcc(s32, Unit *, s32, s32);
extern Glob *data_ov000_02051548;

void func_ov107_020e0860(Unit *u) {
    s32 r;
    s32 e;
    Stat *st;

    ReadySetUpWaza(u);
    e = GetEnemyInOneUnitSite(u);
    if (e == -1) {
        st = u->stat;
        r  = func_0202d478(st->a * 0x64, st->b);
        if (r >= 0x50) {
            return;
        }
        if ((r < 0x50) && (r >= 0x3C)) {
            e = GetAooNoFromUnitBaseNo(0x3D);
            if ((data_ov000_02051548->flags & 0x40000) != 0x40000) {
                data_ov000_02051548->flags = data_ov000_02051548->flags | 0x8000;
            }
        } else if ((r < 0x3C) && (r >= 0x1E)) {
            e = GetAooNoFromCharNo(0);
            if ((data_ov000_02051548->flags & 0x80000) != 0x80000) {
                data_ov000_02051548->flags = data_ov000_02051548->flags | 0x10000;
            }
        } else if (r < 0x1E) {
            e = GetAooNoFromCharNo(1);
            if (e == -1) {
                e = GetAooNoFromCharNo(0xB);
            }
            if ((data_ov000_02051548->flags & 0x100000) != 0x100000) {
                data_ov000_02051548->flags = data_ov000_02051548->flags | 0x20000;
            }
        }
        if (e == -1) {
            return;
        }
        changeOcc(2, u, e, 0);
        return;
    }
    if (distanceForBattle(e, u) == 1) {
        changeOcc(3, u, e, 0);
        return;
    }
    changeOcc(2, u, e, 0);
}
