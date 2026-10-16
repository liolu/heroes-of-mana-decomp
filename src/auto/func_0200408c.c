/* compiler: 1.2/sp3 */
#include "m2c.h"

void ForceStopSeq(void *player);
void NNSi_SndFaderSet(void *fader, s32 arg1, s32 arg2);
void SetPlayerPriority(void *player, s32 arg1);

void func_0200408c(u8 *param_1, s32 param_2) {
    if (param_1 == NULL) {
        return;
    }
    if (param_1[0x2C] == 0) {
        return;
    }
    if (param_2 == 0) {
        ForceStopSeq(param_1);
        return;
    }
    NNSi_SndFaderSet(param_1 + 0x1C, 0, param_2);
    SetPlayerPriority(param_1, 0);
    param_1[0x2C] = 2;
}
