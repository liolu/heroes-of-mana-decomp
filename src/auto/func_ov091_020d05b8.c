#include "m2c.h"

void ReleaseRetryData(void);
void Routine_FadeOutAll(void);
void InitializeOtherKuniAndUnit(void);
void Routine_KyotenChange(s32);
void WaitSyncCounter(s32);
void ObjSet_allclear(void);
void Routine_SetEvPosMode(s32);
void Routine_SetEvPos(s32);
void PutOnePlanePicUP_LCD(s32);
void cameraTargetIconOFF(void);
void HpBar_Status_IconOFF(void);
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
void MTG_BGM_FadeOutAndChange(s32);
void Routine_FadeInAllByCount(s32);
void ObjSet(s32, s32, s32, s32);
void TG_objLookObj_withRelay(s32, s32);
void TG_partyLookObj_withRelay(s32);
void MessagePutAndWait(s32);
void Routine_SetEvPosFadeIn(void);
void StockDataForRetry(void);
void EventDurringTitle(s32);
void InitializeSiteOfAreaMap(void);
void func_ov094_020d0160(void);
void SG_setParty(void);
void SetUpSallyForCharNo(s32, s32);
void SelectCarisumaChar(void);
void KuniNameSet(s32, s32);
void PutAreaMapUP_LCD(void);
s32 GetUnitStatus(s32);
void MessagePut(s32);
void WaitSyncMessageEnd(void);
s32 CountEnemyUnit(void);
void PutBtlResultForFreeWithoutSave(void);
void Routine_FadeInAll(void);
void SetPlanTimer(s32);
void MoveOnPlanTimer(void);
void MTG_BattleStart(s32, s32);
void GetHpOrResourceAndMax(s32, s32 *, s32 *);
s32 GetPlanTimer(void);
void func_ov094_020d0344(void);
void func_ov094_020d03c4(void);
void OS_SleepThread(s32);
void MTG_StartEvent(void);
void RecoverHpOrResourceByPer(s32, s32);
void MTG_EndEvent(void);
void MTG_FreeBattleEnd1(void);
void Routine_FadeOutAllByCount(s32);
void MTG_FreeBattleEnd2(s32);
void SiteSwitching(s32);
void Routine_CameraFree(void);
void cameraTargetIconON(void);
void HpBar_Status_IconON(void);
void EndScriptRoutine(void);

typedef struct {
    s32 w[10];
} Copy10;
void InitializeKuniAndUnit(void);
void SetUpCarisumaSally(void);
void MTG_CarisumaPosArrange(void *, void *);
s32 GetClearTimer(void);
s32 MTG_Check_Live_No(s32, s32);
void GetXZOfUnit(s32, s32 *, s32 *);
void Routine_SoundEffect(s32);
void Routine_ScreenRGB_ON(void);
void Routine_ScreenRGB_OFF(void);
void Routine_ScreenRGB_rgb(s32, s32, s32, s32);
void Routine_ScreenRGB_alpha(s32, s32, s32);
s32 GetDireOfUnit(s32);
void MTG_FreeBattleEnd1(void);
void StopMovingGame(void);
void Routine_FadeInAllWithMoveByCount(s32);
void Routine_FadeOutAllWithMoveByCount(s32);
void WaitSyncUnit(s32);
void MTG_BecomeDarkScreen(void);
void MTG_ReturnDarkScreen(void);
void Routine_MessageRect(s32, s32, s32, s32);
typedef struct {
    s32 w[7];
} Copy7;
typedef struct {
    u32 pad : 14;
    u32 val : 14;
    u32 rest : 4;
} Val14;
typedef struct {
    u8 pad[0x210];
    Val14 v;
    u8 tail[0x2D0 - 0x214];
} UEnt;
typedef struct {
    u8 pad[0x28];
    UEnt *ents;
} UTab;
typedef struct {
    u8 pad0[0x14];
    u32 g0 : 8;
    u32 side : 4;
    u32 g12 : 20;
    u8 pad18[0x78];
    s32 w90;
    u8 pad94[0x3C];
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
extern Copy7 data_ov091_020d16e0;
extern Copy7 data_ov091_020d16fc;
void func_ov091_020d0160(void);
void func_ov091_020d0218(void);
s32 func_ov091_020d025c(s32);
void func_ov091_020d04d4(s32);

void func_ov091_020d05b8(void) {
    Copy7 spA;
    Copy7 spB;
    s32 s18;
    s32 s14;
    s32 s10;
    s32 s0c;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    s32 k;

    spA = data_ov091_020d16e0;
    spB = data_ov091_020d16fc;
    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                InitializeOtherKuniAndUnit();
                if (data_ov000_02051548->f5 != 0) {
                    InitializeKuniAndUnit();
                    data_ov000_02051548->w90 = 0x19;
                }
                Routine_FadeOutAll();
                MTG_BGM_FadeOutAndChange(7);
                Routine_KyotenChange(0x17);
                ObjSet_allclear();
                Routine_SetEvPos(1);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 1, 8, 0, 0x3E8, 0x1C2, 0xBE);
                StopMovingGame();
                ObjSet(0, 5, 0, 0);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                WaitSyncCounter(0xA);
                ObjSet(8, 0x17, 3, 0);
                Routine_FadeInAllWithMoveByCount(0x5A);
                WaitSyncUnit(8);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x2198);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                ObjSet(0xF24, 0x21, 1, 0);
                CameraMoveAndWait(0x3C, 1, 0xF24, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF24, 0, -1, 0x2EE, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                ObjSet(0xF22, 0x17, -3, 0);
                ObjSet(0xF23, 0x17, -3, 0);
                CameraMoveAndWait(0x3C, 1, 0xF22, 0, -1, -1, -1);
                WaitSyncUnit(0xF23);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                ObjSet(0xF22, 0x17, 0, -1);
                ObjSet(0xF23, 0x17, 0, -1);
                WaitSyncUnit(0xF23);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                CameraMoveAndWait(0x3C, 1, 0xF22, 0, -1, 0x41A, -1);
                WaitSyncCounter(0x1E);
                MTG_BecomeDarkScreen();
                Routine_MessageRect(5, 5, 0x1C, 0xA);
                WaitSyncCounter(0xF);
                Routine_SoundEffect(0x25A);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                MTG_ReturnDarkScreen();
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                MTG_BecomeDarkScreen();
                WaitSyncCounter(0xF);
                Routine_SoundEffect(0x25A);
                Routine_MessageRect(9, 5, 0x1C, 0xA);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                MTG_ReturnDarkScreen();
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                Routine_FadeOutAllWithMoveByCount(0x3C);
                StockDataForRetry();
                EventDurringTitle(0x2198);
            case 0x2198:
                Routine_KyotenChange(0x17);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                var_r6 = 0;
                s10    = 0;
                s18    = 0;
                s14    = 0;
                s0c    = 0;
                var_r7 = 0;
                var_r8 = 0;
                func_ov091_020d0160();
                InitializeSiteOfAreaMap();
                Routine_FadeOutAll();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SG_setParty();
                SetUpCarisumaSally();
                data_ov000_02051548->f13 = 1;
                SetUpSallyForCharNo(8, 2);
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(var_r6);
                WaitSyncCounter(0xA);
                ObjSet(var_r6, 5, var_r6, var_r6);
                MTG_CarisumaPosArrange(&spA, &spB);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 1, 8, var_r6, 0x3E8, 0x1C2, 0xBE);
                ObjSet(8, 0x14, var_r6, var_r6);
                ObjSet(0xF20, 0x14, var_r6, var_r6);
                ObjSet(0xF21, 0x14, var_r6, var_r6);
                ObjSet(0xF20, 0x1E, var_r6, var_r6);
                ObjSet(0xF21, 0x1E, var_r6, var_r6);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x27);
                KuniNameSet(var_r6, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x58, 0x42);
                EventDurringTitle(0x2199);
            case 0x2199:
                func_ov091_020d04d4(var_r7);
                if (GetUnitStatus(8) == 1) {
                    data_ov000_02051548->step = 0x21F4;
                    continue;
                }
                if (GetUnitStatus(0xF20) == 1) {
                    var_r6                    = 0;
                    data_ov000_02051548->step = 0x21F6;
                    continue;
                }
                if (GetUnitStatus(0xF21) == 1) {
                    var_r6                    = 1;
                    data_ov000_02051548->step = 0x21F6;
                    continue;
                }
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x21F8;
                    continue;
                }
                if (MTG_Check_Live_No(0xF04, 0xF07) == 0 && var_r7 == 0) {
                    var_r7                    = 1;
                    data_ov000_02051548->step = 0x219A;
                    continue;
                }
                if (MTG_Check_Live_No(0xF08, 0xF09) == 0 && var_r7 == 1) {
                    data_ov000_02051548->step = 0x21FA;
                    continue;
                }
                if (GetClearTimer() - s0c > 0x78 - s10 * 10) {
                    s0c = GetClearTimer();
                    s10 = func_ov091_020d025c(var_r7);
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x2199;
                continue;
            case 0x219A:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 8, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x21A2);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 0, 0xA, 0x19, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 0, 0xA, 0x19, -1, 0x2EE, -1);
                WaitSyncCounter(0x1E);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(2);
                Routine_SoundEffect(0x27A);
                WaitSyncCounter(0x3C);
                CameraMoveAndWait(0x3C, 1, 0xF09, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF09, 0, -1, 0x41A, -1);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x1E);
                EventDurringTitle(0x219B);
            case 0x219B:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x2199;
                continue;
            case 0x21F4:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 8, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x21A7);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x21F5);
            case 0x21F5:
                MTG_BGM_FadeOutAndChange(6);
                EventDurringTitle(0x2198);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x21F6);
            case 0x21F6:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, var_r6 + 0xF20, 0, -1, -1, -1);
                ObjSet(var_r6 + 0xF20, 0x27, 0, 0);
                WaitSyncCounter(0x1E);
                MTG_BecomeDarkScreen();
                Routine_MessageRect(6, 5, 0x1C, 0xA);
                WaitSyncCounter(0xF);
                Routine_SoundEffect(0x25A);
                MessagePutAndWait(0x21AC);
                WaitSyncCounter(0xF);
                MTG_ReturnDarkScreen();
                for (k = 0; k < 6; k++) {
                    if (GetUnitStatus(k + 0xF04) == 3) {
                        var_r8 = k;
                        GetXZOfUnit(k + 0xF04, &s18, &s14);
                    }
                }
                ObjSet(var_r6 + 0xF20, 0xF, 0, 0);
                ObjSet(var_r6 + 0xF20, 1, 0x320, 0);
                ObjSet(var_r6 + 0xF20, 0, s18 - 1, s14);
                WaitSyncUnit(var_r6 + 0xF20);
                WaitSyncCounter(0x1E);
                TG_objLookObj_withRelay(var_r6 + 0xF20, var_r8 + 0xF04);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                ObjSet(var_r6 + 0xF20, 0xE, 2, 0);
                WaitSyncCounter(0x18);
                Routine_SoundEffect(0x25A);
                Routine_ScreenRGB_ON();
                Routine_ScreenRGB_rgb(0x1F, 0x1F, 0x1F, 0x2D);
                Routine_ScreenRGB_alpha(0x14, 0x1F, 0x2D);
                WaitSyncCounter(0x2D);
                CameraMoveAndWait(1, 1, 8, 0, 0x3E8, -1, -1);
                ObjSet(8, 0xE, 9, 0);
                ObjSet(8, 0x1B, 1, 0);
                for (k = 0; k < 0x22; k++) {
                    ObjSet(k + 0xF04, 0xE, 9, 0);
                    ObjSet(k + 0xF04, 0x1B, 1, 0);
                }
                for (k = 0; k < 3; k++) {
                    Routine_SoundEffect(0x22A);
                    WaitSyncCounter(5);
                }
                WaitSyncCounter(0x3C);
                Routine_ScreenRGB_rgb(0, 0, 0, 0x78);
                Routine_ScreenRGB_alpha(0, 0x1F, 0x78);
                WaitSyncCounter(0x78);
                Routine_ScreenRGB_OFF();
                WaitSyncCounter(0x78);
                Routine_FadeOutAll();
                ObjSet(8, 0x1B, 0, 0);
                for (k = 0; k < 0x22; k++) {
                    ObjSet(k + 0xF04, 0x1B, 0, 0);
                }
                EventDurringTitle(0x21F7);
            case 0x21F7:
                MTG_BGM_FadeOutAndChange(6);
                EventDurringTitle(0x2198);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x21F8);
            case 0x21F8:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x21B1);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x21F9);
            case 0x21F9:
                MTG_BGM_FadeOutAndChange(6);
                EventDurringTitle(0x2198);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x21FA);
            case 0x21FA:
                MTG_StartEvent();
                CameraMoveAndWait(0x3C, 1, 8, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x21B6);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                MTG_FreeBattleEnd1();
                MTG_BGM_FadeOutAndChange(7);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 0, 9, 0x12, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 0, 9, 0x12, -1, 0x1C2, -1);
                WaitSyncCounter(0x3C);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0x15);
                Routine_SoundEffect(0x27A);
                ObjSet(0xF25, 0x21, 1, 0);
                WaitSyncCounter(0x5A);
                ObjSet(0xF25, 0xE, 2, 0);
                Routine_SoundEffect(0x27C);
                WaitSyncCounter(0x78);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x5A);
                ObjSet(0xF25, 0x15, 1, 0);
                Routine_SoundEffect(0x27C);
                ObjSet(0xF20, 0x15, 1, 0);
                ObjSet(0xF21, 0x15, 1, 0);
                WaitSyncCounter(0xB4);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                CameraMoveAndWait(0x3C, 1, 8, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                switch (GetDireOfUnit(8)) {
                    case 0:
                        CameraMoveAndWait(0x3C, 1, 8, 0, -1, 0x2EE, -1);
                        break;
                    case 1:
                        CameraMoveAndWait(0x3C, 1, 8, 0, -1, 0x2EE, -1);
                        break;
                    case 2:
                        CameraMoveAndWait(0x3C, 1, 8, 0, -1, 0x2EE, -1);
                        break;
                    case 3:
                        CameraMoveAndWait(0x3C, 1, 8, 0, -1, 0x41A, -1);
                        break;
                    case 4:
                        CameraMoveAndWait(0x3C, 1, 8, 0, -1, 0x41A, -1);
                        break;
                    case 5:
                        CameraMoveAndWait(0x3C, 1, 8, 0, -1, 0x96, -1);
                        break;
                    case 6:
                        CameraMoveAndWait(0x3C, 1, 8, 0, -1, 0x1C2, -1);
                        break;
                    case 7:
                        CameraMoveAndWait(0x3C, 1, 8, 0, -1, 0x1C2, -1);
                        break;
                }
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                Routine_FadeOutAllByCount(0x5A);
                func_ov091_020d0218();
                EventDurringTitle(0x2198);
                MTG_FreeBattleEnd2(0x56);
                EndScriptRoutine();
                continue;
        }
    }
}
