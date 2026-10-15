#include "m2c.h"

M2C_UNK NNSi_SndPlayerMain();

M2C_UNK NNSi_SndCaptureMain();

M2C_UNK NNSi_SndArcStrmMain();

s32 SND_RecvCommandReply(M2C_UNK);

M2C_UNK SND_FlushCommand(M2C_UNK);

void NNS_SndMain(void) {
    do {

    } while (SND_RecvCommandReply(0) != 0);
    NNSi_SndPlayerMain();
    NNSi_SndCaptureMain();
    NNSi_SndArcStrmMain();
    SND_FlushCommand(0);
}
