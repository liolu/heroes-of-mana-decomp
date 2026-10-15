#include "m2c.h"

M2C_UNK NNS_SndHeapClear();

M2C_UNK NNS_FndDestroyFrmHeap(s32);

void NNS_SndHeapDestroy(s32 *arg0) {
    NNS_SndHeapClear();
    NNS_FndDestroyFrmHeap(*arg0);
}
