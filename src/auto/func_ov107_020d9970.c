#include "m2c.h"

typedef struct Sub {
    u8 pad[0x10];
    u16 f10;
} Sub;

typedef struct Rec {
    Sub *p;
    u8 pad[0x10c];
} Rec;

s32 GetAooNoFromCharNo(s32);
void changeOcc(s32, s32, s32, s32);
void SetDestination(s32, s32, s32);
s32 GetNearDistance(s32, s32);
void ReadySetUpWaza(s32);
s32 GetEnemyInOneUnitSite(s32);
s32 distanceForBattle(s32, s32);
extern Rec data_ov003_020b0dd8[];

void func_ov107_020d9970(s32 arg0) {
    s32 sp[3] = {0, 0, 0};
    u8 m;
    s32 t;
    s32 n;
    s32 e;

    m = 0;
    t = GetAooNoFromCharNo(0xf0d);
    if (t > 0) {
        sp[0] = data_ov003_020b0dd8[t].p->f10;
        if (sp[0] > 0) {
            m = 1;
        }
    }
    t = GetAooNoFromCharNo(0xf0e);
    if (t > 0) {
        sp[1] = data_ov003_020b0dd8[t].p->f10;
        if (sp[1] > 0) {
            m |= 2;
        }
    }
    t = GetAooNoFromCharNo(0xf0f);
    if (t > 0) {
        sp[2] = data_ov003_020b0dd8[t].p->f10;
        if (sp[2] > 0) {
            m |= 4;
        }
    }
    switch (m) {
        case 1:
            changeOcc(2, arg0, GetAooNoFromCharNo(0xf0d), 0);
            break;
        case 2:
            changeOcc(2, arg0, GetAooNoFromCharNo(0xf0e), 0);
            break;
        case 4:
            changeOcc(2, arg0, GetAooNoFromCharNo(0xf0f), 0);
            break;
        case 3:
            if (sp[0] <= sp[1]) {
                n = GetAooNoFromCharNo(0xf0d);
            } else {
                n = GetAooNoFromCharNo(0xf0e);
            }
            changeOcc(2, arg0, n, 0);
            break;
        case 5:
            if (sp[0] <= sp[2]) {
                n = GetAooNoFromCharNo(0xf0d);
            } else {
                n = GetAooNoFromCharNo(0xf0f);
            }
            changeOcc(2, arg0, n, 0);
            break;
        case 6:
            if (sp[1] <= sp[2]) {
                n = GetAooNoFromCharNo(0xf0e);
            } else {
                n = GetAooNoFromCharNo(0xf0f);
            }
            changeOcc(2, arg0, n, 0);
            break;
        case 7:
            if (sp[0] <= sp[1]) {
                if (sp[0] <= sp[2]) {
                    n = GetAooNoFromCharNo(0xf0d);
                } else if (sp[1] <= sp[2]) {
                    n = GetAooNoFromCharNo(0xf0e);
                } else {
                    n = GetAooNoFromCharNo(0xf0f);
                }
            } else if (sp[1] <= sp[2]) {
                n = GetAooNoFromCharNo(0xf0e);
            } else {
                n = GetAooNoFromCharNo(0xf0f);
            }
            changeOcc(2, arg0, n, 0);
            break;
        case 0:
        default:
            SetDestination(arg0, 0x1e, 10);
            break;
    }
    if (m != 0 && GetNearDistance(arg0, 5) == 0) {
        return;
    }
    ReadySetUpWaza(arg0);
    e = GetEnemyInOneUnitSite(arg0);
    if (e == -1) {
        return;
    }
    if (distanceForBattle(e, arg0) != 1) {
        return;
    }
    changeOcc(3, arg0, e, 0);
}
