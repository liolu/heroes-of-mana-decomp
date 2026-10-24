#include "m2c.h"

void ReleaseRetryData(void);
void MemoKeywordFlag(s32, s32);
void MemoPersonFlag(s32, s32);
void SetFreeScenarioOnOff(s32, s32);
void SystemHelpMessageMaxSet(s32);
void func_ov123_0209c798(s32);
void EndScriptRoutine(void);

void func_ov036_020d0160(void) {
    s32 i;
    while (1) {
        ReleaseRetryData();
        for (i = 1; i < 0x3C; i++) {
            MemoKeywordFlag(i, 0);
        }
        for (i = 1; i < 0xE0; i++) {
            MemoPersonFlag(i, 0);
        }
        for (i = 1; i < 0x2C; i++) {
            SetFreeScenarioOnOff(i, 1);
        }
        SystemHelpMessageMaxSet(0x17);
        func_ov123_0209c798(0x21);
        EndScriptRoutine();
    }
}
