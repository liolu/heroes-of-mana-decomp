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
    u32 f6 : 26;
    u32 step : 16;
    u32 stepHi : 16;
    u8 padD8[0x688];
    u32 b0 : 1;
    u32 brest : 31;
} SceneWork;
extern SceneWork *data_ov000_02051548;
extern UTab *data_0203673c;
void func_ov097_020d0160(void);
void func_ov097_020d02b8(s32 *, s32 *);
void func_ov097_020d0330(s32);

void func_ov097_020d0380(void) {
    Copy7 z1 = {0};
    Copy7 z2 = {0};
    s32 sB;
    s32 sA;
    s32 var_a = 0;
    s32 var_b = 0;
    s32 k;

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
                MTG_BGM_FadeOutAndChange(0x23);
                Routine_KyotenChange(0x26);
                ObjSet_allclear();
                Routine_SetEvPos(1);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 0, 0x14, 0x19, 0x6A4, 0x41A, 0xBE);
                StopMovingGame();
                ObjSet(0, 5, 0, 0);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                WaitSyncCounter(0xA);
                Routine_FadeInAllWithMoveByCount(0x5A);
                WaitSyncCounter(0x78);
                CameraMoveAndWait(0x78, 0, 0x14, 0x19, 0x3E8, -1, -1);
                WaitSyncCounter(0x78);
                MessagePutAndWait(0x23F0);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                for (k = 0; k < 5; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    WaitSyncCounter(0x1E);
                }
                for (k = 0; k < 3; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    WaitSyncCounter(0x1E);
                }
                ObjSet(0x24, 1, 0x320, 0);
                ObjSet(0x24, 0x17, 0, -1);
                WaitSyncUnit(0x24);
                WaitSyncCounter(0x1E);
                for (k = 0; k < 2; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                    WaitSyncCounter(0x1E);
                }
                ObjSet(0x26, 0x12, 0, 0);
                ObjSet(0x26, 0x17, -5, 0);
                WaitSyncCounter(0x3C);
                ObjSet(0x24, 0x17, -1, 0);
                WaitSyncUnit(0x24);
                WaitSyncCounter(0x2D);
                TG_objLookObj_withRelay(0x24, 0x1C);
                WaitSyncCounter(0x1E);
                for (k = 0; k < 2; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                }
                Routine_FadeOutAllWithMoveByCount(0x3C);
                ObjSet(0x26, 0x13, 0, 0);
                StockDataForRetry();
                EventDurringTitle(0x23F0);
            case 0x23F0:
                Routine_KyotenChange(0x26);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov097_020d0160();
                var_a = 0;
                sB    = 0;
                sA    = 0;
                var_b = 0;
                InitializeSiteOfAreaMap();
                Routine_FadeOutAll();
                PutAreaMapUP_LCD();
                ObjSet_allclear();
                Routine_SetEvPos(var_a);
                WaitSyncCounter(0xA);
                ObjSet(var_a, 5, var_a, var_a);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 1, 0xB, var_a, 0x3E8, 0x41A, 0xBE);
                WaitSyncCounter(0xA);
                WaitSyncCounter(0x1E);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x2F);
                KuniNameSet(var_a, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x5E, 0x48);
                EventDurringTitle(0x23F1);
            case 0x23F1:
                func_ov097_020d02b8(&sA, &sB);
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x244C;
                    continue;
                }
                if (GetUnitStatus(0xC) == 1) {
                    data_ov000_02051548->step = 0x2452;
                    continue;
                }
                if (sB <= sA / 2 && var_a == 0) {
                    var_a                     = 1;
                    data_ov000_02051548->step = 0x23F2;
                    continue;
                }
                if (sB <= sA / 4 && var_b == 0) {
                    var_b                     = 1;
                    data_ov000_02051548->step = 0x23F4;
                    continue;
                }
                if (sB == 0) {
                    if (data_0203673c->ents[data_ov000_02051548->side].v.val >
                        data_0203673c->ents[data_ov000_02051548->side ^ 1].v.val) {
                        data_ov000_02051548->step = 0x2450;
                    } else {
                        data_ov000_02051548->step = 0x244E;
                    }
                    continue;
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x23F1;
                continue;
            case 0x23F2:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x2404);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x23F3);
            case 0x23F3:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x23F1;
                continue;
            case 0x23F4:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x2409);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x23F5);
            case 0x23F5:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x23F1;
                continue;
            case 0x244C:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x240E);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x244D);
            case 0x244D:
                MTG_BGM_FadeOutAndChange(6);
                EventDurringTitle(0x23F0);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x244E);
            case 0x244E:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x2413);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                Routine_FadeOutAll();
                ObjSet_allclear();
                Routine_SetEvPos(1);
                WaitSyncCounter(0xA);
                PutOnePlanePicUP_LCD(0);
                CameraMoveAndWait(1, 0, 0x14, 0x19, 0x3E8, 0x41A, 0xBE);
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x23);
                Routine_FadeInAll();
                WaitSyncCounter(0x3C);
                MTG_BecomeDarkScreen();
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                MTG_ReturnDarkScreen();
                WaitSyncCounter(0x3C);
                func_ov097_020d0330(0);
                WaitSyncCounter(0x3C);
                for (k = 0; k < 2; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                }
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x244F);
            case 0x244F:
                MTG_BGM_FadeOutAndChange(6);
                EventDurringTitle(0x23F0);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x2450);
            case 0x2450:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x2418);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                Routine_FadeOutAll();
                ObjSet_allclear();
                Routine_SetEvPos(1);
                WaitSyncCounter(0xA);
                PutOnePlanePicUP_LCD(0);
                CameraMoveAndWait(1, 0, 0x14, 0x19, 0x3E8, 0x41A, 0xBE);
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x23);
                Routine_FadeInAll();
                WaitSyncCounter(0x3C);
                MTG_BecomeDarkScreen();
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                MTG_ReturnDarkScreen();
                WaitSyncCounter(0x3C);
                func_ov097_020d0330(1);
                WaitSyncCounter(0x3C);
                for (k = 0; k < 4; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                }
                ObjSet(0x1C, 0x17, 0, -2);
                ObjSet(0x26, 0x17, 0, -2);
                WaitSyncCounter(0x3C);
                ObjSet(0x24, 1, 0x320, 0);
                ObjSet(0x24, 0x17, 0, -1);
                WaitSyncUnit(0x24);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                TG_objLookObj_withRelay(0x1C, 0x24);
                WaitSyncCounter(5);
                TG_objLookObj_withRelay(0x26, 0x24);
                WaitSyncCounter(0xF);
                for (k = 0; k < 3; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                }
                WaitSyncCounter(0xF);
                ObjSet(0x1C, 0x17, 0, -5);
                ObjSet(0x26, 0x17, 0, -5);
                WaitSyncCounter(0xB4);
                MTG_BecomeDarkScreen();
                Routine_MessageRect(2, 5, 0x1D, 0xA);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                MTG_ReturnDarkScreen();
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                Routine_FadeOutAllByCount(0x5A);
                EventDurringTitle(0x23F0);
                MTG_FreeBattleEnd2(0x5C);
                EventDurringTitle(0x2452);
            case 0x2452:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xC, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x242C);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                func_ov097_020d0330(1);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAll();
                ObjSet_allclear();
                Routine_SetEvPos(1);
                WaitSyncCounter(0xA);
                PutOnePlanePicUP_LCD(0);
                CameraMoveAndWait(1, 0, 0x14, 0x19, 0x3E8, 0x41A, 0xBE);
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x23);
                Routine_FadeInAll();
                WaitSyncCounter(0x3C);
                for (k = 0; k < 3; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                }
                ObjSet(0x1C, 0x17, 0, -2);
                ObjSet(0x26, 0x17, 0, -2);
                WaitSyncCounter(0x3C);
                ObjSet(0x24, 1, 0x320, 0);
                ObjSet(0x24, 0x17, 0, -1);
                WaitSyncUnit(0x24);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                TG_objLookObj_withRelay(0x1C, 0x24);
                WaitSyncCounter(5);
                TG_objLookObj_withRelay(0x26, 0x24);
                WaitSyncCounter(0xF);
                for (k = 0; k < 3; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                }
                WaitSyncCounter(0xF);
                ObjSet(0x1C, 0x17, 0, -5);
                ObjSet(0x26, 0x17, 0, -5);
                WaitSyncCounter(0xB4);
                MTG_BecomeDarkScreen();
                Routine_MessageRect(2, 5, 0x1D, 0xA);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                MTG_ReturnDarkScreen();
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                Routine_FadeOutAllByCount(0x5A);
                EventDurringTitle(0x23F0);
                MTG_FreeBattleEnd2(0x5C);
                EndScriptRoutine();
                continue;
        }
    }
}
