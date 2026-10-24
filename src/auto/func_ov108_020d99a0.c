#include "m2c.h"

s32 func_0202d478(s32, s32);
void ReadySetUpWaza(void *);
s32 GetEnemyInOneUnitSite(void *);
s32 GetAooNoFromUnitBaseNo(s32);
s32 GetAooNoFromCharNo(s32);
void changeOcc(s32, void *, s32, s32);
s32 distanceForBattle(s32, void *);

void func_ov108_020d99a0(u8 *arg0) {
    s32 r;
    s32 v;
    u8 *p;

    ReadySetUpWaza(arg0);
    r = GetEnemyInOneUnitSite(arg0);
    if (r == -1) {
        p = *(u8 **) (arg0 + 0xE8);
        v = func_0202d478(*(u16 *) (p + 0x10) * 0x64, *(u16 *) (p + 0x12));
        if (v >= 0x50) {
            return;
        }
        if (v < 0x50 && v >= 0x3C) {
            r = GetAooNoFromUnitBaseNo(0x3D);
        } else if (v < 0x3C && v <= 0x1E) {
            r = GetAooNoFromCharNo(0);
        } else if (v < 0x1E) {
            r = GetAooNoFromCharNo(1);
            if (r == -1) {
                r = GetAooNoFromCharNo(0xB);
            }
        }
        if (r == -1) {
            return;
        }
        changeOcc(2, arg0, r, 0);
        return;
    }
    if (distanceForBattle(r, arg0) == 1) {
        changeOcc(3, arg0, r, 0);
        return;
    }
    changeOcc(2, arg0, r, 0);
}
