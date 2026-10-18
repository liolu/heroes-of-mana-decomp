#include "m2c.h"

void OS_SleepThread(s32);                    /* extern */
void ReleaseRetryData(void);                      /* extern */
void InitializeKuniAndUnit(void);                      /* extern */
void InitializeOtherKuniAndUnit(void);                      /* extern */
void Routine_FadeOutAll(void);                      /* extern */
void Routine_FadeInAll(void);                      /* extern */
void Routine_FadeOutAllWithMoveByCount(s32);               /* extern */
void Routine_PutEventTitle(s32, s32);      /* extern */
void WaitSyncUnit(s32);               /* extern */
void WaitSyncCounter(s32);               /* extern */
void Routine_KyotenChange(s32);               /* extern */
void ObjSet_allclear(void);                      /* extern */
void CameraMove(s32, s32, s32, s32, s32, s32, s32); /* extern */
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
void Routine_SoundEffect(s32);                   /* extern */
s32 GetUnitStatus(s32);                   /* extern */
s32 checkCanSeeUnit(s32);                       /* extern */
void SiteSwitching(s32);               /* extern */
void KuniNameSet(s32, s32);      /* extern */
void SetUpSallyForCharNo(s32, s32);      /* extern */
void Routine_SetEvPosMode(s32);               /* extern */
void SelectCarisumaChar(void);                      /* extern */
void cameraTargetIconOFF(void);                      /* extern */
void HpBar_Status_IconOFF(void);                      /* extern */
s32 GetPlanTimer(void);                          /* extern */
void EndScriptRoutine(void);                      /* extern */
void StartPictureEvent(s32);               /* extern */
void InitializeSiteOfAreaMap(void);                      /* extern */
void PutOnePlanePicUP_LCD(s32);               /* extern */
void PutAreaMapUP_LCD(void);                      /* extern */
void StockDataForRetry(void);                      /* extern */
void TG_setObjDirection_withRelay(s32, s32);      /* extern */
void TG_objLookObj_withRelay(s32, s32);          /* extern */
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
void MTG_GameOver(s32, s32);      /* extern */
void func_ov012_020d0160(void);                      /* extern */
void func_ov012_020d0184(void);                      /* extern */
void func_ov012_020d01d4(void);                      /* extern */
s32 func_ov012_020d053c(void);                          /* extern */
s32 func_ov012_020d0588(void);                          /* extern */
s32 func_ov012_020d05d4(void);                          /* extern */
typedef struct {
    s32 w[7];
} Copy7;
typedef struct {
    u8 pad0[0x3A];
    s16 h3A;
    u8 pad3C[0x4];
    s32 w40;
    s32 w44;
    u8 pad48[0x44];
    s32 w8C;
    u8 pad90[0x4];
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
extern Copy7 data_ov012_020d16a4;
extern Copy7 data_ov012_020d16c0;

void func_ov012_020d0620(void) {
    Copy7 sp28;
    Copy7 spC;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 var_r6_4;
    s32 var_r6_5;
    s32 var_r6_6;
    s32 var_r7;
    s32 var_r8;
    void *temp_r4_3;

    sp28 = data_ov012_020d16a4;
    spC  = data_ov012_020d16c0;

    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                InitializeOtherKuniAndUnit();
                if (data_ov000_02051548->f5 != 0) {
                    InitializeKuniAndUnit();
                }
                Routine_FadeOutAll();
                data_ov000_02051548->w8C = (s32) (data_ov000_02051548->w8C | 0x800000);
                MTG_BGM_FadeOutAndChange(0x2C);
                Routine_WorldMap2(8);
                MTG_BGM_FadeOutAndChange(0x2E);
                Routine_PutEventTitle(7, 0);
                MTG_BGM_FadeOutAndChange(0x22);
                Routine_KyotenChange(6);
                ObjSet_allclear();
                CameraMoveAndWait(1, 0, 0x11, 0x1D, 0x6A4, 0x6E, 0xD2);
                Routine_SetEvPos(0);
                WaitSyncCounter(0xA);
                SiteSwitching(2);
                StopMovingGame();
                ObjSet(0, 5, 0, 0);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                ObjSet(0, 7, 0x17, 0x23);
                ObjSet(2, 7, 0x18, 0x24);
                ObjSet(4, 7, 0x17, 0x24);
                ObjSet(0xA, 7, 0x18, 0x23);
                ObjSet(8, 7, 0x16, 0x24);
                ObjSet(1, 7, 0x19, 0x23);
                ObjSet(3, 7, 0x19, 0x24);
                ObjSet(6, 7, 0x1A, 0x23);
                ObjSet(9, 7, 0x1A, 0x24);
                ObjSet(0xB, 0x15, 0, 0);
                var_r6 = 0;
                do {
                    ObjSet(var_r6 + 0xF00, 0x15, 0, 0);
                    var_r6 += 1;
                } while (var_r6 < 7);
                ObjSet(0xF1F, 0x15, 0, 0);
                var_r6_2 = 0;
                do {
                    ObjSet(var_r6_2 + 0xF07, 0x15, 0, 0);
                    var_r6_2 += 1;
                } while (var_r6_2 < 0x1E);
                ObjSet(0x20, 0x21, 1, 0);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                WaitSyncCounter(0x3C);
                MTG_BecomeDarkScreen();
                Routine_MessageRect(3, 5, 0x1C, 0xA);
                MessagePutAndWait(0x2BC);
                WaitSyncCounter(0x1E);
                MTG_ReturnDarkScreen();
                CameraMoveAndWait(0x3C, 1, 0xA, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                CameraMoveAndWait(0x3C, 1, 0xA, 0, 0x3E8, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x96, 1, 0x20, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x78, 1, 0x20, 0, -1, 0x2EE, -1);
                WaitSyncCounter(0x3C);
                var_r6_3 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r6_3 += 1;
                } while (var_r6_3 < 2);
                WaitSyncCounter(0x3C);
                CameraMoveAndWait(0x78, 1, 2, -1, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                TG_setObjDirection_withRelay(1, 1);
                WaitSyncCounter(0x3C);
                var_r6_4 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r6_4 += 1;
                } while (var_r6_4 < 4);
                WaitSyncCounter(0xF);
                TG_objLookObj_withRelay(3, 2);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x3C);
                TG_setObjDirection_withRelay(4, 6);
                WaitSyncCounter(0x3C);
                TG_setObjDirection_withRelay(4, 4);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x78, 1, 0x20, -1, -1, -1, -1);
                WaitSyncCounter(0x1E);
                var_r6_5 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r6_5 += 1;
                } while (var_r6_5 < 7);
                WaitSyncCounter(0x1E);
                ObjSet(0x20, 0xE, 2, 0);
                Routine_SoundEffect(0x3B6);
                WaitSyncCounter(0x28);
                StockDataForRetry();
                EventDurringTitle(0x2BC);
            /* fallthrough */
            case 0x2BC:
                InitializeOtherKuniAndUnit();
                func_ov012_020d01d4();
                MTG_SaveParaReset();
                SetTitleNameNo(0xD);
                InitializeSiteOfAreaMap();
                data_ov000_02051548->w94 = func_ov012_020d053c();
                data_ov000_02051548->w98 = func_ov012_020d0588();
                data_ov000_02051548->w9C = func_ov012_020d05d4();
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
                CameraMoveAndWait(1, 1, 0, 0, 0x3E8, 0x96, 0xBE);
                ObjSet(0, 0x14, 0, 0);
                ObjSet(0x20, 0x14, 0, 0);
                SiteSwitching(0);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x12);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0xF, 7);
                EventDurringTitle(0x2BD);
            /* fallthrough */
            case 0x2BD:
                if (data_ov000_02051548->w40 == 0) {
                    data_ov000_02051548->w40  = 1;
                    data_ov000_02051548->step = 0x2BE;
                } else if (GetUnitStatus(0) == 1) {
                    data_ov000_02051548->step = 0x31A;
                } else if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x31C;
                } else if (GetUnitStatus(0x20) == 1) {
                    data_ov000_02051548->step = 0x31E;
                } else {
                    var_r8 = 0;
                    do {
                        if ((checkCanSeeUnit(var_r8 + 0xF0D) != 0) && (data_ov000_02051548->w44 == 0)) {
                            var_r7 = 1;
                        }
                        if ((checkCanSeeUnit(var_r8 + 0xF12) != 0) && (data_ov000_02051548->w44 == 0)) {
                            var_r7 = 1;
                        }
                        var_r8 += 1;
                    } while (var_r8 < 3);
                    if ((var_r7 == 1) && (data_ov000_02051548->w44 == 0)) {
                        data_ov000_02051548->w44  = 1;
                        data_ov000_02051548->step = 0x2C0;
                    } else {
                        temp_r4_3 = data_ov000_02051548;
                        if (GetPlanTimer() > (s32) M2C_FIELD(temp_r4_3, s32 *, 0x98)) {
                            if ((M2C_FIELD(temp_r4_3, s32 *, 0x44) == 1) && (M2C_FIELD(temp_r4_3, s32 *, 0x48) == 0)) {
                                M2C_FIELD(temp_r4_3, s32 *, 0x48) = 1;
                                data_ov000_02051548->step         = 0x2C2;
                            } else {
                                goto block_62;
                            }
                        } else {
                        block_62:
                            SG_judgeAdvantage(0x12);
                            data_ov000_02051548->b0 = 0;
                            OS_SleepThread(0);
                            data_ov000_02051548->step = 0x2BD;
                        }
                    }
                }
                break;
            case 0x2BE:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                ObjSet(0xF07, 0x21, 1, 0);
                CameraMoveAndWait(0x3C, 1, 0xF07, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x2DA);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAll();
                StartPictureEvent(0x47);
                Routine_FadeInAll();
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x2DF);
                WaitSyncCounter(0xF);
                ObjSet(0xF07, 0x21, 2, 0);
                EventDurringTitle(0x2BF);
            /* fallthrough */
            case 0x2BF:
                MTG_EndEvent();
                func_ov012_020d0160();
                data_ov000_02051548->step = 0x2BD;
                break;
            case 0x2C0:
                MTG_StartEvent();
                Routine_SetEvPos(1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF15, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x2E4);
                WaitSyncCounter(0xF);
                EventDurringTitle(0x2C1);
            /* fallthrough */
            case 0x2C1:
                MTG_EndEvent();
                func_ov012_020d0160();
                data_ov000_02051548->step = 0x2BD;
                break;
            case 0x2C2:
                MTG_StartEvent();
                Routine_SetEvPos(2);
                ObjSet(0xF18, 0x21, 1, 0);
                ObjSet(0x20, 0x21, 1, 0);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF18, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF18, 0, -1, 0x1C2, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x2E9);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                CameraMoveAndWait(0x3C, 1, 0x20, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                TG_objLookObj_withRelay(0x20, 0xF18);
                WaitSyncCounter(0x1E);
                var_r6_6 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r6_6 += 1;
                } while (var_r6_6 < 2);
                WaitSyncCounter(0x2D);
                TG_objLookObj_withRelay(0x20, 0);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                ObjSet(0xF18, 0x21, 2, 0);
                ObjSet(0x20, 0x21, 2, 0);
                EventDurringTitle(0x2C3);
            /* fallthrough */
            case 0x2C3:
                MTG_EndEvent();
                func_ov012_020d0160();
                data_ov000_02051548->step = 0x2BD;
                break;
            case 0x31A:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x2EE);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x31B);
            /* fallthrough */
            case 0x31B:
                MTG_GameOver(7, 0x2BC);
                EventDurringTitle(0x31C);
            case 0x31C:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x2F8);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x31D);
            case 0x31D:
                MTG_GameOver(7, 0x2BC);
                EventDurringTitle(0x31E);
            /* fallthrough */
            case 0x31E:
                MTG_StartEvent();
                ObjSet(0x20, 0x21, 1, 0);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0x20, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                ObjSet(0x20, 0xE, 0xA, 0);
                ObjSet(0x20, 0x1B, 1, 0);
                MessagePutAndWait(0x302);
                WaitSyncCounter(0x3C);
                ObjSet(0x20, 0xE, 0x10, 0);
                ObjSet(0x20, 0x1B, 1, 0);
                Routine_SoundEffect(0x6C);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x3C);
                MTG_StartLastEvent(7);
                ObjSet_allclear();
                Routine_SetEvPos(3);
                WaitSyncCounter(0xA);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 1, 0, 0, -1, 0x1C2, 0xDC);
                MTG_BGM_FadeOutAndChange(0x22);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x1E);
                ObjSet(0x20, 0x1A, 1, 0);
                ObjSet(0x20, 1, 0x96, 0);
                ObjSet(0x20, 0x17, 0, 1);
                WaitSyncUnit(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                ObjSet(0, 1, 0x190, 0);
                ObjSet(0, 0x17, 0, 1);
                WaitSyncUnit(0);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                CameraMoveAndWait(0x1E, 1, 0x20, 0, -1, -1, -1);
                CameraMoveAndWait(0x14, 1, 0x20, 0, 0x2BC, 0x1A4, 0x14A);
                WaitSyncCounter(0x1E);
                Routine_SoundEffect(0x26D);
                CameraMove(0xA, 0, 0x12, 9, -1, -1, -1);
                Routine_FadeOutAllWithMoveByCount(0x1E);
                MTG_BGM_FadeOutAndChange(9);
                WaitSyncCounter(0x1E);
                StartPictureEvent(0x46);
                ObjSet(0x20, 0x21, 2, 0);
                Routine_FadeOutAll();
                SetTitleNameNo(0xE);
                func_ov012_020d0184();
                MTG_BGM_FadeOutAndChange(0x26);
                EventDurringTitle(0x31F);
                Routine_SaveGo();
                EventDurringTitle(0x31F);
            case 0x31F:
                data_ov000_02051548->h3A = 8;
                data_ov000_02051548->b0  = 0;
                OS_SleepThread(0);
                EndScriptRoutine();
                break;
        }
    }
}
