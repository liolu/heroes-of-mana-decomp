#include "m2c.h"

void OS_SleepThread(s32);                    /* extern */
void ReleaseRetryData(void);                      /* extern */
void InitializeKuniAndUnit(void);                      /* extern */
void InitializeOtherKuniAndUnit(void);                      /* extern */
void Routine_FadeOutAll(void);                      /* extern */
void Routine_FadeInAll(void);                      /* extern */
void Routine_FadeInAllWithMoveByCount(s32);               /* extern */
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
void UnitSelCanOrNot(s32, s32);      /* extern */
void ShipUnitSelCanOrNot(s32);               /* extern */
void SetShisetuLevel(s32, s32);      /* extern */
void ObjSet(s32, s32, s32, s32); /* extern */
void Routine_SaveGo(void);                      /* extern */
void Routine_WorldMap2(s32);               /* extern */
void Routine_SoundEffect(s32);                   /* extern */
void Routine_DownLCD_Is3DMap(void);                      /* extern */
s32 GetUnitStatus(s32);                       /* extern */
s32 GetUnitStatusRect(s32, s32);              /* extern */
s32 checkCanSeeUnit(s32);                       /* extern */
s32 checkRectPosUnit(s32, s32, s32, s32, s32); /* extern */
void KuniNameSet(s32, s32);      /* extern */
void SetUpSallyForCharNo(s32, s32);      /* extern */
void Routine_SetEvPosMode(s32);               /* extern */
void SelectCarisumaChar(void);                      /* extern */
void cameraTargetIconOFF(void);                      /* extern */
void HpBar_Status_IconOFF(void);                      /* extern */
s32 GetPlanTimer(void);                          /* extern */
void EndScriptRoutine(void);                      /* extern */
void StartMovie(s32);               /* extern */
void StartPictureEvent(s32);               /* extern */
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
void MTG_GameOver(s32, s32);      /* extern */
void func_ov008_020d0160(void);                      /* extern */
void func_ov008_020d0184(void);                      /* extern */
void func_ov008_020d01ec(void);                      /* extern */
s32 func_ov008_020d054c(void);                          /* extern */
s32 func_ov008_020d0598(void);                          /* extern */
s32 func_ov008_020d05e4(void);                          /* extern */
typedef struct {
    s32 w[7];
} Copy7;
typedef struct {
    u8 pad0[0x3A];
    s16 h3A;
    u8 pad3C[0x4];
    s32 w40;
    s32 w44;
    s32 w48;
    s32 w4C;
    u8 pad50[0x4];
    s32 w54;
    u8 pad58[0x3C];
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
extern Copy7 data_ov008_020d1ab8;
extern Copy7 data_ov008_020d1ad4;

void func_ov008_020d0630(void) {
    Copy7 sp28;
    Copy7 spC;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r7_3;
    s32 var_r7_4;
    s32 var_r7_5;
    s32 var_r7_6;
    s32 var_r7_7;
    void *temp_r4_3;

    sp28 = data_ov008_020d1ab8;
    spC  = data_ov008_020d1ad4;

    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                InitializeOtherKuniAndUnit();
                if (data_ov000_02051548->f5 != 0) {
                    InitializeKuniAndUnit();
                }
                data_ov000_02051548->w94 = func_ov008_020d054c();
                data_ov000_02051548->w98 = func_ov008_020d0598();
                data_ov000_02051548->w9C = func_ov008_020d05e4();
                ShipUnitSelCanOrNot(0);
                UnitSelCanOrNot(1, 0);
                UnitSelCanOrNot(0xB, 0);
                Routine_FadeOutAll();
                MTG_BGM_FadeOutAndChange(0x2C);
                Routine_WorldMap2(3);
                MTG_BGM_FadeOutAndChange(0x2E);
                Routine_PutEventTitle(3, 0);
                StartPictureEvent(0x1E);
                MTG_BGM_FadeOutAndChange(0x1F);
                Routine_KyotenChange(2);
                ObjSet_allclear();
                CameraMoveAndWait(1, 0, 0x13, 0x1E, 0x514, 0x96, 0xE6);
                Routine_SetEvPos(0);
                WaitSyncCounter(0xA);
                StopMovingGame();
                ObjSet(0, 5, 0, 0);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                ObjSet(0, 7, 0x14, 0x20);
                ObjSet(0, 0xF, 0, 0);
                ObjSet(1, 7, 0x12, 0x20);
                ObjSet(1, 0xF, 0, 0);
                ObjSet(2, 7, 0x13, 0x21);
                ObjSet(2, 0xF, 0, 0);
                ObjSet(3, 7, 0x14, 0x22);
                ObjSet(3, 0xF, 0, 0);
                ObjSet(4, 7, 0x12, 0x22);
                ObjSet(4, 0xF, 0, 0);
                ObjSet(0xF09, 7, 0x13, 0x1B);
                ObjSet(0xF0A, 7, 0x14, 0x1C);
                ObjSet(0xF0B, 7, 0x15, 0x1B);
                ObjSet(0xB, 0x15, 0, 0);
                var_r7 = 0;
                do {
                    ObjSet(var_r7 + 0xF04, 0x15, 0, 0);
                    var_r7 += 1;
                } while (var_r7 < 5);
                ObjSet(0, 3, 4, 0);
                ObjSet(1, 3, 4, 0);
                ObjSet(2, 3, 4, 0);
                ObjSet(3, 3, 4, 0);
                ObjSet(4, 3, 4, 0);
                ObjSet(0xF09, 3, 4, 0);
                ObjSet(0xF0A, 3, 4, 0);
                ObjSet(0xF0B, 3, 4, 0);
                WaitSyncCounter(0xA);
                ObjSet(0, 0, 0x14, 0x1E);
                ObjSet(1, 0, 0x12, 0x1E);
                ObjSet(2, 0, 0x13, 0x1F);
                ObjSet(3, 0, 0x14, 0x20);
                ObjSet(4, 0, 0x12, 0x20);
                CameraMove(0x78, 0, 0x13, 0x1E, 0x3E8, 0x96, 0xE6);
                Routine_FadeInAllWithMoveByCount(0x3C);
                WaitSyncCounter(0x5A);
                ObjSet(0xF0A, 3, 2, 0);
                WaitSyncCounter(0xA);
                ObjSet(0xF0A, 3, 0, 0);
                WaitSyncCounter(0xA);
                ObjSet(0xF09, 3, 2, 0);
                ObjSet(0xF0B, 3, 2, 0);
                WaitSyncCounter(0xA);
                ObjSet(0xF09, 3, 0, 0);
                ObjSet(0xF0B, 3, 0, 0);
                WaitSyncCounter(0x5A);
                MessagePutAndWait(0x130);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF0A, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                var_r7_2 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r7_2 += 1;
                } while (var_r7_2 < 3);
                ObjSet(0xF0A, 1, 0x190, 0);
                ObjSet(0xF0A, 0x17, 0, 2);
                WaitSyncCounter(0x1E);
                ObjSet(0, 0x1A, 1, 0);
                ObjSet(0, 1, 0x96, 0);
                ObjSet(0, 0x17, 0, 1);
                WaitSyncUnit(0);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF0A, 0, 0x3E8, 0x1EA, 0xE6);
                WaitSyncCounter(0x1E);
                ObjSet(0xF0A, 0xE, 2, 0);
                Routine_SoundEffect(0x267);
                WaitSyncCounter(8);
                ObjSet(0, 0xE, 0xC, 0);
                WaitSyncCounter(0xC);
                ObjSet(0, 0xE, 0xD, 0);
                ObjSet(0, 0x1B, 1, 0);
                WaitSyncCounter(0xC);
                Routine_SoundEffect(0x26F);
                WaitSyncCounter(0xA);
                StockDataForRetry();
                EventDurringTitle(0x12C);
            /* fallthrough */
            case 0x12C:
                InitializeOtherKuniAndUnit();
                func_ov008_020d01ec();
                MTG_SaveParaReset();
                SetTitleNameNo(5);
                InitializeSiteOfAreaMap();
                data_ov000_02051548->w94 = func_ov008_020d054c();
                data_ov000_02051548->w98 = func_ov008_020d0598();
                data_ov000_02051548->w9C = func_ov008_020d05e4();
                Routine_FadeOutAll();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SG_setParty();
                data_ov000_02051548->f13 = 3;
                SetUpSallyForCharNo(0, 2);
                SelectCarisumaChar();
                Routine_SetEvPosMode(2);
                Routine_SetEvPos(0);
                Routine_SetEvPos(1);
                Routine_SetEvPos(2);
                WaitSyncCounter(0xA);
                ObjSet(0, 5, 0, 0);
                MTG_BGM_FadeOutAndChange(0x27);
                MTG_CarisumaPosArrange(&sp28, &spC);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 1, 0, 0, 0x3E8, 0x96, 0xBE);
                WaitSyncCounter(5);
                Routine_FadeInAll();
                ObjSet(0, 0x14, 0, 0);
                ObjSet(0xF11, 0x14, 0, 0);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0xA, 3);
                EventDurringTitle(0x12F);
            /* fallthrough */
            case 0x12F:
                var_r4 = 0;
                if (GetUnitStatus(0) == 1) {
                    data_ov000_02051548->step = 0x18A;
                } else if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x18C;
                } else if ((GetUnitStatusRect(0xF09, 0xF0B) == 0) && (data_ov000_02051548->w40 == 0)) {
                    data_ov000_02051548->w40  = 1;
                    data_ov000_02051548->step = 0x12D;
                } else {
                    var_r6 = 0;
                    do {
                        if ((checkCanSeeUnit(var_r6 + 0xF0C) != 0) && (data_ov000_02051548->w48 == 0)) {
                            var_r5                   = var_r6;
                            var_r4                   = 1;
                            data_ov000_02051548->w48 = 1;
                        }
                        var_r6 += 1;
                    } while (var_r6 < 5);
                    if (var_r4 == 1) {
                        data_ov000_02051548->step = 0x132;
                    } else {
                        var_r6_2 = 0;
                        do {
                            if ((checkCanSeeUnit(var_r6_2 + 0xF12) != 0) && (data_ov000_02051548->w44 == 0)) {
                                var_r5                   = var_r6_2;
                                var_r4                   = 1;
                                data_ov000_02051548->w44 = 1;
                            }
                            var_r6_2 += 1;
                        } while (var_r6_2 < 5);
                        if (var_r4 == 1) {
                            data_ov000_02051548->step = 0x130;
                        } else if ((checkCanSeeUnit(0xF05) != 0) && (data_ov000_02051548->w4C == 0)) {
                            data_ov000_02051548->w4C  = 1;
                            data_ov000_02051548->step = 0x134;
                        } else {
                            temp_r4_3 = data_ov000_02051548;
                            if (GetPlanTimer() > (s32) M2C_FIELD(temp_r4_3, s32 *, 0x9C)) {
                                if ((M2C_FIELD(temp_r4_3, s32 *, 0x4C) == 1) && (M2C_FIELD(temp_r4_3, s32 *, 0x50) == 0)) {
                                    M2C_FIELD(temp_r4_3, s32 *, 0x50) = 1;
                                    data_ov000_02051548->step         = 0x136;
                                } else {
                                    goto block_67;
                                }
                            } else {
                            block_67:
                                if ((GetUnitStatus(0xF11) == 1) && (data_ov000_02051548->w54 == 0)) {
                                    data_ov000_02051548->w54  = 1;
                                    data_ov000_02051548->step = 0x138;
                                } else if (checkRectPosUnit(0, 0xC, 8, 0xC, 0xA) != 0) {
                                    data_ov000_02051548->step = 0x18E;
                                } else {
                                    SG_judgeAdvantage(0x27);
                                    data_ov000_02051548->b0 = 0;
                                    OS_SleepThread(0);
                                    data_ov000_02051548->step = 0x12F;
                                }
                            }
                        }
                    }
                }
                break;
            case 0x12D:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x1E, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MTG_BGM_FadeOutAndChange(7);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x136);
                var_r7_3 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r7_3 += 1;
                } while (var_r7_3 < 5);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAll();
                StartPictureEvent(0x1A);
                StartPictureEvent(0x16);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0xF);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x12E);
            /* fallthrough */
            case 0x12E:
                MTG_EndEvent();
                func_ov008_020d0160();
                data_ov000_02051548->step = 0x12F;
                break;
            case 0x130:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x1E, 1, var_r5 + 0xF12, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x1E, 1, var_r5 + 0xF12, 0, -1, 0x1C2, -1);
                WaitSyncCounter(0x3C);
                Routine_DownLCD_Is3DMap();
                ObjSet(0, 5, 0, 0);
                MessagePutAndWait(0x14E);
                WaitSyncCounter(0xF);
                var_r7_4 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r7_4 += 1;
                } while (var_r7_4 < 2);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAll();
                StartPictureEvent(0x23);
                Routine_FadeInAll();
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x155);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                MTG_BecomeDarkScreen();
                Routine_MessageRect(2, 5, 0x1C, 0xA);
                Routine_SoundEffect(0x86);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                MTG_ReturnDarkScreen();
                SetShisetuLevel(1, 1);
                EventDurringTitle(0x131);
            /* fallthrough */
            case 0x131:
                MTG_EndEvent();
                func_ov008_020d0160();
                data_ov000_02051548->step = 0x12F;
                break;
            case 0x132:
                MTG_StartEvent();
                CameraMoveAndWait(0x1E, 1, var_r5 + 0xF0C, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x1E, 1, var_r5 + 0xF0C, 0, -1, 0x1C2, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x145);
                WaitSyncCounter(0xF);
                var_r7_5 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r7_5 += 1;
                } while (var_r7_5 < 2);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAll();
                StartPictureEvent(0x22);
                Routine_FadeInAll();
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x14C);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                EventDurringTitle(0x133);
            /* fallthrough */
            case 0x133:
                MTG_EndEvent();
                func_ov008_020d0160();
                data_ov000_02051548->step = 0x12F;
                break;
            case 0x134:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x1E, 1, 0xF05, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x13C);
                WaitSyncCounter(0xF);
                var_r7_6 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r7_6 += 1;
                } while (var_r7_6 < 4);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAll();
                StartPictureEvent(0x21);
                Routine_FadeInAll();
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x141);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                MTG_BecomeDarkScreen();
                Routine_MessageRect(2, 5, 0x1C, 0xA);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x135);
            /* fallthrough */
            case 0x135:
                MTG_EndEvent();
                func_ov008_020d0160();
                data_ov000_02051548->step = 0x12F;
                break;
            case 0x136:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                Routine_SetEvPos(3);
                ObjSet(0xF17, 0x21, 1, 0);
                CameraMoveAndWait(0x3C, 1, 0xF17, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF17, 0, -1, 0x1C2, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x144);
                WaitSyncCounter(0xF);
                ObjSet(0xF17, 0x21, 2, 0);
                EventDurringTitle(0x137);
            /* fallthrough */
            case 0x137:
                MTG_EndEvent();
                func_ov008_020d0160();
                data_ov000_02051548->step = 0x12F;
                break;
            case 0x138:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x1E, 1, 0xF11, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x158);
                WaitSyncCounter(0xF);
                var_r7_7 = 0;
                do {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    var_r7_7 += 1;
                } while (var_r7_7 < 5);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAll();
                StartPictureEvent(0x24);
                Routine_FadeInAll();
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x15F);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                ObjSet(0xF11, 0x15, 1, 0);
                WaitSyncCounter(0x3C);
                CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                EventDurringTitle(0x139);
            /* fallthrough */
            case 0x139:
                MTG_EndEvent();
                func_ov008_020d0160();
                data_ov000_02051548->step = 0x12F;
                break;
            case 0x18A:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x161);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x18B);
            /* fallthrough */
            case 0x18B:
                MTG_GameOver(3, 0x12C);
                EventDurringTitle(0x18C);
            case 0x18C:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x162);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x18D);
            case 0x18D:
                MTG_GameOver(3, 0x12C);
                EventDurringTitle(0x18E);
            /* fallthrough */
            case 0x18E:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MTG_StartLastEvent(3);
                MTG_BGM_FadeOutAndChange(7);
                StartPictureEvent(0x1F);
                MTG_BGM_FadeOutAndChange(0xB);
                StartMovie(0xD);
                WaitSyncCounter(0x3C);
                StartPictureEvent(0x20);
                Routine_FadeOutAll();
                SetTitleNameNo(6);
                func_ov008_020d0184();
                MTG_BGM_FadeOutAndChange(0x26);
                EventDurringTitle(0x18F);
                Routine_SaveGo();
                EventDurringTitle(0x18F);
            case 0x18F:
                data_ov000_02051548->h3A = 4;
                data_ov000_02051548->b0  = 0;
                OS_SleepThread(0);
                EndScriptRoutine();
                break;
        }
    }
}
