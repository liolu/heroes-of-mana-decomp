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
void MessagePutAndWait(s32);                   /* extern */
void EventDurringTitle(s32);                   /* extern */
void SetTitleNameNo(s32);               /* extern */
void StopMovingGame(void);                      /* extern */
void Routine_SetEvPos(s32);               /* extern */
void ObjSet(s32, s32, s32, s32); /* extern */
void Routine_SaveGo(void);                      /* extern */
void Routine_WorldMap2(s32);               /* extern */
void Routine_ScreenRGB_ON(void);                      /* extern */
void Routine_ScreenRGB_rgb(s32, s32, s32, s32); /* extern */
void Routine_ScreenRGB_alpha(s32, s32, s32); /* extern */
void Routine_ScreenRGB_OFF(void);                      /* extern */
void Routine_SoundEffect(s32);                   /* extern */
void Routine_StopSoundEffect(s32, s32);          /* extern */
s32 GetUnitStatus(s32);                   /* extern */
s32 checkCanSeeUnit(s32);                       /* extern */
void GetHpOrResourceAndMax(s32, s32, s32); /* extern */
void KuniNameSet(s32, s32);      /* extern */
void SetUpSallyForCharNo(s32, s32);      /* extern */
void Routine_SetEvPosMode(s32);               /* extern */
void SelectCarisumaChar(void);                      /* extern */
void Routine_ShakeScreen(s32, s32);      /* extern */
void cameraTargetIconOFF(void);                      /* extern */
void HpBar_Status_IconOFF(void);                      /* extern */
void MoveOnPlanTimer(void);                      /* extern */
s32 GetPlanTimer(void);                          /* extern */
void Routine_SetEvPosFadeIn(void);                      /* extern */
void EndScriptRoutine(void);                      /* extern */
void StartPictureEvent(s32);               /* extern */
void InitializeSiteOfAreaMap(void);                      /* extern */
void PutOnePlanePicUP_LCD(s32);               /* extern */
void PutAreaMapUP_LCD(void);                      /* extern */
void StockDataForRetry(void);                      /* extern */
void SetAikyoEffectWithXYZ(s32, s32, s32, s32, s32, s32, s32); /* extern */
void TG_BattleRestart(s32, s32);      /* extern */
void TG_setObjDirection_withRelay(s32, s32);      /* extern */
void SG_setParty(void);                      /* extern */
void SG_judgeAdvantage(s32);               /* extern */
void MTG_SaveParaReset(void);                      /* extern */
void MTG_CarisumaPosArrange(void *, void *);  /* extern */
void MTG_BGM_FadeOutAndChange(s32);               /* extern */
void MTG_StartEvent(void);                      /* extern */
void MTG_StartLastEvent(s32);               /* extern */
void MTG_EndEvent(void);                      /* extern */
void MTG_BattleStart(s32, s32);      /* extern */
void MTG_GameOver(s32, s32);      /* extern */
void func_ov025_020d0160(void);                      /* extern */
void func_ov025_020d019c(void);                      /* extern */
void func_ov025_020d06f0(s32);               /* extern */
s32 func_ov025_020d0740(void);                          /* extern */
s32 func_ov025_020d078c(void);                          /* extern */
s32 func_ov025_020d07d8(void);                          /* extern */
void func_ov025_020d0824(void);                      /* extern */
typedef struct {
    s32 w[7];
} Copy7;
typedef struct {
    u8 pad0[0x3A];
    s16 h3A;
    u8 pad3C[0x4];
    s32 w40;
    u8 pad44[0x4];
    s32 w48;
    u8 pad4C[0x48];
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
extern Copy7 data_ov025_020d1c1c;
extern Copy7 data_ov025_020d1c38;

void func_ov025_020d08b4(void) {
    Copy7 sp30;
    Copy7 sp14;
    s32 sp10;
    s32 spC;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    void *temp_r6_3;

    sp30   = data_ov025_020d1c1c;
    sp14   = data_ov025_020d1c38;
    var_r5 = 0;
    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                InitializeOtherKuniAndUnit();
                if (data_ov000_02051548->f5 != 0) {
                    InitializeKuniAndUnit();
                }
                Routine_FadeOutAll();
                MTG_BGM_FadeOutAndChange(7);
                Routine_WorldMap2(0x18);
                StartPictureEvent(0xC8);
                EventDurringTitle(0x7DB);
            /* fallthrough */
            case 0x7DB:
                MTG_BGM_FadeOutAndChange(7);
                Routine_WorldMap2(0x19);
                MTG_BGM_FadeOutAndChange(0x2E);
                Routine_PutEventTitle(0x14, 0);
                MTG_BGM_FadeOutAndChange(0x20);
                Routine_KyotenChange(0x13);
                ObjSet_allclear();
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                Routine_SetEvPos(0);
                WaitSyncCounter(0xA);
                ObjSet(5, 0x15, 0, 0);
                ObjSet(6, 0x15, 0, 0);
                ObjSet(7, 0x15, 0, 0);
                ObjSet(8, 0x15, 0, 0);
                ObjSet(0xA, 0x15, 0, 0);
                ObjSet(0xB, 0x15, 0, 0);
                var_r8 = 0;
                do {
                    ObjSet(var_r8 + 0xF00, 0x15, 0, 0);
                    var_r8 += 1;
                } while (var_r8 < 0xA);
                StopMovingGame();
                ObjSet(0, 5, 0, 0);
                CameraMoveAndWait(1, 1, 0, 0, 0x3E8, 0x456, 0xDC);
                WaitSyncCounter(0xA);
                ObjSet(0, 1, 0xC8, 0);
                ObjSet(1, 1, 0xC8, 0);
                ObjSet(2, 1, 0xC8, 0);
                ObjSet(3, 1, 0xC8, 0);
                ObjSet(4, 1, 0xC8, 0);
                ObjSet(9, 1, 0xC8, 0);
                ObjSet(0, 0x17, 0, -2);
                ObjSet(1, 0x17, 0, -2);
                ObjSet(2, 0x17, 0, -2);
                ObjSet(3, 0x17, 0, -2);
                ObjSet(4, 0x17, 0, -2);
                ObjSet(9, 0x17, 0, -2);
                Routine_FadeInAllWithMoveByCount(0x3C);
                WaitSyncUnit(9);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x7E4);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                CameraMoveAndWait(0x3C, 1, 0, 0, -1, 0x2EE, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x5A, 0, 0x1E, 0xC, 0x672, -1, -1);
                WaitSyncCounter(0x3C);
                WaitSyncCounter(0x1E);
                var_r8_2 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r8_2 += 1;
                } while (var_r8_2 < 3);
                StockDataForRetry();
                EventDurringTitle(0x7D0);
            /* fallthrough */
            case 0x7D0:
                InitializeOtherKuniAndUnit();
                func_ov025_020d019c();
                MTG_SaveParaReset();
                SetTitleNameNo(0x27);
                InitializeSiteOfAreaMap();
                data_ov000_02051548->w94 = func_ov025_020d0740();
                data_ov000_02051548->w98 = func_ov025_020d078c();
                data_ov000_02051548->w9C = func_ov025_020d07d8();
                Routine_FadeOutAll();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SG_setParty();
                data_ov000_02051548->f13 = 5;
                SetUpSallyForCharNo(0, 2);
                SetUpSallyForCharNo(1, 2);
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
                ObjSet(1, 0x14, 0, 0);
                ObjSet(0x21, 0x14, 0, 0);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x27);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x27, 0x14);
                EventDurringTitle(0x7D1);
            /* fallthrough */
            case 0x7D1:
                if (GetUnitStatus(0) == 1) {
                    data_ov000_02051548->step = 0x82E;
                } else if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x830;
                } else if (GetUnitStatus(1) == 1) {
                    data_ov000_02051548->step = 0x7D9;
                } else if (GetUnitStatus(0x21) == 1) {
                    data_ov000_02051548->step = 0x832;
                } else {
                    var_r6 = 0;
                    do {
                        if ((checkCanSeeUnit(var_r6 + 0xF0A) != 0) && (data_ov000_02051548->w40 == 0)) {
                            var_r5                   = var_r6;
                            var_r4                   = 1;
                            data_ov000_02051548->w40 = 1;
                        }
                        var_r6 += 1;
                    } while (var_r6 < 9);
                    if ((checkCanSeeUnit(0x21) != 0) && (data_ov000_02051548->w40 == 0)) {
                        var_r4                   = 1;
                        data_ov000_02051548->w40 = 1;
                        var_r5                   = 0x64;
                    }
                    if (var_r4 == 1) {
                        var_r4                    = 0;
                        data_ov000_02051548->step = 0x7D2;
                    } else {
                        temp_r6_3 = data_ov000_02051548;
                        if ((GetPlanTimer() > (s32) M2C_FIELD(temp_r6_3, s32 *, 0x94)) &&
                            (M2C_FIELD(temp_r6_3, s32 *, 0x44) == 0)) {
                            M2C_FIELD(temp_r6_3, s32 *, 0x44) = 1;
                            data_ov000_02051548->step         = 0x7D4;
                        } else {
                            GetHpOrResourceAndMax(1, &sp10, &spC);
                            if ((sp10 < ((spC * 0x19) / 100)) && (data_ov000_02051548->w48 == 0)) {
                                data_ov000_02051548->w48  = 1;
                                data_ov000_02051548->step = 0x7D7;
                            } else {
                                func_ov025_020d0824();
                                if (data_ov000_02051548->w40 == 0) {
                                    SG_judgeAdvantage(0x27);
                                } else {
                                    SG_judgeAdvantage(0x17);
                                }
                                data_ov000_02051548->b0 = 0;
                                OS_SleepThread(0);
                                data_ov000_02051548->step = 0x7D1;
                            }
                        }
                    }
                }
                break;
            case 0x7D2:
                MTG_StartEvent();
                if (var_r5 == 0x64) {
                    CameraMoveAndWait(0x3C, 1, 0x21, 0, -1, 0x3D4, 0x10E);
                    WaitSyncCounter(0x1E);
                    MessagePutAndWait(0x7EF);
                    WaitSyncCounter(0xF);
                    WaitSyncCounter(0x3C);
                } else {
                    CameraMoveAndWait(0x3C, 1, var_r5 + 0xF0A, 0xE, -1, -1, -1);
                    WaitSyncCounter(0x1E);
                    MessagePutAndWait(0x7EE);
                    WaitSyncCounter(0xF);
                    WaitSyncCounter(0x3C);
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    WaitSyncCounter(0x1E);
                    ObjSet(0x21, 0x21, 1, 0);
                    CameraMoveAndWait(0x3C, 1, 0x21, 0, -1, 0x3D4, 0x10E);
                    WaitSyncCounter(0x3C);
                }
                var_r8_3 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r8_3 += 1;
                } while (var_r8_3 < 3);
                WaitSyncCounter(0x3C);
                var_r8_4 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r8_4 += 1;
                } while (var_r8_4 < 2);
                WaitSyncCounter(0x3C);
                TG_setObjDirection_withRelay(0x21, 4);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x2D);
                TG_setObjDirection_withRelay(0x21, 2);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x2D);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x5A);
                var_r8_5 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r8_5 += 1;
                } while (var_r8_5 < 2);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0x21, 0, -1, 0x41A, 0xBE);
                WaitSyncCounter(0x1E);
                MTG_BGM_FadeOutAndChange(0x17);
                ObjSet(0x21, 0x21, 2, 0);
                MoveOnPlanTimer();
                EventDurringTitle(0x7D3);
            /* fallthrough */
            case 0x7D3:
                TG_BattleRestart(0x28, 0x14);
                data_ov000_02051548->step = 0x7D1;
                break;
            case 0x7D4:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                ObjSet(0x21, 0x21, 1, 0);
                CameraMoveAndWait(0x3C, 1, 0x21, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(3);
                WaitSyncCounter(0xA);
                func_ov025_020d06f0(3);
                ObjSet(0xF13, 0x21, 1, 0);
                ObjSet(0xF14, 0x21, 1, 0);
                ObjSet(0xF15, 0x21, 1, 0);
                MessagePutAndWait(0x7FD);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAllWithMoveByCount(0x14);
                CameraMoveAndWait(1, 1, 0xF13, 0, -1, 0x2EE, -1);
                WaitSyncCounter(0x1E);
                Routine_FadeInAllWithMoveByCount(0x14);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAllWithMoveByCount(0x14);
                CameraMoveAndWait(1, 1, 0xF14, 0, -1, 0x41A, -1);
                ObjSet(0xF14, 3, 4, 0);
                WaitSyncCounter(0x1E);
                Routine_FadeInAllWithMoveByCount(0x14);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAllWithMoveByCount(0x14);
                CameraMoveAndWait(1, 1, 0xF15, 0, -1, 0x2EE, -1);
                ObjSet(0xF15, 3, 2, 0);
                WaitSyncCounter(0x1E);
                Routine_FadeInAllWithMoveByCount(0x14);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAllWithMoveByCount(0x14);
                CameraMoveAndWait(1, 1, 0x21, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                Routine_FadeInAllWithMoveByCount(0x14);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                ObjSet(0x21, 0x21, 2, 0);
                ObjSet(0xF13, 0x21, 2, 0);
                ObjSet(0xF14, 0x21, 2, 0);
                ObjSet(0xF15, 0x21, 2, 0);
                EventDurringTitle(0x7D5);
            /* fallthrough */
            case 0x7D5:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x7D1;
                break;
            case 0x7D7:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 1, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                ObjSet(1, 0xE, 0xA, 0);
                ObjSet(1, 0x1B, 1, 0);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x7FF);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                ObjSet(1, 0xE, 0, 0);
                ObjSet(1, 0x1B, 0, 0);
                WaitSyncCounter(0x1E);
                MoveOnPlanTimer();
                EventDurringTitle(0x7D8);
            /* fallthrough */
            case 0x7D8:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x7D1;
                break;
            case 0x7D9:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 1, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x802);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                MTG_GameOver(0x14, 0x7D0);
                EventDurringTitle(0x82E);
            case 0x82E:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x807);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x82F);
            case 0x82F:
                MTG_GameOver(0x14, 0x7D0);
                EventDurringTitle(0x830);
            case 0x830:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x80C);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x831);
            case 0x831:
                MTG_GameOver(0x14, 0x7D0);
                EventDurringTitle(0x832);
            /* fallthrough */
            case 0x832:
                MTG_StartEvent();
                ObjSet(0x21, 0x21, 1, 0);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0x21, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                ObjSet(0x21, 0xE, 0xA, 0);
                ObjSet(0x21, 0x1B, 1, 0);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x811);
                WaitSyncCounter(0x3C);
                MTG_StartLastEvent(0x14);
                MTG_BGM_FadeOutAndChange(0x20);
                ObjSet_allclear();
                Routine_SetEvPos(4);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 0, 0x1D, 0xD, 0x3E8, 0x294, 0xF0);
                ObjSet(0x21, 0xE, 0xA, 0);
                ObjSet(0x21, 0x1B, 1, 0);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                TG_setObjDirection_withRelay(0x21, 5);
                WaitSyncCounter(0x3C);
                Routine_SoundEffect(0x283);
                Routine_ScreenRGB_ON();
                Routine_ScreenRGB_rgb(0x1F, 0x1F, 0x1F, 0x14);
                Routine_ScreenRGB_alpha(0x1F, 0x1F, 0x14);
                WaitSyncCounter(0x1E);
                Routine_ScreenRGB_rgb(0, 0, 0, 0x14);
                Routine_ScreenRGB_alpha(0, 0x1F, 0x14);
                WaitSyncCounter(0x14);
                Routine_ScreenRGB_OFF();
                WaitSyncCounter(0x1E);
                Routine_ShakeScreen(1, 0);
                Routine_SoundEffect(0x275);
                WaitSyncCounter(0x1E);
                var_r8_6 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r8_6 += 1;
                } while (var_r8_6 < 2);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 0, 0x20, 0xA, -1, -1, 0xBE);
                Routine_ShakeScreen(0, 0);
                Routine_StopSoundEffect(0x275, 0x1E);
                WaitSyncCounter(0x3C);
                SetAikyoEffectWithXYZ(0xA9, 0, 0, 0, 0xCB2, 0x258, 0x41A);
                Routine_SoundEffect(0x283);
                WaitSyncCounter(0x32);
                Routine_SoundEffect(0x288);
                WaitSyncCounter(0x64);
                Routine_FadeOutAllWithMoveByCount(0x1E);
                MTG_BGM_FadeOutAndChange(0xC);
                StartPictureEvent(0xC9);
                ObjSet(0x21, 0x21, 2, 0);
                SetTitleNameNo(0x28);
                func_ov025_020d0160();
                MTG_BGM_FadeOutAndChange(0x26);
                EventDurringTitle(0x833);
                Routine_SaveGo();
                EventDurringTitle(0x833);
            case 0x833:
                data_ov000_02051548->h3A = 0x15;
                data_ov000_02051548->b0  = 0;
                OS_SleepThread(0);
                EndScriptRoutine();
                break;
        }
    }
}
