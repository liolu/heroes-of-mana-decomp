/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207d880 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_mp.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
extern void MIi_CpuClear32(u32 value, void *dest, u32 size);
typedef void (*UnkWmCallbackFunc)(void *arg);
extern u32 func_02019b20(UnkWmCallbackFunc callback, u16 *recvBuf, s32 recvBufSize, u16 *sendBuf, u16 sendBufSize,
                         void *tmpParam);
typedef struct UnkWmMPTmpParam {
    u32 mask;
    u16 minFrequency;
    u16 frequency;
    u8 unk_08[0x14];
} UnkWmMPTmpParam;
u32 func_02019b20(UnkWmCallbackFunc callback, u16 *recvBuf, s32 recvBufSize, u16 *sendBuf, u16 sendBufSize, void *tmpParam);
u32 func_02019d20(UnkWmCallbackFunc callback, u16 *recvBuf, s32 recvBufSize, u16 *sendBuf, u16 sendBufSize, u16 mpFreq) {
    UnkWmMPTmpParam tmpParam;

    MIi_CpuClear32(0, &tmpParam, sizeof(UnkWmMPTmpParam));
    tmpParam.mask         = 3;
    tmpParam.minFrequency = mpFreq;
    tmpParam.frequency    = mpFreq;
    return func_02019b20(callback, recvBuf, recvBufSize, sendBuf, sendBufSize, &tmpParam);
}
