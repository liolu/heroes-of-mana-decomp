#include "m2c.h"
typedef struct G {
    u8 pad[0xd8];
    u32 pad2 : 18;
    u32 f : 1;
    u32 rest : 13;
} G;
typedef struct T {
    u8 *p[68];
} T;
typedef struct E {
    u16 pad[8];
    u16 v;
} E;
typedef struct Row {
    E *e;
    u8 pad[0x10 * 17 - 4];
} Row;
extern G *data_ov000_02051548;
extern Row data_ov003_020b0dd8[];
extern void ReadySetUpWaza(s32);
extern s32 GetEnemyInOneUnitSite(s32);
extern s32 GetAooNoFromCharNo(s32);
extern s32 distanceForBattle(s32, s32);
extern void changeOcc(s32, s32, s32, s32);
void func_ov107_020daa08(s32 a) {
    s32 t;
    s32 lim;
    ReadySetUpWaza(a);
    t = GetEnemyInOneUnitSite(a);
    if (t == -1) {
        t = GetAooNoFromCharNo(0x21);
        if (t == -1) {
            return;
        }
        if (data_ov000_02051548->f != 0) {
            lim = 0x6e0;
        } else {
            lim = 0x3c0;
        }
        if (((E *) ((u32 *) data_ov003_020b0dd8)[t * 17 * 4])->v >= lim) {
            return;
        }
        t = GetAooNoFromCharNo(0xe);
        if (t == -1) {
            return;
        }
    }
    if (distanceForBattle(t, a) == 1) {
        changeOcc(3, a, t, 0);
    } else {
        changeOcc(2, a, t, 0);
    }
}
