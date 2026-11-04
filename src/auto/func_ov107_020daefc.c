/* near start: 1 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

void ReadySetUpWaza(void *);
s32 GetEnemyInOneUnitSite(void *);
s32 GetAooNoFromCharNo(s32);
s32 func_0202d478(s32, u16);
s32 GetEnemyInSite(void *);
s32 distanceForBattle(s32, void *);
void changeOcc(s32, void *, s32, s32);
extern u8 data_ov003_020b0dd8[];

void func_ov107_020daefc(void *arg0) {
    u8 flags;
    s32 site;
    s32 r6;
    u8 *p;

    flags = 0;
    ReadySetUpWaza(arg0);
    site = GetEnemyInOneUnitSite(arg0);
    if (site == -1) {
        r6 = GetAooNoFromCharNo(0xF0F);
        if (r6 == -1) {
            flags = 1;
        } else {
            p = *(u8 **) (data_ov003_020b0dd8 + r6 * 0x110);
            if (*(u16 *) (p + 0x10) < 0x32) {
                flags = 1;
            }
        }
        r6 = GetAooNoFromCharNo(0xF10);
        if (r6 == -1) {
            flags |= 2;
        } else {
            p = *(u8 **) (data_ov003_020b0dd8 + r6 * 0x110);
            if (*(u16 *) (p + 0x10) < 0x32) {
                flags |= 2;
            }
        }
        p = *(u8 **) ((u8 *) arg0 + 0xE8);
        flags &= 3;
        if (func_0202d478(*(u16 *) (p + 0x10) * 100, *(u16 *) (p + 0x12)) < 100) {
            flags = 3;
        }
        if (GetAooNoFromCharNo(0x19) != -1) {
            flags = 3;
        }
        if (flags != 3) {
            return;
        }
        r6 = GetAooNoFromCharNo(1);
        if (r6 == -1) {
            r6 = GetAooNoFromCharNo(0xE);
            if (r6 == -1) {
                r6 = GetEnemyInSite(arg0);
            }
            if (r6 == -1) {
                return;
            }
        }
    } else {
        r6 = site;
    }
    if (distanceForBattle(r6, arg0) == 1) {
        changeOcc(3, arg0, r6, 0);
        return;
    }
    changeOcc(2, arg0, r6, 0);
}
