/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndSeqParam {
    u32 fileId;
    u16 bankNo;
    u8 volume;
    u8 channelPrio;
    u8 playerPrio;
    u8 playerNo;
} UnkSndSeqParam;
typedef struct UnkSndSeqData {
    u8 unk_00[0x18];
    u32 dataOffset;
} UnkSndSeqData;
extern int NNSi_SndArcLoadBank(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *NNSi_SndPlayerAllocSeqPlayer(void *handle, int playerNo, int prio);
extern void NNSi_SndPlayerFreeSeqPlayer(void *seqPlayer);
extern void NNSi_SndPlayerStartSeq(void *seqPlayer, const void *seq, u32 offset, const void *bank);
extern void *NNSi_SndPlayerAllocHeap(int playerNo, void *seqPlayer);
extern void NNS_SndPlayerSetInitialVolume(void *handle, int volume);
extern void NNS_SndPlayerSetChannelPriority(void *handle, int prio);
extern void NNS_SndPlayerSetSeqArcNo(void *handle, int seqArcNo, int index);
extern BOOL StartSeqArc(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, UnkSndSeqData *seqArc,
                        int seqArcNo, int index);

/* func_020759e0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcplayer.c (license: none),
 * reused by tools/donor_match.py */
BOOL StartSeqArc(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, UnkSndSeqData *seqArc,
                 int seqArcNo, int index) {
    void *seqPlayer;
    void *heap;
    void *bank;

    seqPlayer = NNSi_SndPlayerAllocSeqPlayer(handle, playerNo, playerPrio);
    if (seqPlayer == 0) {
        return 0;
    }

    heap = NNSi_SndPlayerAllocHeap(playerNo, seqPlayer);

    if (NNSi_SndArcLoadBank(bankNo, 6, heap, 0, &bank) != 0) {
        NNSi_SndPlayerFreeSeqPlayer(seqPlayer);
        return 0;
    }

    NNSi_SndPlayerStartSeq(seqPlayer, (u8 *) seqArc + seqArc->dataOffset, param->fileId, bank);
    NNS_SndPlayerSetInitialVolume(handle, param->volume);
    NNS_SndPlayerSetChannelPriority(handle, param->channelPrio);
    NNS_SndPlayerSetSeqArcNo(handle, seqArcNo, index);
    return 1;
}
