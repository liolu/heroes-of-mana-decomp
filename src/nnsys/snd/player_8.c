#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02036c34;
extern M2C_UNK data_02036c30;

void NNS_SndPlayerSetAllocatableChannel(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02036c34 + (arg0 * 0x24))) = arg1;
}

void NNS_SndPlayerSetPlayableSeqCount(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02036c30 + (arg0 * 0x24))) = (s32) (u16) arg1;
}
