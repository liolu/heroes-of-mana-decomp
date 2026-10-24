#include "m2c.h"

extern void ReadySetUpWaza(s32);
extern s32 GetEnemyInOneUnitSite(s32);
extern s32 GetAooNoFromCharNo(s32);
extern s32 GetUnitOfFunc(s32, s32, s32, void *);
extern void SetDestination(s32, s32, s32);
extern s32 distanceForBattle(s32, s32);
extern void changeOcc(s32, s32, s32, s32);
extern u8 data_ov003_020b0dd8[];
extern u8 SearchUnitFunc[];

void func_ov107_020da374(s32 unit) {
    s32 no;
    s32 target;
    s32 mask;
    u8 flags;

    flags = 0;
    ReadySetUpWaza(unit);
    target = GetEnemyInOneUnitSite(unit);
    if (target == -1) {
        no = GetAooNoFromCharNo(0xF1B);
        if (no == -1) {
            flags = 1;
        } else if (*(u16 *) (*(u8 **) (data_ov003_020b0dd8 + no * 0x110) + 0x10) <= 0x32) {
            flags = 1;
        }
        no = GetAooNoFromCharNo(0xF1C);
        if (no == -1) {
            flags |= 2;
        } else if (*(u16 *) (*(u8 **) (data_ov003_020b0dd8 + no * 0x110) + 0x10) <= 0x32) {
            flags |= 2;
        }
        no = GetAooNoFromCharNo(0xF1D);
        if (no == -1) {
            flags |= 4;
        } else if (*(u16 *) (*(u8 **) (data_ov003_020b0dd8 + no * 0x110) + 0x10) <= 0x32) {
            flags |= 4;
        }
        no = GetAooNoFromCharNo(0xF1E);
        if (no == -1) {
            flags |= 8;
        } else if (*(u16 *) (*(u8 **) (data_ov003_020b0dd8 + no * 0x110) + 0x10) <= 0x32) {
            flags |= 8;
        }
        mask = flags & 0xF;
        no   = GetAooNoFromCharNo(0);
        if (no == GetUnitOfFunc(unit, 1, 0, SearchUnitFunc)) {
            mask = 0xF;
        }
        if (mask == 0xF) {
            target = GetAooNoFromCharNo(0);
            if (target == -1) {
                return;
            }
            goto fight;
        }
        SetDestination(unit, 0xD, 1);
        return;
    }
fight:
    if (distanceForBattle(target, unit) == 1) {
        changeOcc(3, unit, target, 0);
        return;
    }
    changeOcc(2, unit, target, 0);
}
