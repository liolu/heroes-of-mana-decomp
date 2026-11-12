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
void CameraMove(s32, s32, s32, s32, s32, s32, s32);
void PutOnOffTimer(s32);
void SetGameTimeMax(s32);
s32 checkRectPosCamp(s32, s32, s32, s32, s32);
void Routine_ShakeScreen(s32, s32);
void TG_setObjDirection_withRelay(s32, s32);
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
s32 GetHpOrResource(s32);
extern SceneWork *data_ov000_02051548;
void func_ov086_020d0160(void);
void func_ov086_020d02c8(void);
void func_ov086_020d03f0(void);
void func_ov086_020d042c(void);
void func_ov086_020d0464(void);
extern Copy7 data_ov086_020d1964;
extern Copy7 data_ov086_020d1980;

void func_ov086_020d04a0(void) {
    Copy7 spA;
    Copy7 spB;
    s32 vU = 0;
    s32 vD = 0;
    s32 vC = 0;
    s32 vB = 0;
    s32 vH = 0;
    s32 vA = 0;
    s32 cur;
    s32 mx;
    s32 k;
    s32 i;

    spA = data_ov086_020d1964;
    spB = data_ov086_020d1980;
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
                Routine_KyotenChange(8);
                ObjSet_allclear();
                Routine_SetEvPos(2);
                WaitSyncCounter(0xA);
                SiteSwitching(1);
                CameraMoveAndWait(1, 1, 5, 0, 0x3E8, 0x96, 0xBE);
                StopMovingGame();
                ObjSet(0, 5, 0, 0);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                WaitSyncCounter(0xA);
                Routine_FadeInAllByCount(0x78);
                WaitSyncCounter(0x5A);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(3);
                WaitSyncCounter(0x3C);
                ObjSet(0xE, 0x17, 0, 2);
                WaitSyncCounter(0x1E);
                TG_setObjDirection_withRelay(5, 4);
                WaitSyncUnit(0xE);
                MessagePutAndWait(0x1FA4);
                WaitSyncCounter(0xF);
                for (k = 0; k < 2; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                }
                WaitSyncCounter(0x1E);
                TG_setObjDirection_withRelay(5, 0);
                WaitSyncCounter(0x3C);
                CameraMoveAndWait(0x78, 1, 0xF22, 0, 0x3E8, 0x78, 0xE6);
                WaitSyncCounter(0x5A);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                CameraMoveAndWait(0x78, 1, 5, 0, 0x3E8, 0x96, 0xBE);
                WaitSyncCounter(0x5A);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                TG_setObjDirection_withRelay(0xE, 4);
                WaitSyncCounter(0x1E);
                TG_setObjDirection_withRelay(5, 4);
                WaitSyncCounter(0x1E);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(4);
                WaitSyncCounter(0x3C);
                ObjSet(7, 0x17, 0, 2);
                WaitSyncCounter(0x2D);
                TG_objLookObj_withRelay(0xE, 7);
                WaitSyncUnit(7);
                TG_objLookObj_withRelay(0xE, 7);
                WaitSyncCounter(0xA);
                TG_objLookObj_withRelay(5, 7);
                WaitSyncCounter(0x1E);
                for (k = 0; k < 2; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                }
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                TG_objLookObj_withRelay(5, 0xE);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                TG_objLookObj_withRelay(0xE, 5);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x5A);
                for (k = 0; k < 2; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                }
                WaitSyncCounter(0x3C);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x3C);
                SiteSwitching(0);
                Routine_FadeOutAll();
                StockDataForRetry();
                EventDurringTitle(0x1FA4);
            case 0x1FA4:
                Routine_KyotenChange(8);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                vU  = 0;
                vD  = 0;
                cur = 0;
                mx  = 0;
                vC  = 0;
                vB  = 0;
                vH  = 0;
                vA  = 0;
                func_ov086_020d0160();
                InitializeSiteOfAreaMap();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SG_setParty();
                SetUpCarisumaSally();
                data_ov000_02051548->f13 = 2;
                SetUpSallyForCharNo(5, 2);
                SetUpSallyForCharNo(7, 2);
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(vU);
                WaitSyncCounter(0xA);
                ObjSet(vU, 5, vU, vU);
                MTG_CarisumaPosArrange(&spA, &spB);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 1, 0xE, vU, 0x3E8, 0x1C2, 0xBE);
                ObjSet(0xE, 0x14, vU, vU);
                ObjSet(5, 0x14, vU, vU);
                ObjSet(7, 0x14, vU, vU);
                ObjSet(0xE, 0x1E, vU, vU);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x14);
                KuniNameSet(vU, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x53, 0x3D);
                EventDurringTitle(0x1FA5);
            case 0x1FA5:
                if (GetUnitStatus(0xE) == 1) {
                    data_ov000_02051548->step = 0x1FFE;
                    continue;
                }
                if (GetUnitStatus(5) == 1) {
                    data_ov000_02051548->step = 0x2000;
                    continue;
                }
                if (GetUnitStatus(7) == 1) {
                    data_ov000_02051548->step = 0x2002;
                    continue;
                }
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x2004;
                    continue;
                }
                if (GetUnitStatus(0xF1B) == 1 && vH == 1) {
                    data_ov000_02051548->step = 0x2006;
                    continue;
                }
                if (MTG_Check_Live_No(0xF0C, 0xF10) == 0 && vH == 0) {
                    vH                        = 1;
                    data_ov000_02051548->step = 0x1FA8;
                    continue;
                }
                for (i = 0; i < 5; i++) {
                    if (GetHpOrResource(i + 0xF0C) == 0) {
                        vU = i;
                    }
                }
                if (MTG_Check_Live_No(0xF0C, 0xF10) < 5 && vD == 0 && vH == 0) {
                    vD                        = 1;
                    data_ov000_02051548->step = 0x1FA6;
                    continue;
                }
                GetHpOrResourceAndMax(0xF0F, &cur, &mx);
                if (cur < mx * 50 / 100 && vC == 0) {
                    vC = 1;
                    func_ov086_020d03f0();
                }
                GetHpOrResourceAndMax(0xF10, &cur, &mx);
                if (cur < mx * 50 / 100 && vB == 0) {
                    vB = 1;
                    func_ov086_020d042c();
                }
                GetHpOrResourceAndMax(0xF1B, &cur, &mx);
                if (cur < mx * 50 / 100 && vA == 0) {
                    vA                        = 1;
                    data_ov000_02051548->step = 0x1FAA;
                    continue;
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x1FA5;
                continue;
            case 0x1FA6:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, vU + 0xF0C, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x1FB8);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                EventDurringTitle(0x1FA7);
            case 0x1FA7:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x1FA5;
                continue;
            case 0x1FA8:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xE, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x1FC2);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                Routine_SetEvPos(1);
                for (i = 0; i < 5; i++) {
                    ObjSet(i + 0xF17, 0x11, 0x20000, 1);
                    ObjSet(i + 0xF17, 0x21, 1, 0);
                }
                ObjSet(0xF1B, 6, 0x8B, 0);
                ObjSet(0xF1B, 0x14, 0, 0);
                WaitSyncCounter(0x1E);
                MTG_BGM_FadeOutAndChange(0x13);
                CameraMoveAndWait(0x3C, 0, 0x14, 8, -1, -1, -1);
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 0, 0x14, 8, -1, 0x2A8, 0xE6);
                WaitSyncCounter(0x1E);
                ObjSet(0xF17, 0x11, 0x500, 0xB4);
                ObjSet(0xF18, 0x11, 0x500, 0xB4);
                WaitSyncCounter(0x78);
                ObjSet(0xF19, 0x11, 0x500, 0xB4);
                ObjSet(0xF1A, 0x11, 0x500, 0xB4);
                WaitSyncCounter(0xB4);
                WaitSyncCounter(0x3C);
                ObjSet(0xF1B, 0x11, 0x800, 0xC8);
                WaitSyncCounter(0x104);
                ObjSet(0xF1B, 0x11, 0x500, 0xF);
                ObjSet(0xF1B, 6, 0x8C, 0);
                Routine_SoundEffect(0x229);
                Routine_ShakeScreen(1, 0xF);
                WaitSyncCounter(0x78);
                CameraMoveAndWait(0x3C, 1, 0xF1B, 0, 0x352, -1, -1);
                WaitSyncCounter(0x3C);
                ObjSet(0xF1B, 0xE, 0xD, 0);
                WaitSyncCounter(0x18);
                Routine_SoundEffect(0x25A);
                Routine_ShakeScreen(1, 0x5A);
                WaitSyncCounter(0xA);
                Routine_SoundEffect(0x25A);
                WaitSyncCounter(0xAA);
                CameraMoveAndWait(0x3C, 1, 0xF1B, 0, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0x3C);
                for (k = 0; k < 4; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                }
                WaitSyncCounter(0x1E);
                for (i = 0; i < 5; i++) {
                    ObjSet(i + 0xF17, 0x21, 2, 0);
                }
                EventDurringTitle(0x1FA9);
            case 0x1FA9:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x1FA5;
                continue;
            case 0x1FAA:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xF1B, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x1FCC);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                func_ov086_020d0464();
                WaitSyncCounter(0x5A);
                ObjSet(0xF1B, 0xE, 2, 0);
                WaitSyncCounter(0x18);
                Routine_SoundEffect(0x25A);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                WaitSyncCounter(0x1E);
                EventDurringTitle(0x1FAB);
            case 0x1FAB:
                MTG_EndEvent();
                data_ov000_02051548->step = 0x1FA5;
                continue;
            case 0x1FFE:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xE, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x1FD1);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x1FFF);
            case 0x1FFF:
                MTG_BGM_FadeOutAndChange(6);
                EventDurringTitle(0x1FA4);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x2000);
            case 0x2000:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 5, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x1FD6);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x2001);
            case 0x2001:
                MTG_BGM_FadeOutAndChange(6);
                EventDurringTitle(0x1FA4);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x2002);
            case 0x2002:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 7, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x1FDB);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x2003);
            case 0x2003:
                MTG_BGM_FadeOutAndChange(6);
                EventDurringTitle(0x1FA4);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x2004);
            case 0x2004:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x1FE0);
                WaitSyncCounter(0x3C);
                EventDurringTitle(0x2005);
            case 0x2005:
                MTG_BGM_FadeOutAndChange(6);
                EventDurringTitle(0x1FA4);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x2006);
            case 0x2006:
                EventDurringTitle(0x1FA4);
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                ObjSet(0xF1B, 0x21, 1, 0);
                CameraMoveAndWait(0x3C, 1, 0xF1B, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                ObjSet(0xF1B, 0xE, 0xA, 0);
                ObjSet(0xF1B, 0x1B, 1, 0);
                WaitSyncCounter(0x1E);
                MessagePutAndWait(0x1FE5);
                WaitSyncCounter(0xF);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x3C);
                MTG_FreeBattleEnd1();
                Routine_FadeOutAll();
                func_ov086_020d02c8();
                ObjSet_allclear();
                Routine_SetEvPos(5);
                WaitSyncCounter(0xA);
                ObjSet(0xF1B, 6, 0x8B, 0);
                RecoverHpOrResourceByPer(0xF1B, 0x64);
                ObjSet(0xF1B, 0x1C, 1, 0);
                MTG_BGM_FadeOutAndChange(0x13);
                CameraMoveAndWait(1, 1, 0xE, 0, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0x3C);
                Routine_FadeInAll();
                WaitSyncCounter(0x5A);
                MessagePutAndWait(-1);
                WaitSyncCounter(0xF);
                CameraMoveAndWait(0x3C, 1, 0xF24, 0, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0x3C);
                ObjSet(0xF24, 0x1F, 0, 0xF1B);
                WaitSyncCounter(0xF);
                ObjSet(0xF25, 0x1F, 0, 0xF1B);
                CameraMoveAndWait(0x2D, 1, 0xF1B, 0, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0x96);
                TG_setObjDirection_withRelay(0xF1B, 6);
                WaitSyncCounter(0x3C);
                CameraMoveAndWait(0x3C, 1, 0xF1B, 0, 0x384, 0xBE, 0xFA);
                WaitSyncCounter(0x3C);
                ObjSet(0xF1B, 0xE, 0xD, 0);
                WaitSyncCounter(0x18);
                Routine_SoundEffect(0x25A);
                WaitSyncCounter(0x3C);
                Routine_ScreenRGB_ON();
                Routine_ScreenRGB_rgb(0x1F, 0x1F, 0x1F, 0x2D);
                Routine_ScreenRGB_alpha(0x14, 0x1F, 0x2D);
                for (k = 0; k < 4; k++) {
                    Routine_SoundEffect(0x22A);
                    WaitSyncCounter(0xA);
                }
                ObjSet(0xF24, 0xE, 9, 0);
                ObjSet(0xF24, 0x1B, 1, 0);
                ObjSet(0xF25, 0xE, 9, 0);
                ObjSet(0xF25, 0x1B, 1, 0);
                ObjSet(0xF1B, 0xE, 0, 0);
                CameraMoveAndWait(1, 1, 0xF24, 0, 0x514, 0xBE, 0xBE);
                WaitSyncCounter(0x1E);
                Routine_ScreenRGB_rgb(0, 0, 0, 0x3C);
                Routine_ScreenRGB_alpha(0, 0x1F, 0x3C);
                WaitSyncCounter(0x3C);
                Routine_ScreenRGB_OFF();
                WaitSyncCounter(0x5A);
                ObjSet(0xF1B, 0x17, 0xA, 0);
                WaitSyncCounter(0x3C);
                CameraMoveAndWait(0x3C, 1, 0xE, 0, 0x3E8, 0x334, 0xF0);
                WaitSyncCounter(0x5A);
                ObjSet(0xF1B, 0x24, 0, 0x1E);
                WaitSyncCounter(0x1E);
                for (k = 0; k < 5; k++) {
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0xF);
                }
                WaitSyncCounter(0x3C);
                Routine_FadeOutAllByCount(0x5A);
                EventDurringTitle(0x1FA4);
                MTG_FreeBattleEnd2(0x51);
                EndScriptRoutine();
                continue;
        }
    }
}
