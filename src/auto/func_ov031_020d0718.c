#include "m2c.h"

typedef struct {
    u8 b[6];
} Flags6;
extern Flags6 data_ov031_020d2094;
s32 GetUnitStatus(s32);
s32 CalRnd(void);
s32 CountEnemyUnit(void);
void Routine_SetEvPosFadeIn(void);
void Routine_SetEvPos(s32);
void RecoverHpOrResourceByPer(s32, s32);

s32 func_ov031_020d0718(void) {
    Flags6 flags = data_ov031_020d2094;
    s32 sel;
    s32 ret = 0;
    s32 j;

    if (GetUnitStatus(0xf0c) == 2 || GetUnitStatus(0xf0c) == 3) {
        sel = 0;
        for (j = 0; j < 4; j++) {
            if (GetUnitStatus(j + 0xf10) == 0) {
                sel = flags.b[j];
            }
        }
        if (GetUnitStatus(0xf21) == 0) {
            if (CalRnd() % 100 < 0x32) {
                sel = 0x10;
            }
        }
        if (CountEnemyUnit() > 0x18) {
            sel = 0;
        }
        switch (sel) {
            case 0x1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x2);
                RecoverHpOrResourceByPer(0xf10, 100);
                break;
            case 0x2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x3);
                RecoverHpOrResourceByPer(0xf11, 100);
                break;
            case 0x4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x4);
                RecoverHpOrResourceByPer(0xf12, 100);
                break;
            case 0x8:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x5);
                RecoverHpOrResourceByPer(0xf13, 100);
                break;
            case 0x10:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x13);
                RecoverHpOrResourceByPer(0xf21, 100);
                break;
        }
    } else {
        ret++;
    }
    if (GetUnitStatus(0xf0d) == 2 || GetUnitStatus(0xf0d) == 3) {
        sel = 0;
        for (j = 0; j < 4; j++) {
            if (GetUnitStatus(j + 0xf14) == 0) {
                sel = flags.b[j];
            }
        }
        if (GetUnitStatus(0xf22) == 0) {
            if (CalRnd() % 100 < 0x32) {
                sel = 0x10;
            }
        }
        if (CountEnemyUnit() > 0x18) {
            sel = 0;
        }
        switch (sel) {
            case 0x1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x6);
                RecoverHpOrResourceByPer(0xf14, 100);
                break;
            case 0x2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x7);
                RecoverHpOrResourceByPer(0xf15, 100);
                break;
            case 0x4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x8);
                RecoverHpOrResourceByPer(0xf16, 100);
                break;
            case 0x8:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x9);
                RecoverHpOrResourceByPer(0xf17, 100);
                break;
            case 0x10:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x14);
                RecoverHpOrResourceByPer(0xf22, 100);
                break;
        }
    } else {
        ret++;
    }
    if (GetUnitStatus(0xf0e) == 2 || GetUnitStatus(0xf0e) == 3) {
        sel = 0;
        for (j = 0; j < 4; j++) {
            if (GetUnitStatus(j + 0xf18) == 0) {
                sel = flags.b[j];
            }
        }
        if (GetUnitStatus(0xf23) == 0) {
            if (CalRnd() % 100 < 0x32) {
                sel = 0x10;
            }
        }
        if (CountEnemyUnit() > 0x18) {
            sel = 0;
        }
        switch (sel) {
            case 0x1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0xa);
                RecoverHpOrResourceByPer(0xf18, 100);
                break;
            case 0x2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0xb);
                RecoverHpOrResourceByPer(0xf19, 100);
                break;
            case 0x4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0xc);
                RecoverHpOrResourceByPer(0xf1a, 100);
                break;
            case 0x8:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0xd);
                RecoverHpOrResourceByPer(0xf1b, 100);
                break;
            case 0x10:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x15);
                RecoverHpOrResourceByPer(0xf23, 100);
                break;
        }
    } else {
        ret++;
    }
    if (GetUnitStatus(0xf0f) == 2 || GetUnitStatus(0xf0f) == 3) {
        sel = 0;
        for (j = 0; j < 5; j++) {
            if (GetUnitStatus(j + 0xf1c) == 0) {
                sel = flags.b[j];
            }
        }
        if (GetUnitStatus(0xf24) == 0) {
            if (CalRnd() % 100 < 0x32) {
                sel = 0x20;
            }
        }
        if (CountEnemyUnit() > 0x18) {
            sel = 0;
        }
        switch (sel) {
            case 0x1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0xe);
                RecoverHpOrResourceByPer(0xf1c, 100);
                break;
            case 0x2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0xf);
                RecoverHpOrResourceByPer(0xf1d, 100);
                break;
            case 0x4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x10);
                RecoverHpOrResourceByPer(0xf1e, 100);
                break;
            case 0x8:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x11);
                RecoverHpOrResourceByPer(0xf1f, 100);
                break;
            case 0x10:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x12);
                RecoverHpOrResourceByPer(0xf20, 100);
                break;
            case 0x20:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x16);
                RecoverHpOrResourceByPer(0xf24, 100);
                break;
        }
    } else {
        ret++;
    }
    return ret;
}
