#include "m2c.h"

void OS_SleepThread(s32);
void ReleaseRetryData(void);
void InitializeOtherKuniAndUnit(void);
void InitializeKuniAndUnit(void);
void Routine_FadeOutAll(void);
void Routine_FadeInAll(void);
void MTG_BGM_FadeOutAndChange(s32);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void Routine_SetEvPos(s32);
void WaitSyncCounter(s32);
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
void StopMovingGame(void);
void ObjSet(s32, s32, s32, s32);
void PutOnePlanePicUP_LCD(s32);
void cameraTargetIconOFF(void);
void HpBar_Status_IconOFF(void);
void Routine_FadeInAllWithMoveByCount(s32);
void Routine_FadeOutAllWithMoveByCount(s32);
void MessagePutAndWait(s32);
void StartPictureEvent(s32);
void TG_objLookObj_withRelay(s32, s32);
void StockDataForRetry(void);
void EventDurringTitle(s32);
void func_ov090_020d0160(void);
void func_ov090_020d0200(void);
void InitializeSiteOfAreaMap(void);
void PutAreaMapUP_LCD(void);
void SG_setParty(void);
void SetUpCarisumaSally(void);
void SetUpSallyForCharNo(s32, s32);
void Routine_SetEvPosMode(s32);
void SelectCarisumaChar(void);
void UnitSelCanOrNot(s32, s32);
void KuniNameSet(s32, s32);
void MTG_BattleStart(s32, s32);
s32 GetUnitStatus(s32);
s32 checkCanSeeUnit(s32);
void MTG_StartEvent(void);
void MTG_EndEvent(void);
void PutOnOffTimer(s32);
void PutBtlResultForFreeWithoutSave(void);
void MTG_FreeBattleEnd1(void);
void MTG_FreeBattleEnd2(s32);
void EndScriptRoutine(void);

typedef struct {
    u8 pad0[0x210];
    u32 a : 14;
    u32 b : 14;
    u32 c : 4;
    u8 pad1[0x2d0 - 0x214];
} Unit;
typedef struct {
    u8 pad0[0x28];
    Unit *units;
} Glob;
typedef struct {
    u8 pad0[0x14];
    u32 lo : 8;
    u32 idx : 4;
    u32 hi : 20;
    u8 pad1[0x90 - 0x18];
    s32 w90;
    u8 pad3[0xd0 - 0x94];
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
extern Glob *data_0203673c;

void func_ov090_020d0280(void) {
    s32 seen;

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
                MTG_BGM_FadeOutAndChange(0x20);
                Routine_KyotenChange(0xF);
                ObjSet_allclear();
                Routine_SetEvPos(0);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 1, 0xA, 0, 0x3E8, 0x1C2, 0xBE);
                StopMovingGame();
                ObjSet(0, 5, 0, 0);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                WaitSyncCounter(0xA);
                Routine_FadeInAllWithMoveByCount(0x5A);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x2134);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAllWithMoveByCount(0x5A);
                MTG_BGM_FadeOutAndChange(0x21);
                StartPictureEvent(0x25);
                PutOnePlanePicUP_LCD(0);
                MTG_BGM_FadeOutAndChange(0x20);
                Routine_FadeInAllWithMoveByCount(0x5A);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x213C);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                TG_objLookObj_withRelay(0xA, 0xF04);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                Routine_FadeOutAll();
                StockDataForRetry();
                EventDurringTitle(0x2134);
            case 0x2134:
                Routine_KyotenChange(0xF);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                seen = 0;
                func_ov090_020d0160();
                InitializeSiteOfAreaMap();
                Routine_FadeOutAll();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SG_setParty();
                SetUpCarisumaSally();
                data_ov000_02051548->f13 = 1;
                SetUpSallyForCharNo(0xA, 2);
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                WaitSyncCounter(0xA);
                ObjSet(0, 5, 0, 0);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 1, 0xA, 0, 0x3E8, 0x1C2, 0xBE);
                ObjSet(0xA, 0x14, 0, 0);
                ObjSet(0xF04, 0x14, 0, 0);
                UnitSelCanOrNot(0xB, 1);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x27);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x57, 0x41);
                EventDurringTitle(0x2135);
            case 0x2135:
                if (GetUnitStatus(0xA) == 1) {
                    data_ov000_02051548->step = 0x2192;
                    continue;
                }
                if (GetUnitStatus(0xF04) == 1) {
                    data_ov000_02051548->step = 0x2190;
                    continue;
                }
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x2194;
                    continue;
                }
                if (checkCanSeeUnit(0xF01) != 0 && seen == 0) {
                    seen                      = 1;
                    data_ov000_02051548->step = 0x2136;
                    continue;
                }
                if (data_0203673c->units[data_ov000_02051548->idx].b != 0) {
                    data_ov000_02051548->step = 0x2196;
                    continue;
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x2135;
                continue;
            case 0x2192:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xA, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x2152);
                WaitSyncCounter(0x3C);
                UnitSelCanOrNot(0xB, 0);
                EventDurringTitle(0x2193);
            case 0x2193:
                MTG_BGM_FadeOutAndChange(6);
                EventDurringTitle(0x2134);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x2190);
            case 0x2190:
                MTG_StartEvent();
                PutOnOffTimer(0);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF04, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x214D);
                WaitSyncCounter(0x3C);
                UnitSelCanOrNot(0xB, 0);
                EventDurringTitle(0x2191);
            case 0x2191:
                MTG_BGM_FadeOutAndChange(6);
                EventDurringTitle(0x2134);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x2136);
            case 0x2136:
                MTG_StartEvent();
                PutOnOffTimer(0);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF01, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x2148);
                WaitSyncCounter(0x3C);
                Routine_SetEvPos(1);
                EventDurringTitle(0x2137);
            case 0x2137:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x2135;
                continue;
            case 0x2194:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x2157);
                WaitSyncCounter(0x3C);
                UnitSelCanOrNot(0xB, 0);
                EventDurringTitle(0x2195);
            case 0x2195:
                MTG_BGM_FadeOutAndChange(6);
                EventDurringTitle(0x2134);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x2196);
            case 0x2196:
                MTG_StartEvent();
                UnitSelCanOrNot(0xB, 0);
                CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, 0x1C2, -1);
                WaitSyncCounter(0x3C);
                MTG_FreeBattleEnd1();
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x215C);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                Routine_FadeOutAll();
                func_ov090_020d0200();
                MTG_BGM_FadeOutAndChange(0x21);
                StartPictureEvent(0x26);
                EventDurringTitle(0x2134);
                MTG_FreeBattleEnd2(0x55);
                EndScriptRoutine();
                continue;
        }
    }
}
