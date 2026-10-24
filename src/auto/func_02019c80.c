#include "m2c.h"

extern void MIi_CpuClear32(u32 value, void *dest, u32 size);
typedef void (*UnkWmCallbackFunc)(void *arg);
extern u32 func_02019b20(UnkWmCallbackFunc callback, u16 *recvBuf, s32 recvBufSize, u16 *sendBuf, u16 sendBufSize,
                         void *tmpParam);

typedef struct {
    u32 mask;
    u16 minFrequency;
    u16 frequency;
    u16 unk_08;
    u8 unk_0a[0x0c];
    u16 unk_16;
    u8 unk_18;
    u8 unk_19;
    u8 unk_1a;
    u8 unk_1b;
} TmpParam;

u32 func_02019c80(UnkWmCallbackFunc callback, u16 *recvBuf, s32 recvBufSize, u16 *sendBuf, u16 sendBufSize, u16 f1, u16 f2,
                  u32 f3, u32 f4, u32 f5, u32 f6) {
    TmpParam tmpParam;

    MIi_CpuClear32(0, &tmpParam, sizeof(TmpParam));
    tmpParam.mask         = 0x1E03;
    tmpParam.minFrequency = f1;
    tmpParam.frequency    = f1;
    tmpParam.unk_16       = f2;
    tmpParam.unk_18       = f3;
    tmpParam.unk_19       = f4;
    tmpParam.unk_1a       = f6;
    if (f5 != 0) {
        tmpParam.mask |= 4;
        tmpParam.unk_08 = f1;
    }
    return func_02019b20(callback, recvBuf, recvBufSize, sendBuf, sendBufSize, &tmpParam);
}
