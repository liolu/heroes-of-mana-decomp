/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

void OS_SleepThread(s32);                    /* extern */
void ReleaseRetryData(void);                      /* extern */
void InitializeKuniAndUnit(void);                      /* extern */
void InitializeOtherKuniAndUnit(void);                      /* extern */
void Routine_FadeOutAll(void);                      /* extern */
void Routine_FadeInAll(void);                      /* extern */
void Routine_FadeOutAllWithMoveByCount(s32);               /* extern */
void Routine_FadeInAllWithMoveByCount(s32);               /* extern */
void Routine_PutEventTitle(s32, s32);      /* extern */
void WaitSyncUnit(s32);               /* extern */
void WaitSyncCounter(s32);               /* extern */
void Routine_KyotenChange(s32);               /* extern */
void ObjSet_allclear(void);                      /* extern */
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32); /* extern */
void Routine_MessageRect(s32, s32, s32, s32); /* extern */
void MessagePutAndWait(s32);                   /* extern */
void EventDurringTitle(s32);                   /* extern */
void SetTitleNameNo(s32);               /* extern */
void StopMovingGame(void);                      /* extern */
void Routine_SetEvPos(s32);               /* extern */
void ObjSet(s32, s32, s32, s32); /* extern */
void Routine_SaveGo(void);                      /* extern */
void Routine_WorldMap2(s32);               /* extern */
s32 GetUnitStatus(s32);                   /* extern */
void GetHpOrResourceAndMax(s32, s32, s32); /* extern */
void RecoverHpOrResourceByPer(s32, s32);      /* extern */
void KuniNameSet(s32, s32);      /* extern */
void SetUpSallyForCharNo(s32, s32);      /* extern */
void Routine_SetEvPosMode(s32);               /* extern */
void SelectCarisumaChar(void);                      /* extern */
void cameraTargetIconOFF(void);                      /* extern */
void HpBar_Status_IconOFF(void);                      /* extern */
void SetPlanTimer(s32);               /* extern */
s32 GetPlanTimer(void);                          /* extern */
void Routine_SetEvPosFadeIn(void);                      /* extern */
void EndScriptRoutine(void);                      /* extern */
void InitializeSiteOfAreaMap(void);                      /* extern */
void PutOnePlanePicUP_LCD(s32);               /* extern */
void PutAreaMapUP_LCD(void);                      /* extern */
void StockDataForRetry(void);                      /* extern */
void SG_setParty(void);                      /* extern */
void SG_judgeAdvantage(s32);               /* extern */
void MTG_SaveParaReset(void);                      /* extern */
void MTG_CarisumaPosArrange(void *, void *);  /* extern */
void MTG_BGM_FadeOutAndChange(s32);               /* extern */
void MTG_BecomeDarkScreen(void);                      /* extern */
void MTG_ReturnDarkScreen(void);                      /* extern */
void MTG_StartEvent(void);                      /* extern */
void MTG_StartLastEvent(s32);               /* extern */
void MTG_EndEvent(void);                      /* extern */
void MTG_BattleStart(s32, s32);      /* extern */
void MTG_GameOver(s32, s32);          /* extern */
void func_ov024_020d0160(void);                      /* extern */
void func_ov024_020d0190(void);                      /* extern */
s32 func_ov024_020d06e4(void);                          /* extern */
s32 func_ov024_020d0730(void);                          /* extern */
s32 func_ov024_020d077c(void);                          /* extern */
void func_ov024_020d07c8(void);                      /* extern */
void func_ov024_020d0858(void);                      /* extern */
typedef struct {
    s32 w[7];
} Copy7;
typedef struct {
    u8 pad0[0x3A];
    s16 h3A;
    u8 pad3C[0x4];
    s32 w40;
    u8 pad44[0x8];
    s32 w4C;
    u8 pad50[0x44];
    s32 w94;
    s32 w98;
    s32 w9C;
    u8 padA0[0x30];
    u32 f0 : 5;
    u32 f5 : 1;
    u32 f6 : 7;
    u32 f13 : 4;
    u32 f17 : 15;
    u32 step : 16;
    u32 stepHi : 16;
    u8 padD8[0x688];
    u32 b0 : 1;
    u32 brest : 31;
} SceneWork;
extern SceneWork *data_ov000_02051548;
extern Copy7 data_ov024_020d1a5c;
extern Copy7 data_ov024_020d1a78;

void func_ov024_020d087c(void) {
    Copy7 sp30;
    Copy7 sp14;
    s32 sp10;
    s32 spC;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 var_r6_4;
    s32 var_r6_5;
    s32 var_r6_6;
    void *temp_r4_3;

    sp30 = data_ov024_020d1a5c;
    sp14 = data_ov024_020d1a78;

    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                InitializeOtherKuniAndUnit();
                if (data_ov000_02051548->f5 != 0) {
                    InitializeKuniAndUnit();
                }
                Routine_FadeOutAll();
                MTG_BGM_FadeOutAndChange(0x2C);
                Routine_WorldMap2(0x17);
                MTG_BGM_FadeOutAndChange(0x2E);
                Routine_PutEventTitle(0x13, 0);
                MTG_BGM_FadeOutAndChange(0x24);
                Routine_KyotenChange(0x12);
                ObjSet_allclear();
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 0, 0x1D, 0x14, 0x7EE, 0x410, 0xE6);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                WaitSyncCounter(0xA);
                Routine_FadeInAllWithMoveByCount(0x3C);
                Routine_MessageRect(2, 5, 0x1C, 0xA);
                WaitSyncCounter(0x3C);
                MTG_BecomeDarkScreen();
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x76C);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                MTG_ReturnDarkScreen();
                WaitSyncCounter(0x1E);
                Routine_FadeOutAllWithMoveByCount(0x3C);
                Routine_SetEvPos(0);
                Routine_SetEvPos(1);
                StopMovingGame();
                ObjSet(0, 5, 0, 0);
                ObjSet(0x1D, 0x21, 1, 0);
                CameraMoveAndWait(1, 1, 0, 0, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0xA);
                Routine_FadeInAllWithMoveByCount(0x3C);
                WaitSyncCounter(0x5A);
                ObjSet(0xA, 1, 0x96, 0);
                ObjSet(0xA, 0x17, 1, 0);
                WaitSyncUnit(0xA);
                WaitSyncCounter(0x3C);
                CameraMoveAndWait(0x78, 1, 0x1D, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x1E, 1, 0x1D, 0, -1, 0x334, 0xFA);
                WaitSyncCounter(0x3C);
                ObjSet(0x1D, 1, 0x96, 0);
                ObjSet(0x1D, 0x17, -1, 0);
                WaitSyncUnit(0x1D);
                WaitSyncCounter(0x1E);
                var_r6 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r6 += 1;
                } while (var_r6 < 6);
                ObjSet(0xA, 2, 0, 0);
                ObjSet(0x1D, 2, 0, 0);
                StockDataForRetry();
                EventDurringTitle(0x76C);
            /* fallthrough */
            case 0x76C:
                InitializeOtherKuniAndUnit();
                func_ov024_020d0190();
                MTG_SaveParaReset();
                SetTitleNameNo(0x25);
                InitializeSiteOfAreaMap();
                data_ov000_02051548->w94 = func_ov024_020d06e4();
                data_ov000_02051548->w98 = func_ov024_020d0730();
                data_ov000_02051548->w9C = func_ov024_020d077c();
                Routine_FadeOutAll();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SG_setParty();
                data_ov000_02051548->f13 = 5;
                SetUpSallyForCharNo(0, 2);
                SetUpSallyForCharNo(0xA, 2);
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                Routine_SetEvPos(1);
                Routine_SetEvPos(2);
                WaitSyncCounter(0xA);
                ObjSet(0, 5, 0, 0);
                MTG_CarisumaPosArrange(&sp30, &sp14);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 1, 0, 0, 0x3E8, 0x2EE, 0xBE);
                ObjSet(0, 0x14, 0, 0);
                ObjSet(0xA, 0x14, 0, 0);
                ObjSet(0x1D, 0x14, 0, 0);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x11);
                KuniNameSet(0, 1);
                KuniNameSet(1, 4);
                MTG_BattleStart(0x26, 0x13);
                EventDurringTitle(0x76D);
            /* fallthrough */
            case 0x76D:
                if (GetUnitStatus(0) == 1) {
                    data_ov000_02051548->step = 0x7CA;
                } else if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x7CC;
                } else if (GetUnitStatus(0x10) == 0) {
                    data_ov000_02051548->step = 0x7CE;
                } else if ((GetUnitStatus(0x1D) == 1) && (data_ov000_02051548->w40 == 0)) {
                    data_ov000_02051548->w40  = 1;
                    data_ov000_02051548->step = 0x76E;
                } else {
                    temp_r4_3 = data_ov000_02051548;
                    if ((GetPlanTimer() > (s32) M2C_FIELD(temp_r4_3, s32 *, 0x94)) &&
                        (M2C_FIELD(temp_r4_3, s32 *, 0x40) == 1)) {
                        M2C_FIELD(temp_r4_3, s32 *, 0x40) = 0;
                        data_ov000_02051548->step         = 0x770;
                    } else {
                        GetHpOrResourceAndMax(0xA, &sp10, &spC);
                        if ((sp10 < ((spC * 0x19) / 100)) && (data_ov000_02051548->w4C == 0)) {
                            data_ov000_02051548->w4C  = 1;
                            data_ov000_02051548->step = 0x772;
                        } else if (GetUnitStatus(0xA) == 1) {
                            data_ov000_02051548->step = 0x774;
                        } else {
                            func_ov024_020d07c8();
                            SG_judgeAdvantage(0x11);
                            data_ov000_02051548->b0 = 0;
                            OS_SleepThread(0);
                            data_ov000_02051548->step = 0x76D;
                        }
                    }
                }
                break;
            case 0x76E:
                MTG_StartEvent();
                ObjSet(0x1D, 0x21, 1, 0);
                CameraMoveAndWait(0x3C, 1, 0x1D, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                ObjSet(0x1D, 0xE, 0xA, 0);
                ObjSet(0x1D, 0x1B, 1, 0);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x776);
                WaitSyncCounter(0xF);
                ObjSet(0x1D, 0x15, 1, 0);
                WaitSyncCounter(0x1E);
                ObjSet(0x1D, 0x21, 2, 0);
                func_ov024_020d0858();
                EventDurringTitle(0x76F);
            /* fallthrough */
            case 0x76F:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x76D;
                break;
            case 0x770:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                ObjSet(0x1D, 0x21, 1, 0);
                CameraMoveAndWait(0x3C, 0, 0x23, 0x13, -1, -1, -1);
                WaitSyncCounter(0x1E);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(1);
                WaitSyncUnit(0x1D);
                RecoverHpOrResourceByPer(0x1D, 0x64);
                MessagePutAndWait(0x780);
                WaitSyncCounter(0xF);
                SetPlanTimer(0);
                ObjSet(0x1D, 0x21, 2, 0);
                EventDurringTitle(0x771);
            /* fallthrough */
            case 0x771:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x76D;
                break;
            case 0x772:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xA, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                ObjSet(0xA, 0xE, 0xA, 0);
                ObjSet(0xA, 0x1B, 1, 0);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x785);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                ObjSet(0xA, 0xE, 0, 0);
                ObjSet(0xA, 0x1B, 0, 0);
                WaitSyncCounter(0x1E);
                EventDurringTitle(0x773);
            /* fallthrough */
            case 0x773:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x76D;
                break;
            case 0x774:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xA, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x78A);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                MTG_GameOver(0x13, 0x76C);
                EventDurringTitle(0x7CA);
            case 0x7CA:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x541);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x7CB);
            case 0x7CB:
                MTG_GameOver(0x13, 0x76C);
                EventDurringTitle(0x7CC);
            case 0x7CC:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x79E);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x7CD);
            case 0x7CD:
                MTG_GameOver(0x13, 0x76C);
                EventDurringTitle(0x7CE);
            /* fallthrough */
            case 0x7CE:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xA, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x7A8);
                WaitSyncCounter(0x3C);
                MTG_StartLastEvent(0x13);
                MTG_BGM_FadeOutAndChange(0x24);
                ObjSet_allclear();
                Routine_SetEvPos(3);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 0, 0x18, 0x14, 0x3E8, 0x41A, 0xBE);
                ObjSet(0x1D, 0xE, 0xA, 0);
                ObjSet(0x1D, 0x1B, 1, 0);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                WaitSyncCounter(0x5A);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                var_r6_2 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r6_2 += 1;
                } while (var_r6_2 < 2);
                WaitSyncCounter(0x1E);
                ObjSet(0x1D, 0xE, 0, 0);
                ObjSet(0x1D, 0x1B, 0, 0);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                ObjSet(0xA, 3, 5, 0);
                WaitSyncCounter(0xF);
                ObjSet(0xA, 3, 4, 0);
                WaitSyncCounter(0x1E);
                var_r6_3 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r6_3 += 1;
                } while (var_r6_3 < 2);
                WaitSyncCounter(0x1E);
                ObjSet(0x1D, 3, 3, 0);
                WaitSyncCounter(0xF);
                ObjSet(0x1D, 3, 4, 0);
                WaitSyncCounter(0x78);
                ObjSet(0xA, 3, 5, 0);
                WaitSyncCounter(0xF);
                ObjSet(0xA, 3, 6, 0);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x1E);
                ObjSet(0x1D, 3, 3, 0);
                WaitSyncCounter(0xF);
                ObjSet(0x1D, 3, 2, 0);
                WaitSyncCounter(0x1E);
                var_r6_4 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r6_4 += 1;
                } while (var_r6_4 < 3);
                WaitSyncCounter(0xF);
                ObjSet(0xA, 0x17, 1, 0);
                WaitSyncUnit(0xA);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x78);
                var_r6_5 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r6_5 += 1;
                } while (var_r6_5 < 3);
                WaitSyncCounter(0x3C);
                var_r6_6 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r6_6 += 1;
                } while (var_r6_6 < 2);
                WaitSyncCounter(0x1E);
                ObjSet(0xA, 0xE, 0xC, 0);
                WaitSyncCounter(0xEA);
                ObjSet(0xA, 0xE, 0, 0);
                WaitSyncCounter(0x5A);
                ObjSet(0xA, 0x17, -6, 0);
                WaitSyncCounter(0x5A);
                CameraMoveAndWait(0x3C, 0, 0x18, 0x14, -1, 0xE6, 0xDC);
                WaitSyncUnit(0xA);
                WaitSyncCounter(0x3C);
                ObjSet(0, 1, 0x12C, 0);
                ObjSet(1, 1, 0x12C, 0);
                ObjSet(2, 1, 0x12C, 0);
                ObjSet(3, 1, 0x12C, 0);
                ObjSet(4, 1, 0x12C, 0);
                ObjSet(5, 1, 0x12C, 0);
                ObjSet(6, 1, 0x12C, 0);
                ObjSet(7, 1, 0x12C, 0);
                ObjSet(8, 1, 0x12C, 0);
                ObjSet(9, 1, 0x12C, 0);
                ObjSet(0xA, 1, 0x12C, 0);
                ObjSet(0, 0x17, -7, 0);
                ObjSet(1, 0x17, -7, 0);
                ObjSet(2, 0x17, -7, 0);
                ObjSet(3, 0x17, -7, 0);
                ObjSet(4, 0x17, -7, 0);
                ObjSet(5, 0x17, -7, 0);
                ObjSet(6, 0x17, -7, 0);
                ObjSet(7, 0x17, -7, 0);
                ObjSet(8, 0x17, -7, 0);
                ObjSet(9, 0x17, -7, 0);
                WaitSyncCounter(0x1E);
                ObjSet(0xA, 0x17, -7, 0);
                WaitSyncCounter(0x3C);
                ObjSet(0x1D, 1, 0x64, 0);
                ObjSet(0x1D, 0x17, -1, 0);
                WaitSyncUnit(0x1D);
                WaitSyncCounter(0x96);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAllWithMoveByCount(0x3C);
                SetTitleNameNo(0x26);
                func_ov024_020d0160();
                MTG_BGM_FadeOutAndChange(0x26);
                EventDurringTitle(0x7CF);
                Routine_SaveGo();
                EventDurringTitle(0x7CF);
            case 0x7CF:
                data_ov000_02051548->h3A = 0x14;
                data_ov000_02051548->b0  = 0;
                OS_SleepThread(0);
                EndScriptRoutine();
                break;
        }
    }
}
