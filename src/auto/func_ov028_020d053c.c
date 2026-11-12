typedef struct {
    unsigned char b[6];
} T;
extern T data_ov028_020d1b20;
int GetUnitStatus(int);
void Routine_SetEvPosFadeIn(void);
void Routine_SetEvPos(int);
void RecoverHpOrResourceByPer(int, int);

int func_ov028_020d053c(void) {
    T t   = data_ov028_020d1b20;
    int n = 0;
    int r;
    int i;
    if (GetUnitStatus(0xF09) == 2 || GetUnitStatus(0xF09) == 3) {
        r = 0;
        for (i = 0; i < 3; i++) {
            if (GetUnitStatus(0xF0E + i) == 0) {
                r = t.b[i];
            }
        }
        switch (r) {
            case 1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(2);
                RecoverHpOrResourceByPer(0xF0E, 100);
                break;
            case 2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(3);
                RecoverHpOrResourceByPer(0xF0F, 100);
                break;
            case 4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(4);
                RecoverHpOrResourceByPer(0xF10, 100);
                break;
        }
    } else {
        n++;
    }
    if (GetUnitStatus(0xF0A) == 2 || GetUnitStatus(0xF0A) == 3) {
        r = 0;
        for (i = 0; i < 3; i++) {
            if (GetUnitStatus(0xF11 + i) == 0) {
                r = t.b[i];
            }
        }
        switch (r) {
            case 1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(5);
                RecoverHpOrResourceByPer(0xF11, 100);
                break;
            case 2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(6);
                RecoverHpOrResourceByPer(0xF12, 100);
                break;
            case 4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(7);
                RecoverHpOrResourceByPer(0xF13, 100);
                break;
        }
    } else {
        n++;
    }
    if (GetUnitStatus(0xF0B) == 2 || GetUnitStatus(0xF0B) == 3) {
        r = 0;
        for (i = 0; i < 4; i++) {
            if (GetUnitStatus(0xF14 + i) == 0) {
                r = t.b[i];
            }
        }
        switch (r) {
            case 1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(8);
                RecoverHpOrResourceByPer(0xF14, 100);
                break;
            case 2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(9);
                RecoverHpOrResourceByPer(0xF15, 100);
                break;
            case 4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(10);
                RecoverHpOrResourceByPer(0xF16, 100);
                break;
            case 8:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(11);
                RecoverHpOrResourceByPer(0xF17, 100);
                break;
        }
    } else {
        n++;
    }
    if (GetUnitStatus(0xF0C) == 2 || GetUnitStatus(0xF0C) == 3) {
        r = 0;
        for (i = 0; i < 4; i++) {
            if (GetUnitStatus(0xF18 + i) == 0) {
                r = t.b[i];
            }
        }
        switch (r) {
            case 1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(12);
                RecoverHpOrResourceByPer(0xF18, 100);
                break;
            case 2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(13);
                RecoverHpOrResourceByPer(0xF19, 100);
                break;
            case 4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(14);
                RecoverHpOrResourceByPer(0xF1A, 100);
                break;
            case 8:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(15);
                RecoverHpOrResourceByPer(0xF1B, 100);
                break;
        }
    } else {
        n++;
    }
    if (GetUnitStatus(0xF0D) == 2 || GetUnitStatus(0xF0D) == 3) {
        r = 0;
        for (i = 0; i < 6; i++) {
            if (GetUnitStatus(0xF1C + i) == 0) {
                r = t.b[i];
            }
        }
        switch (r) {
            case 1:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(16);
                RecoverHpOrResourceByPer(0xF1C, 100);
                break;
            case 2:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(17);
                RecoverHpOrResourceByPer(0xF1D, 100);
                break;
            case 4:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(18);
                RecoverHpOrResourceByPer(0xF1E, 100);
                break;
            case 8:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(19);
                RecoverHpOrResourceByPer(0xF1F, 100);
                break;
            case 16:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(20);
                RecoverHpOrResourceByPer(0xF20, 100);
                break;
            case 32:
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(21);
                RecoverHpOrResourceByPer(0xF21, 100);
                break;
        }
    } else {
        n++;
    }
    return n;
}
