#include "m2c.h"

void Routine_SetEvPosFadeIn(void);
void Routine_SetEvPos(s32);
void RecoverHpOrResourceByPer(s32, s32);
s32 GetUnitStatus(s32);

typedef struct {
    u8 b[4];
} T4;
extern T4 data_ov018_020d286c;

s32 func_ov018_020d0580(void) {
    T4 sp = data_ov018_020d286c;
    s32 n = 0;
    s32 k;
    s32 i;

    if (GetUnitStatus(0xF0C) == 2 || GetUnitStatus(0xF0C) == 3) {
        k = 0;
        for (i = 0; i < 4; i++) {
            if (GetUnitStatus(i + 0xF11) == 0) {
                k = sp.b[i];
            }
        }
        switch (k) {
            case 1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(1);
                RecoverHpOrResourceByPer(0xF11, 100);
                break;
            case 2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(2);
                RecoverHpOrResourceByPer(0xF12, 100);
                break;
            case 4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(3);
                RecoverHpOrResourceByPer(0xF13, 100);
                break;
            case 8:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(4);
                RecoverHpOrResourceByPer(0xF14, 100);
                break;
        }
    } else {
        n += 1;
    }
    if (GetUnitStatus(0xF0D) == 2 || GetUnitStatus(0xF0D) == 3) {
        k = 0;
        for (i = 0; i < 4; i++) {
            if (GetUnitStatus(i + 0xF15) == 0) {
                k = sp.b[i];
            }
        }
        switch (k) {
            case 1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(5);
                RecoverHpOrResourceByPer(0xF15, 100);
                break;
            case 2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(6);
                RecoverHpOrResourceByPer(0xF16, 100);
                break;
            case 4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(7);
                RecoverHpOrResourceByPer(0xF17, 100);
                break;
            case 8:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(8);
                RecoverHpOrResourceByPer(0xF18, 100);
                break;
        }
    } else {
        n += 1;
    }
    if (GetUnitStatus(0xF0E) == 2 || GetUnitStatus(0xF0E) == 3) {
        k = 0;
        for (i = 0; i < 4; i++) {
            if (GetUnitStatus(i + 0xF19) == 0) {
                k = sp.b[i];
            }
        }
        switch (k) {
            case 1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(9);
                RecoverHpOrResourceByPer(0xF19, 100);
                break;
            case 2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(10);
                RecoverHpOrResourceByPer(0xF1A, 100);
                break;
            case 4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(11);
                RecoverHpOrResourceByPer(0xF1B, 100);
                break;
            case 8:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(12);
                RecoverHpOrResourceByPer(0xF1C, 100);
                break;
        }
    } else {
        n |= 4;
    }
    if (GetUnitStatus(0xF0F) == 2 || GetUnitStatus(0xF0F) == 3) {
        k = 0;
        for (i = 0; i < 4; i++) {
            if (GetUnitStatus(i + 0xF1D) == 0) {
                k = sp.b[i];
            }
        }
        switch (k) {
            case 1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(13);
                RecoverHpOrResourceByPer(0xF1D, 100);
                break;
            case 2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(14);
                RecoverHpOrResourceByPer(0xF1E, 100);
                break;
            case 4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(15);
                RecoverHpOrResourceByPer(0xF1F, 100);
                break;
            case 8:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(16);
                RecoverHpOrResourceByPer(0xF20, 100);
                break;
        }
    } else {
        n += 1;
    }
    if (GetUnitStatus(0xF10) == 2 || GetUnitStatus(0xF10) == 3) {
        k = 0;
        for (i = 0; i < 4; i++) {
            if (GetUnitStatus(i + 0xF21) == 0) {
                k = sp.b[i];
            }
        }
        switch (k) {
            case 1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(17);
                RecoverHpOrResourceByPer(0xF21, 100);
                break;
            case 2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(18);
                RecoverHpOrResourceByPer(0xF22, 100);
                break;
            case 4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(19);
                RecoverHpOrResourceByPer(0xF23, 100);
                break;
            case 8:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(20);
                RecoverHpOrResourceByPer(0xF24, 100);
                break;
        }
    } else {
        n += 1;
    }
    return n;
}
