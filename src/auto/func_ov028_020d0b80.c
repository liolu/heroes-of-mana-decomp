#include "m2c.h"

void OS_SleepThread(s32);                    /* extern */
void ReleaseRetryData(void);                      /* extern */
void InitializeKuniAndUnit(void);                      /* extern */
void InitializeOtherKuniAndUnit(void);                      /* extern */
void Routine_FadeOutAll(void);                      /* extern */
void Routine_FadeInAll(void);                      /* extern */
void Routine_FadeInAllWithMoveByCount(s32);               /* extern */
void Routine_PutEventTitle(s32, s32);      /* extern */
void WaitSyncUnit(s32);                   /* extern */
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
void Routine_SoundEffect(s32);                   /* extern */
s32 GetUnitStatus(s32);                       /* extern */
s32 checkCanSeeUnit(s32);                       /* extern */
void SiteSwitching(s32);               /* extern */
void KuniNameSet(s32, s32);      /* extern */
void SetUpSallyForCharNo(s32, s32);      /* extern */
void Routine_SetEvPosMode(s32);               /* extern */
void SelectCarisumaChar(void);                      /* extern */
void Routine_ShakeScreen(s32, s32);      /* extern */
void cameraTargetIconOFF(void);                      /* extern */
void HpBar_Status_IconOFF(void);                      /* extern */
void MoveOnPlanTimer(void);                      /* extern */
void SetPlanTimer(s32);                   /* extern */
s32 GetPlanTimer(void);                          /* extern */
void Routine_SetEvPosFadeIn(void);                      /* extern */
void EndScriptRoutine(void);                      /* extern */
void StartPictureEvent(s32);               /* extern */
void InitializeSiteOfAreaMap(void);                      /* extern */
void PutOnePlanePicUP_LCD(s32);               /* extern */
void PutAreaMapUP_LCD(void);                      /* extern */
void StockDataForRetry(void);                      /* extern */
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
void MTG_GameOver(s32, s32);          /* extern */
void func_ov028_020d0160(void);                      /* extern */
void func_ov028_020d0184(void);                      /* extern */
void func_ov028_020d04ec(s32);               /* extern */
s32 func_ov028_020d053c(void);                          /* extern */
s32 func_ov028_020d0a9c(void);                          /* extern */
s32 func_ov028_020d0ae8(void);                          /* extern */
s32 func_ov028_020d0b34(void);                          /* extern */
typedef struct {
    s32 w[7];
} Copy7;
typedef struct {
    u8 pad0[0x3A];
    s16 h3A;
    u8 pad3C[0x4];
    s32 w40;
    s32 w44;
    u8 pad48[0x4C];
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
extern Copy7 data_ov028_020d1b28;
extern Copy7 data_ov028_020d1b44;

void func_ov028_020d0b80(void) {
    Copy7 sp28;
    Copy7 spC;
    s32 var_r4;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r7_3;
    s32 var_r7_4;
    s32 var_r7_5;
    s32 var_r7_6;

    sp28   = data_ov028_020d1b28;
    spC    = data_ov028_020d1b44;
    var_r4 = 0;
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
                Routine_WorldMap2(0x1D);
                MTG_BGM_FadeOutAndChange(0x2E);
                Routine_PutEventTitle(0x17, 0);
                MTG_BGM_FadeOutAndChange(7);
                StartPictureEvent(0xE6);
                Routine_KyotenChange(0x16);
                ObjSet_allclear();
                MTG_BGM_FadeOutAndChange(0x1A);
                Routine_SetEvPos(0);
                WaitSyncCounter(0xA);
                ObjSet(0, 7, 7, 0x22);
                ObjSet(1, 7, 8, 0x22);
                ObjSet(2, 7, 7, 0x21);
                ObjSet(4, 7, 8, 0x21);
                ObjSet(3, 7, 8, 0x20);
                ObjSet(0xA, 0x15, 0, 0);
                ObjSet(6, 0x15, 0, 0);
                ObjSet(8, 0x15, 0, 0);
                ObjSet(9, 0x15, 0, 0);
                ObjSet(5, 0x15, 0, 0);
                ObjSet(7, 0x15, 0, 0);
                ObjSet(0xB, 0x15, 0, 0);
                var_r7 = 0;
                do {
                    ObjSet(var_r7 + 0xF00, 0x15, 0, 0);
                    var_r7 += 1;
                } while (var_r7 < 9);
                SiteSwitching(1);
                CameraMoveAndWait(1, 1, 3, 0, 0x3E8, 0x96, 0xBE);
                StopMovingGame();
                ObjSet(0, 5, 0, 0);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                WaitSyncCounter(0xA);
                ObjSet(3, 1, 0x190, 0);
                ObjSet(2, 1, 0xC8, 0);
                ObjSet(0, 1, 0xC8, 0);
                ObjSet(1, 1, 0xC8, 0);
                ObjSet(4, 1, 0xC8, 0);
                ObjSet(3, 0x17, 0, -3);
                ObjSet(2, 0x17, 0, -3);
                ObjSet(0, 0x17, 0, -3);
                ObjSet(1, 0x17, 0, -3);
                ObjSet(4, 0x17, 0, -3);
                Routine_FadeInAllWithMoveByCount(0x3C);
                WaitSyncUnit(3);
                ObjSet(3, 0x17, 3, 0);
                WaitSyncUnit(3);
                WaitSyncCounter(0x1E);
                TG_setObjDirection_withRelay(3, 1);
                WaitSyncCounter(0x3C);
                ObjSet(3, 0x17, -3, 0);
                WaitSyncUnit(3);
                TG_setObjDirection_withRelay(3, 0);
                WaitSyncCounter(0x1E);
                TG_setObjDirection_withRelay(2, 5);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x910);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x2D);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                ObjSet(3, 3, 2, 0);
                WaitSyncCounter(5);
                ObjSet(3, 3, 4, 0);
                WaitSyncCounter(0x1E);
                var_r7_2 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r7_2 += 1;
                } while (var_r7_2 < 2);
                ObjSet(3, 3, 2, 0);
                WaitSyncCounter(5);
                ObjSet(3, 3, 0, 0);
                var_r7_3 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r7_3 += 1;
                } while (var_r7_3 < 2);
                CameraMoveAndWait(0x14, 1, 3, 0, 0x3E8, 0, 0xC8);
                WaitSyncCounter(0xA);
                ObjSet(4, 0xE, 0xC, 0);
                WaitSyncCounter(0x2A);
                Routine_SoundEffect(0x285);
                Routine_ShakeScreen(1, 0x1E);
                ObjSet(3, 0xE, 0xC, 0);
                ObjSet(3, 0x1B, 1, 0);
                WaitSyncCounter(0x3C);
                CameraMoveAndWait(0x1E, 1, 3, 0, 0x3E8, 0x96, 0xBE);
                WaitSyncCounter(0x1E);
                var_r7_4 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r7_4 += 1;
                } while (var_r7_4 < 2);
                WaitSyncCounter(0x1E);
                ObjSet(1, 0x17, 1, 0);
                WaitSyncUnit(1);
                ObjSet(1, 0x17, 0, -1);
                WaitSyncUnit(1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x1E, 1, 1, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                TG_setObjDirection_withRelay(1, 6);
                WaitSyncCounter(0x1E);
                TG_setObjDirection_withRelay(1, 4);
                WaitSyncCounter(0x1E);
                TG_setObjDirection_withRelay(1, 2);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                TG_setObjDirection_withRelay(4, 6);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                ObjSet(0, 0x17, 2, 0);
                WaitSyncUnit(0);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF09, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF09, 0, 0x2BC, -1, -1);
                WaitSyncCounter(0x1E);
                var_r7_5 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r7_5 += 1;
                } while (var_r7_5 < 2);
                WaitSyncCounter(0x3C);
                var_r7_6 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r7_6 += 1;
                } while (var_r7_6 < 2);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF09, 0, 0x3E8, 0x41A, 0xF0);
                WaitSyncCounter(0x1E);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x16);
                Routine_SoundEffect(0x28C);
                WaitSyncUnit(0xF22);
                WaitSyncCounter(0x3C);
                ObjSet(0xF22, 0xE, 2, 0);
                Routine_SoundEffect(0x227);
                WaitSyncCounter(0x1E);
                ObjSet(0xF23, 0xE, 2, 0);
                Routine_SoundEffect(0x227);
                WaitSyncCounter(0x3C);
                SiteSwitching(0);
                StockDataForRetry();
                EventDurringTitle(0x8FC);
            /* fallthrough */
            case 0x8FC:
                InitializeOtherKuniAndUnit();
                func_ov028_020d0184();
                MTG_SaveParaReset();
                SetTitleNameNo(0x2D);
                InitializeSiteOfAreaMap();
                data_ov000_02051548->w94 = func_ov028_020d0a9c();
                data_ov000_02051548->w98 = func_ov028_020d0ae8();
                data_ov000_02051548->w9C = func_ov028_020d0b34();
                Routine_FadeOutAll();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SG_setParty();
                data_ov000_02051548->f13 = 5;
                SetUpSallyForCharNo(0, 2);
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                WaitSyncCounter(0xA);
                ObjSet(0, 5, 0, 0);
                MTG_CarisumaPosArrange(&sp28, &spC);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 1, 0, 0, 0x3E8, 0x2EE, 0xBE);
                ObjSet(0, 0x14, 0, 0);
                ObjSet(0xF09, 0x14, 0, 0);
                ObjSet(0xF0A, 0x14, 0, 0);
                ObjSet(0xF0B, 0x14, 0, 0);
                ObjSet(0xF0C, 0x14, 0, 0);
                ObjSet(0xF0D, 0x14, 0, 0);
                ObjSet(0xF0D, 0x1C, 1, 0);
                ObjSet(0xF0D, 0x1C, 1, 0x10C);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x1A);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x2B, 0x17);
                MoveOnPlanTimer();
                SetPlanTimer(data_ov000_02051548->w98);
                EventDurringTitle(0x8FD);
            /* fallthrough */
            case 0x8FD:
                if (GetUnitStatus(0) == 1) {
                    data_ov000_02051548->step = 0x95A;
                } else if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x95C;
                } else if ((var_r4 > 3) && (data_ov000_02051548->w44 == 0)) {
                    data_ov000_02051548->w44  = 1;
                    data_ov000_02051548->step = 0x900;
                } else if (checkCanSeeUnit(0xF0D) != 0) {
                    if ((data_ov000_02051548->w44 == 0) && (data_ov000_02051548->w40 == 0)) {
                        data_ov000_02051548->w40  = 1;
                        data_ov000_02051548->step = 0x8FE;
                    } else {
                        goto block_50;
                    }
                } else {
                block_50:
                    if (GetUnitStatus(0xF0D) == 1) {
                        data_ov000_02051548->step = 0x95E;
                    } else {
                        if (GetPlanTimer() > (s32) (data_ov000_02051548->w94 - (var_r4 * 0xA))) {
                            var_r4 = func_ov028_020d053c();
                            SetPlanTimer(0);
                        }
                        SG_judgeAdvantage(0x1A);
                        data_ov000_02051548->b0 = 0;
                        OS_SleepThread(0);
                        data_ov000_02051548->step = 0x8FD;
                    }
                }
                break;
            case 0x8FE:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF0D, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x924);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                MoveOnPlanTimer();
                EventDurringTitle(0x8FF);
            /* fallthrough */
            case 0x8FF:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x8FD;
                break;
            case 0x900:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF0D, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x929);
                WaitSyncCounter(0xF);
                ObjSet(0xF0D, 0x1C, 0, 0);
                func_ov028_020d04ec(3);
                MoveOnPlanTimer();
                EventDurringTitle(0x901);
            /* fallthrough */
            case 0x901:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x8FD;
                break;
            case 0x95A:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x92E);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x95B);
            /* fallthrough */
            case 0x95B:
                MTG_GameOver(0x17, 0x8FC);
                EventDurringTitle(0x95C);
            case 0x95C:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x933);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x95D);
            case 0x95D:
                MTG_GameOver(0x17, 0x8FC);
                EventDurringTitle(0x95E);
            /* fallthrough */
            case 0x95E:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x937);
                WaitSyncCounter(0x3C);
                MTG_StartLastEvent(0x17);
                MTG_BGM_FadeOutAndChange(7);
                StartPictureEvent(0xE7);
                SetTitleNameNo(0x2E);
                func_ov028_020d0160();
                MTG_BGM_FadeOutAndChange(0x26);
                EventDurringTitle(0x95F);
                Routine_SaveGo();
                EventDurringTitle(0x95F);
            case 0x95F:
                data_ov000_02051548->h3A = 0x18;
                data_ov000_02051548->b0  = 0;
                OS_SleepThread(0);
                EndScriptRoutine();
                break;
        }
    }
}
