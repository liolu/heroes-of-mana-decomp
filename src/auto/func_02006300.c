/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 NNSi_SndPlayerAllocSeqPlayer(s32, s32, s32);
s32 NNSi_SndPlayerAllocHeap(s32, s32);
s32 NNSi_SndArcLoadBank(s32, s32, s32, s32, s32 *);
void NNSi_SndPlayerFreeSeqPlayer(s32);
s32 func_02006104(s32, s32, s32, s32, s32 *);
void NNSi_SndPlayerStartSeq(s32, s32, s32, s32);
void NNS_SndPlayerSetInitialVolume(s32, s32);
void NNS_SndPlayerSetChannelPriority(s32, s32);
void func_02004448(s32, s32);

s32 func_02006300(s32 a0, s32 a1, s32 a2, s32 a3, u8 *a4, s32 a5) {
    s32 seq;
    s32 heap;
    s32 v4;
    s32 v8;
    seq = NNSi_SndPlayerAllocSeqPlayer(a0, a1, a3);
    if (seq == 0) {
        return 0;
    }
    heap = NNSi_SndPlayerAllocHeap(a1, seq);
    if (NNSi_SndArcLoadBank(a2, 6, heap, 0, &v8) != 0) {
        NNSi_SndPlayerFreeSeqPlayer(seq);
        return 0;
    }
    if (func_02006104(a5, 1, heap, 0, &v4) != 0) {
        NNSi_SndPlayerFreeSeqPlayer(seq);
        return 0;
    }
    NNSi_SndPlayerStartSeq(seq, v4 + *(s32 *) (v4 + 0x18), 0, v8);
    NNS_SndPlayerSetInitialVolume(a0, a4[6]);
    NNS_SndPlayerSetChannelPriority(a0, a4[7]);
    func_02004448(a0, a5);
    return 1;
}
