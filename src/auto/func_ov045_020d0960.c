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
s32 GetHpOrResource(s32);
void TG_BattleRestart(s32, s32);
void WaitSyncUnit(s32);
void WaitSyncAikyoEffect(s32, s32);
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
typedef struct {
    u8 pad0[0xD0];
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
extern SceneWork *data_ov000_02051548;
extern Copy10 data_ov045_020d17b4;
void func_ov045_020d0160(void);
void func_ov045_020d02a4(void);
void func_ov045_020d02e4(void);
void func_ov045_020d0328(void);
void func_ov045_020d036c(void);
void func_ov045_020d03b0(void);
void func_ov045_020d03f4(void);
void func_ov045_020d0438(void);
void func_ov045_020d047c(void);
void func_ov045_020d04c0(void);
void func_ov045_020d05a4(s32 *);
void func_ov045_020d0684(s32 *);
void func_ov045_020d07a8(void);
void func_ov045_020d0828(s32);

void func_ov045_020d0960(void) {
    Copy10 loc;
    Copy10 spA;
    s32 s44;
    s32 s40;
    s32 s3c;
    s32 s38;
    s32 L34;
    s32 i;
    s32 j;
    s32 maxHp;
    s32 t;
    s32 w;
    s32 q;
    s32 lastTimer = 0;
    s32 var_r8    = 0;
    s32 var_r9    = 0;
    s32 x2c       = 0;
    s32 var_r11   = 0;
    s32 x28       = 0;
    s32 x24       = 0;
    s32 x20       = 0;
    s32 x1c       = 0;
    s32 x18       = 0;
    s32 x14       = 0;
    s32 x10       = 0;
    s32 x0c       = 0;

    spA = data_ov045_020d17b4;
    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                Routine_FadeOutAll();
                InitializeOtherKuniAndUnit();
                Routine_KyotenChange(0x1A);
                WaitSyncCounter(0xA);
                ObjSet_allclear();
                Routine_SetEvPosMode(0);
                Routine_SetEvPos(0);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                CameraMoveAndWait(0x1E, 1, 0, 0, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(7);
                Routine_FadeInAllByCount(0x60);
                WaitSyncCounter(0x40);
                CameraMoveAndWait(0x40, 1, 1, 0, -1, -1, -1);
                WaitSyncCounter(0x20);
                MessagePutAndWait(0x21FC);
                WaitSyncCounter(0x20);
                StockDataForRetry();
                EventDurringTitle(0x21FC);
            case 0x21FC:
                Routine_FadeOutAll();
                MTG_BGM_FadeOutAndChange(0x28);
                Routine_KyotenChange(0x1A);
                InitializeSiteOfAreaMap();
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                SG_setParty();
                func_ov045_020d0160();
                data_ov000_02051548->f13 = 5;
                SetUpSallyForCharNo(0, 2);
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                Routine_SetEvPos(1);
                KuniNameSet(1, 8);
                WaitSyncCounter(0xA);
                PutAreaMapUP_LCD();
                loc = spA;
                i   = 0;
                j   = 0;
                for (; i < 0xB; i++) {
                    if (GetUnitStatus(i) == 2) {
                        ObjSet(i, 7, loc.w[j], loc.w[j + 1]);
                        j += 2;
                    }
                }
                CameraMoveAndWait(0x20, 0, 0x13, 0x21, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x1D);
                Routine_FadeInAll();
                SetPlanTimer(0);
                MoveOnPlanTimer();
                MTG_BattleStart(0x59, 0x43);
                EventDurringTitle(0x2206);
            case 0x2206:
                GetHpOrResourceAndMax(0xF18, &s3c, &s38);
                GetHpOrResourceAndMax(0xF20, &s44, &s40);
                maxHp = s40;
                if (GetUnitStatus(0xF24) == 1 && var_r8 == 1) {
                    data_ov000_02051548->step = 0x2224;
                    continue;
                }
                if (GetUnitStatus(0xF25) == 1 && var_r9 == 1) {
                    data_ov000_02051548->step = 0x222E;
                    continue;
                }
                if (GetPlanTimer() % 0xF0 == 0 && GetPlanTimer() != 0 && lastTimer != GetPlanTimer() &&
                    (var_r8 == 1 || var_r9 == 1)) {
                    lastTimer                 = GetPlanTimer();
                    data_ov000_02051548->step = 0x221F;
                    continue;
                }
                if (x2c == 1 && var_r11 == 1 && var_r9 == 0 && var_r8 == 0) {
                    if (CountEnemyUnit() == 0 && GetPlanTimer() <= 0x4B0) {
                        var_r9                    = 1;
                        data_ov000_02051548->step = 0x221A;
                        continue;
                    }
                    if (CountEnemyUnit() == 0 || GetPlanTimer() >= 0x5DC) {
                        var_r8                    = 1;
                        data_ov000_02051548->step = 0x2210;
                        continue;
                    }
                }
                if ((CountEnemyUnit() == 0 || GetPlanTimer() >= 0x258) && x2c == 0) {
                    x2c = 1;
                    Routine_SetEvPosFadeIn();
                    Routine_SetEvPos(2);
                } else if ((CountEnemyUnit() == 0 || GetPlanTimer() >= 0x4B0) && var_r11 == 0) {
                    var_r11 = 1;
                    Routine_SetEvPosFadeIn();
                    Routine_SetEvPos(3);
                    for (i = 0; i < 4; i++) {
                        ObjSet(i + 0xF1C, 0xA, 4, 0);
                    }
                }
                if (GetHpOrResource(0xF20) <= (maxHp >> 1) && GetUnitStatus(0xF20) == 3 && x28 == 0) {
                    x28 = 1;
                    ObjSet(0xF20, 0x27, 0, 0);
                    func_ov045_020d02a4();
                }
                if (GetHpOrResource(0xF21) <= (maxHp >> 1) && GetUnitStatus(0xF21) == 3 && x24 == 0) {
                    x24 = 1;
                    ObjSet(0xF21, 0x27, 0, 0);
                    func_ov045_020d02e4();
                }
                if (GetHpOrResource(0xF22) <= (maxHp >> 1) && GetUnitStatus(0xF22) == 3 && x20 == 0) {
                    x20 = 1;
                    ObjSet(0xF22, 0x27, 0, 0);
                    func_ov045_020d0328();
                }
                if (GetHpOrResource(0xF23) <= (maxHp >> 1) && GetUnitStatus(0xF23) == 3 && x1c == 0) {
                    x1c = 1;
                    ObjSet(0xF23, 0x27, 0, 0);
                    func_ov045_020d036c();
                }
                if (GetHpOrResource(0xF18) < s38 && GetUnitStatus(0xF18) == 3 && x18 == 0) {
                    x18 = 1;
                    func_ov045_020d03b0();
                }
                if (GetHpOrResource(0xF19) < s38 && GetUnitStatus(0xF19) == 3 && x14 == 0) {
                    x14 = 1;
                    func_ov045_020d03f4();
                }
                if (GetHpOrResource(0xF1A) < s38 && GetUnitStatus(0xF1A) == 3 && x10 == 0) {
                    x10 = 1;
                    func_ov045_020d0438();
                }
                if (GetHpOrResource(0xF1B) < s38 && GetUnitStatus(0xF1B) == 3 && x0c == 0) {
                    x0c = 1;
                    func_ov045_020d047c();
                } else if (GetUnitStatus(0xB) == 1 || GetUnitStatus(0xB) == 0) {
                    func_ov045_020d07a8();
                }
                if (var_r8 == 1 || var_r9 == 1) {
                    func_ov045_020d0684(&L34);
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x2206;
                continue;
            case 0x2210:
                MTG_StartEvent();
                CameraMoveAndWait(0x60, 0, 0x14, 0x14, -1, -1, -1);
                WaitSyncCounter(0x20);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(4);
                ObjSet(0xF24, 0x21, 1, 0);
                ObjSet(0xF24, 0xE, 0xD, 0);
                ObjSet(0xF24, 0x1B, 1, 0);
                WaitSyncUnit(0xF24);
                ObjSet(0xF24, 0x1B, 0, 0);
                WaitSyncCounter(0xC0);
                MessagePutAndWait(0x2201);
                WaitSyncCounter(0x20);
                MTG_BGM_FadeOutAndChange(0x1E);
                ObjSet(0xF24, 0x21, 2, 0);
                TG_BattleRestart(0x33, 0x43);
                MoveOnPlanTimer();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x2206;
                continue;
            case 0x221A:
                MTG_StartEvent();
                CameraMoveAndWait(0x60, 0, 0x14, 0x14, -1, -1, -1);
                WaitSyncCounter(0x20);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(5);
                ObjSet(0xF25, 0x21, 1, 0);
                WaitSyncCounter(0xC0);
                MessagePutAndWait(0x2206);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x40);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                MTG_BGM_FadeOutAndChange(0x18);
                ObjSet(0xF25, 0x21, 2, 0);
                TG_BattleRestart(0x5F, 0x43);
                MoveOnPlanTimer();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x2206;
                continue;
            case 0x221F:
                MTG_StartEvent();
                if (var_r8 == 1) {
                    t = 0xF24;
                    q = 4;
                    if (CountEnemyUnit() <= 6) {
                        w = 0x12F;
                    } else {
                        w = 0x130;
                    }
                } else {
                    t = 0xF25;
                    q = 5;
                    w = 0x130;
                }
                CameraMoveAndWait(0x60, 1, t, 0, -1, -1, -1);
                if (t == 0xF24) {
                    ObjSet(t, 0xE, 0xC, 0);
                    ObjSet(t, 0x1B, 1, 0);
                    WaitSyncUnit(t);
                    ObjSet(t, 0x1B, 0, 0);
                }
                ObjSet(t, 0x21, 0, 0);
                WaitSyncCounter(0x40);
                CameraMoveAndWait(0x40, 0, 0x14, 0x14, -1, -1, -1);
                WaitSyncCounter(0x10);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(q);
                ObjSet(t, 0x21, 2, 0);
                ObjSet(t, 7, 0x14, 0x14);
                if (t == 0xF24) {
                    ObjSet(t, 0xE, 0xD, 0);
                    ObjSet(t, 0x1B, 1, 0);
                    WaitSyncUnit(t);
                    ObjSet(t, 0x1B, 0, 0);
                }
                WaitSyncCounter(0x40);
                if (t == 0xF24) {
                    ObjSet(t, 0xE, 0xE, 0);
                    WaitSyncUnit(t);
                    ObjSet(t, 0xE, 0xF, 0);
                    ObjSet(t, 0x1B, 1, 0);
                }
                ObjSet(t, 0x1E, w, 0);
                ObjSet(t, 0x1F, 1, 0);
                WaitSyncAikyoEffect(-1, -1);
                if (t == 0xF24) {
                    ObjSet(t, 0xE, 0, 0);
                    ObjSet(t, 0x1B, 0, 0);
                }
                if (var_r9 == 1) {
                    func_ov045_020d04c0();
                } else {
                    ObjSet(0xF19, 0x1E, 0x12F, 0);
                }
                func_ov045_020d05a4(&L34);
                MTG_EndEvent();
                MoveOnPlanTimer();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x2206;
                continue;
            case 0x2224:
                MTG_FreeBattleEnd1();
                CameraMoveAndWait(0x40, 1, 0xF24, 0, -1, -1, -1);
                WaitSyncCounter(0x20);
                MessagePutAndWait(0x2210);
                WaitSyncCounter(0x80);
                func_ov045_020d0828(0);
                data_ov000_02051548->step = 0x2238;
                continue;
            case 0x222E:
                MTG_FreeBattleEnd1();
                CameraMoveAndWait(0x40, 1, 0xF25, 0, -1, -1, -1);
                WaitSyncCounter(0x20);
                MessagePutAndWait(0x2215);
                WaitSyncCounter(0x80);
                func_ov045_020d0828(1);
                data_ov000_02051548->step = 0x2238;
                continue;
            case 0x2238:
                Routine_FadeOutAllByCount(0x60);
                EventDurringTitle(0x21FC);
                MTG_FreeBattleEnd2(0x57);
                SiteSwitching(0);
                Routine_CameraFree();
                cameraTargetIconON();
                HpBar_Status_IconON();
                EndScriptRoutine();
                continue;
        }
    }
}
