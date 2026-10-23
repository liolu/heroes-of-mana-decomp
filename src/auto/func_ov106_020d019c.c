#include "m2c.h"

typedef struct G {
    u32 pad0;
    u32 pad4;
    u32 lo : 8;
    u32 st : 3;
    u32 hi : 21;
} G;
extern G *data_ov000_02051548;
extern u8 data_ov003_020b532c[];

void ReleaseRetryData(void);
void StopMovingGame(void);
void SetBright3DScreen(s32, s32, s32);
void WaitSyncCounter(s32);
void Put_Any_SyouriHaibokuJouken(s32, s32, s32, s32, s32);
void delete_SyouriHaibokuJouken(void);
void Put__MISSION_START(void);
void delete__MISSION_START(void);
void Routine_BattleStart(void);
void SetPlanTimer(s32);
void PutOnOffTimer(s32);
void MoveOnPlanTimer(void);
void OS_SleepThread(s32);
void CancelPutShipInner(void);
void WaitShipInnerToBtlField(void);
void Put__MISSION_TIMEUP(void);
void delete__MISSION_WINLOSEDRAW(void);
void func_ov106_020d0160(s32);
void Put__MISSION_LOSE(void);
void Put__MISSION_WIN(void);
void Put__MISSION_DRAW(void);
void Routine_FadeOutAll(void);
void VS_Battle_Endding(void);
void EndScriptRoutine(void);

void func_ov106_020d019c(void) {
    s32 a;
    s32 b;
    u8 *p;
    s32 t;

    for (;;) {
        ReleaseRetryData();
        StopMovingGame();
        b                       = 0;
        data_ov000_02051548->st = 0;

        switch (data_ov003_020b532c[2]) {
            case 0:
                a = 0x50;
                if (data_ov003_020b532c[1] != 0) {
                    b = 0x51;
                }
                break;
            case 1:
                a = 0x52;
                if (data_ov003_020b532c[1] != 0) {
                    b = 0x53;
                }
                break;
            case 2:
                a = 0x54;
                if (data_ov003_020b532c[1] != 0) {
                    b = 0x55;
                }
                break;
            case 3:
            default:
                a = 0x56;
                break;
        }
        SetBright3DScreen(0, -8, 0x14);
        WaitSyncCounter(0x14);
        Put_Any_SyouriHaibokuJouken(0, a, b, 0, 0);
        WaitSyncCounter(0x12c);
        delete_SyouriHaibokuJouken();
        SetBright3DScreen(-8, 0, 0x14);
        WaitSyncCounter(0x14);
        WaitSyncCounter(0x1e);
        Put__MISSION_START();
        WaitSyncCounter(0x5a);
        delete__MISSION_START();
        Routine_BattleStart();
        SetPlanTimer(0);
        PutOnOffTimer(1);
        MoveOnPlanTimer();
        do {
            *(u32 *) ((u8 *) data_ov000_02051548 + 0x760) &= ~1;
            OS_SleepThread(0);
        } while (data_ov000_02051548->st == 0);
        StopMovingGame();
        CancelPutShipInner();
        WaitShipInnerToBtlField();
        if (data_ov000_02051548->st & 4) {
            Put__MISSION_TIMEUP();
            WaitSyncCounter(0x78);
            delete__MISSION_WINLOSEDRAW();
            WaitSyncCounter(0x1e);
        }
        t = data_ov000_02051548->st & ~4;
        switch (t) {
            case 1:
                func_ov106_020d0160(6);
                Put__MISSION_LOSE();
                break;
            case 2:
                func_ov106_020d0160(5);
                Put__MISSION_WIN();
                break;
            case 3:
            default:
                Put__MISSION_DRAW();
                break;
        }
        WaitSyncCounter(0xb4);
        delete__MISSION_WINLOSEDRAW();
        Routine_FadeOutAll();
        VS_Battle_Endding();
        EndScriptRoutine();
    }
}
