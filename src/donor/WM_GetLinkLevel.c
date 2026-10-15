/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207cfe0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_system.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
extern void DC_InvalidateRange(void *ptr, u32 size);
typedef void (*UnkWmCallbackFunc)(void *arg);
typedef struct UnkWmStatus {
    u16 state;
    u8 unk_002[0xa];
    u32 unk_00c;
    u8 unk_010[0x2c];
    u16 unk_03c;
    u16 unk_03e;
    u8 unk_040[0x32];
    u16 unk_072;
    u8 unk_074[0x8];
    u32 unk_07c;
    u8 unk_080[0x6];
    u16 unk_086;
    u8 unk_088[0x14];
    u16 unk_09c;
    u8 unk_09e[0x1e];
    u16 unk_0bc;
    u8 unk_0be[0x8];
    u16 unk_0c6;
    u8 unk_0c8[0x30];
    u16 unk_0f8;
    u8 unk_0fa[0x88];
    u16 unk_182;
    u8 unk_184[0x4];
    u16 unk_188;
} UnkWmStatus;
typedef struct UnkWmArm9Buf {
    void *unk_000;
    UnkWmStatus *status;
    void *unk_008;
    void *unk_00c;
    void *unk_010;
    u16 dmaNo;
    u16 unk_016;
    UnkWmCallbackFunc callbackTable[0x2c];
    UnkWmCallbackFunc indCallback;
    UnkWmCallbackFunc portCallbackTable[16];
    void *portCallbackArgument[16];
    u32 connectedAidBitmap;
    u16 myAid;
} UnkWmArm9Buf;
extern UnkWmArm9Buf *WMi_GetSystemWork(void);
extern u32 WMi_CheckInitialized(void);
UnkWmArm9Buf *WMi_GetSystemWork(void);
u32 WMi_CheckInitialized(void);
u16 WM_GetLinkLevel(void) {
    UnkWmArm9Buf *p = WMi_GetSystemWork();

    if (WMi_CheckInitialized() != 0) {
        return 0;
    }
    DC_InvalidateRange(&p->status->state, 2);
    switch (p->status->state) {
        case 9:
            DC_InvalidateRange(&p->status->unk_182, 2);
            if (p->status->unk_182 == 0) {
                return 0;
            }
        case 10:
        case 11:
            DC_InvalidateRange(&p->status->unk_0bc, 2);
            return p->status->unk_0bc;
    }
    return 0;
}
