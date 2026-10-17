#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);                    /* extern */
M2C_UNK ReleaseRetryData();                      /* extern */
M2C_UNK InitializeKuniAndUnit();                      /* extern */
M2C_UNK Routine_FadeOutAll();                      /* extern */
M2C_UNK Routine_FadeInAll();                      /* extern */
M2C_UNK Routine_PutEventTitle(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK WaitSyncCounterTouch(M2C_UNK);               /* extern */
M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK Routine_KyotenChange(M2C_UNK);               /* extern */
M2C_UNK ObjSet_allclear();                      /* extern */
M2C_UNK CameraMove(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK EventDurringTitle(M2C_UNK);               /* extern */
M2C_UNK Routine_BattleStart();                      /* extern */
M2C_UNK Routine_SetEvPos(M2C_UNK);               /* extern */
s32 CountEnemyUnit();                          /* extern */
M2C_UNK SetShisetuLevel(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK Routine_SaveGo();                      /* extern */
M2C_UNK SiteSwitching(M2C_UNK);               /* extern */
M2C_UNK SetLogicNoForShipIn(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetLogicParaNoForShipIn(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK KuniNameSet(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK GettingItemOne(s32, s32);              /* extern */
M2C_UNK SetUpCarisumaSally();                      /* extern */
M2C_UNK SetUpSallyForCharNo(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK AddCarisumaToParty(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK Routine_SetEvPosMode(M2C_UNK);               /* extern */
M2C_UNK SelectCarisumaChar();                      /* extern */
M2C_UNK MoveOnPlanTimer();                      /* extern */
M2C_UNK SetPlanTimer(M2C_UNK);               /* extern */
M2C_UNK EndScriptRoutine();                      /* extern */
M2C_UNK SG_judgeAdvantage(M2C_UNK);               /* extern */
M2C_UNK MTG_BGM_FadeOutAndChange(M2C_UNK);               /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

void func_ov046_020d0160(void) {
    s32 temp_r1;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r5;
    u16 temp_r0;

loop_1:
    temp_r0 = (u16) M2C_FIELD(data_ov000_02051548, s32 *, 0xD4);
    switch ((u32) temp_r0) {                        /* irregular */
        case 19:
            break;
        default:
            ReleaseRetryData();
            InitializeKuniAndUnit();
            temp_r1 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r1, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r1, s32 *, 0x210) & ~0x3FFF) | 5);
            temp_r5 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r5, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5, s32 *, 0x210) & 0xF0003FFF) | 0x2C000);
            temp_r6 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r6, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r6, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r3 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3, s32 *, 0x210) & 0xF0003FFF) | 0x78000);
            SetShisetuLevel(0, 6);
            SetShisetuLevel(1, 5);
            SetShisetuLevel(2, 5);
            SetShisetuLevel(3, 5);
            SetShisetuLevel(4, 1);
            SetShisetuLevel(5, 3);
            SetShisetuLevel(6, 1);
            SetShisetuLevel(7, 4);
            SetShisetuLevel(0xC, 1);
            SetShisetuLevel(0xA, 1);
            SetShisetuLevel(0xF, 1);
            SetShisetuLevel(8, 1);
            SetShisetuLevel(0xB, 1);
            SetShisetuLevel(0xD, 1);
            SetShisetuLevel(0xE, 1);
            SetShisetuLevel(9, 1);
            SetLogicNoForShipIn(1, 1);
            SetLogicParaNoForShipIn(1, 0xA);
            KuniNameSet(0, 1);
            AddCarisumaToParty(0x3C, 0);
            AddCarisumaToParty(2, 1);
            AddCarisumaToParty(3, 2);
            AddCarisumaToParty(4, 3);
            AddCarisumaToParty(5, 4);
            AddCarisumaToParty(6, 5);
            AddCarisumaToParty(7, 6);
            AddCarisumaToParty(8, 7);
            AddCarisumaToParty(9, 8);
            AddCarisumaToParty(0xA, 9);
            AddCarisumaToParty(0xB, 0xA);
            MTG_BGM_FadeOutAndChange(0x28);
            var_r5 = 1;
            do {
                GettingItemOne(var_r5, 1);
                var_r5 += 1;
            } while (var_r5 < 0xE8);
            SetUpCarisumaSally();
            M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) =
                (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) & ~0x1E000) | 0xA000);
            SetUpSallyForCharNo(0, 2);
            Routine_SetEvPosMode(2);
            SelectCarisumaChar();
            Routine_KyotenChange(8);
            ObjSet_allclear();
            CameraMove(0x1E, 0, 0x13, 0x15, -1, -1, -1);
            MTG_BGM_FadeOutAndChange(0x19);
            Routine_SetEvPos(0);
            WaitSyncCounter(0xA);
            Routine_FadeInAll();
            SiteSwitching(2);
            SetPlanTimer(0);
            MoveOnPlanTimer();
            EventDurringTitle(1);
        /* fallthrough */
        case 1:
            Routine_BattleStart();
            EventDurringTitle(2);
        /* fallthrough */
        case 2:
            SG_judgeAdvantage(0x19);
            if (CountEnemyUnit() == 0) {
                M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) =
                    (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) & ~0xFFFF) | 3);
            } else {
                M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
                OS_SleepThread(0);
                M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) =
                    (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) & ~0xFFFF) | 2);
            }
            goto loop_1;
        case 3:
            Routine_FadeOutAll();
            Routine_PutEventTitle(1, 1);
            Routine_FadeInAll();
            WaitSyncCounterTouch(0x12C);
            Routine_FadeOutAll();
            EventDurringTitle(0x13);
            break;
    }
    Routine_SaveGo();
    Routine_KyotenChange(1);
    WaitSyncCounter(0xA);
    Routine_FadeInAll();
    EndScriptRoutine();
    goto loop_1;
}
