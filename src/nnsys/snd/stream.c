#include "m2c.h"

M2C_UNK NNS_SndFreeAlarm(s32);

M2C_UNK func_020078b4(M2C_UNK *, void *);

extern M2C_UNK sStrmList;

void ShutdownStrm(void *arg0) {
    NNS_SndFreeAlarm(M2C_FIELD(arg0, s32 *, 0x40));
    func_020078b4(&sStrmList, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
