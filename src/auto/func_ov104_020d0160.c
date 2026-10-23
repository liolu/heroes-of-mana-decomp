#include "m2c.h"

typedef struct {
    u8 pad0[0x14];
    u32 p14 : 8;
    u32 tsel : 4;
    u32 q14 : 20;
    u8 pad18[0x64];
    s32 w7c;
    s32 w80;
    s32 w84;
    s32 w88;
    u8 pad8c[0x44];
    u32 wd0_lo : 13;
    u32 wd0_f : 4;
    u32 wd0_hi : 15;
    u32 hd4 : 16;
    u32 hd4hi : 16;
    u8 padd8[0x688];
    u32 w760_0 : 1;
    u32 w760_1 : 31;
} G;

typedef struct {
    u8 pad[0x210];
    u32 lo : 14;
    u32 mid : 14;
    u32 hi : 4;
} Ent;

typedef struct {
    u8 pad[0x28];
    u8 *tbl;
} Gl;

extern G *data_ov000_02051548;
extern Gl *data_0203673c;
void ReleaseRetryData(void);
void EventDurringTitle(s32);
void InitializeOtherKuniAndUnit(void);
void SetUpCarisumaSally(void);
void Routine_SetEvPosMode(s32);
void SelectCarisumaChar(void);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void Routine_SetEvPos(s32);
void WaitSyncCounter(s32);
void Routine_FadeInAllByCount(s32);
void SetBright3DScreen(s32, s32, s32);
void SetSyouriJouken(s32);
void PutSyouriJouken(void);
void WaitSyncCounterTouch(s32);
void delete_SyouriHaibokuJouken(void);
void SetHaibokuJouken(s32);
void PutHaibokuJouken(void);
void Put__MISSION_START(void);
void delete__MISSION_START(void);
void InitResultData(void);
void Routine_BattleStart(void);
void MoveOnClearTimer(void);
void SetPlanTimer(s32);
void SetGameTimeMax(s32);
void PutOnOffTimer(s32);
void MoveOnPlanTimer(void);
void OS_SleepThread(s32);
s32 GetPlanTimer(void);
void ObjSet(s32, s32, s32, s32);
void StopMovingGame(void);
void Put__MISSION_COMPLETE(void);
void delete__MISSION_COMPLETE(void);
void StopPlanTimer(void);
void StopClearTimer(void);
void SetScenarioNoForResult(s32);
void PutBtlResultForFree(void);
void EndScriptRoutine(void);

void func_ov104_020d0160(void) {
    u32 ev;
    Ent *e;
    while (1) {
        ev = data_ov000_02051548->hd4;
        if (ev != 0) {
            if (ev != 0x14) {
                ReleaseRetryData();
                EventDurringTitle(0x14);
            }
            EventDurringTitle(0);
        }
        InitializeOtherKuniAndUnit();
        SetUpCarisumaSally();
        e      = (Ent *) (data_0203673c->tbl + data_ov000_02051548->tsel * 0x2D0);
        e->lo  = 100;
        e      = (Ent *) (data_0203673c->tbl + data_ov000_02051548->tsel * 0x2D0);
        e->mid = 100;
        Routine_SetEvPosMode(2);
        data_ov000_02051548->wd0_f = 5;
        SelectCarisumaChar();
        Routine_KyotenChange(1);
        ObjSet_allclear();
        data_ov000_02051548->w7c = 0xF;
        data_ov000_02051548->w80 = 0xA;
        data_ov000_02051548->w84 = 0xF;
        data_ov000_02051548->w88 = 0xA;
        Routine_SetEvPos(0);
        WaitSyncCounter(0xA);
        Routine_FadeInAllByCount(0x3C);
        SetBright3DScreen(0, -8, 0x1E);
        SetSyouriJouken(1);
        PutSyouriJouken();
        WaitSyncCounterTouch(0x12C);
        delete_SyouriHaibokuJouken();
        SetBright3DScreen(-8, 0, 0x1E);
        SetBright3DScreen(0, -8, 0x1E);
        SetHaibokuJouken(1);
        PutHaibokuJouken();
        WaitSyncCounterTouch(0x12C);
        delete_SyouriHaibokuJouken();
        SetBright3DScreen(-8, 0, 0x1E);
        Put__MISSION_START();
        WaitSyncCounterTouch(0x12C);
        delete__MISSION_START();
        InitResultData();
        Routine_BattleStart();
        MoveOnClearTimer();
        SetPlanTimer(0);
        SetGameTimeMax(0xA);
        PutOnOffTimer(1);
        MoveOnPlanTimer();
        do {
            data_ov000_02051548->w760_0 = 0;
            OS_SleepThread(0);
        } while (GetPlanTimer() <= 0xA);
        ObjSet(0, 5, 0, 0);
        StopMovingGame();
        Put__MISSION_COMPLETE();
        WaitSyncCounterTouch(0x12C);
        delete__MISSION_COMPLETE();
        StopPlanTimer();
        StopClearTimer();
        SetScenarioNoForResult(0x32);
        EventDurringTitle(0);
        PutBtlResultForFree();
        EndScriptRoutine();
    }
}
