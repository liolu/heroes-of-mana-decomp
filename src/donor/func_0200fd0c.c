/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_GetLowEntropyData from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_entropy.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef volatile u64 vu64;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
extern u32 OS_GetTickLo(void);
typedef struct UnkSystemWork {
    u8 unk_000[0x3c];
    u32 unk_03c;
    u8 unk_040[0xf4 - 0x40];
    u32 unk_0f4;
    u16 unk_0f8;
    u8 unk_0fa[0x1e8 - 0xfa];
    u32 unk_1e8;
    u32 unk_1ec;
    u8 unk_1f0[0x390 - 0x1f0];
    u32 unk_390;
    u16 unk_394;
    u16 unk_396;
    u16 unk_398;
    u8 unk_39a[0x3a8 - 0x39a];
    u16 unk_3a8;
    u16 unk_3aa;
    u16 unk_3ac;
} UnkSystemWork;
extern vu64 OSi_TickCounter;
static inline UnkSystemWork *GetSystemWork(void) {
    return (UnkSystemWork *) 0x027ffc00;
}
#pragma opt_propagation off
void func_0200fd0c(u32 *buffer) {
    u16 vcount          = *(vu16 *) 0x04000006;
    UnkSystemWork *work = GetSystemWork();
    UnkSystemWork *sys;

    buffer[0] = OS_GetTickLo() | (vcount << 16);
    buffer[1] = (u32) ((work->unk_0f8 << 16) ^ OSi_TickCounter);
    sys       = GetSystemWork();
    buffer[2] = sys->unk_03c ^ (u32) ((OSi_TickCounter >> 32) ^ work->unk_0f4);
    buffer[2] ^= *(vu32 *) 0x04000600;
    buffer[3] = sys->unk_1e8;
    buffer[4] = sys->unk_1ec;
    buffer[5] = (sys->unk_394 << 16) ^ sys->unk_390;
    buffer[6] = (sys->unk_3aa << 16) | sys->unk_3ac;
    buffer[7] = (*(vu16 *) 0x04000130 | *(u16 *) 0x027fffa8) | (sys->unk_398 << 16);
}
