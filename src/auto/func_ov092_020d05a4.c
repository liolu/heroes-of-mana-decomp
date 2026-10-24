#include "m2c.h"

s32 CalRnd(void);
void Routine_SetEvPosFadeIn(void);
void Routine_SetEvPos(s32);
s32 GetUnitStatus(s32);
void RecoverHpOrResourceByPer(s32, s32);

void func_ov092_020d05a4(u32 *arg0) {
    s32 i;
    s32 r = CalRnd();
    if (r % 10 >= 5) {
        Routine_SetEvPosFadeIn();
        Routine_SetEvPos(1);
        for (i = 0; i < 6; i++) {
            *arg0 |= 1 << i;
            if (GetUnitStatus(i + 0xF0C) != 0) {
                RecoverHpOrResourceByPer(i + 0xF0C, 100);
            }
        }
    } else {
        Routine_SetEvPosFadeIn();
        Routine_SetEvPos(2);
        for (i = 0; i < 6; i++) {
            *arg0 |= 1 << (i + 6);
            if (GetUnitStatus(i + 0xF0C) != 0) {
                RecoverHpOrResourceByPer(i + 0xF12, 100);
            }
        }
    }
}
