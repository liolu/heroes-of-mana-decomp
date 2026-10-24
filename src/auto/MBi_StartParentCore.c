#include "m2c.h"

typedef struct {
    u8 pad0[0x32];
    u16 h32;
    u16 h34;
    u16 h36;
    u8 pad38[0x4c8];
    u16 h500;
    u16 h502;
    u8 pad504[4];
    void *p508;
    u8 pad50c[0xc];
    u16 h518;
    u16 h51a;
    void *p51c;
    u8 pad520[4];
    u16 h524;
} PW;

typedef struct {
    u8 pad0[0x1318];
    s32 w1318;
    u8 pad131c[0x1c8];
    s32 w14e4;
    s32 w14e8[15];
    u8 b1524;
    u8 pad1525;
    s8 b1526[15];
} QW;

extern struct {
    s32 w0;
    u32 w4;
    PW *w8;
    QW *wc;
} WM_DMA_NO;

s32 func_0200fa98(void);
void func_0200faac(s32);
void MIi_CpuClear16(s32, void *, s32);
void MB_CommSetParentStateCallback(s32);
void MBi_SetChildMPMaxSize(s32);
void MBi_SetParentPieceBuffer(void *);
void MI_CpuFill8(void *, s32, s32);
void MB_InitSendGameInfoStatus(void);
s32 MBi_StartCommon(void);
s32 PXI_IsCallbackReady(s32, s32);
extern void func_0201b260(void);
extern void MBi_ParentCallback(void);

s32 MBi_StartParentCore(u16 arg) {
    s32 old;
    s32 r;
    s32 cb;
    s32 i;
    u8 *w;
    old               = func_0200fa98();
    WM_DMA_NO.w8->h32 = arg;
    w                 = (u8 *) WM_DMA_NO.wc;
    WM_DMA_NO.w4      = ((u32) w + 0x1f + 0x7d00) & ~0x1f;
    cb                = *(s32 *) (w + 0x14e4);
    MIi_CpuClear16(0, w + 0x1340, 0x69c0);
    MB_CommSetParentStateCallback(cb);
    WM_DMA_NO.wc->w1318 = WM_DMA_NO.w8->h500 - 6;
    MBi_SetChildMPMaxSize(WM_DMA_NO.w8->h502);
    MBi_SetParentPieceBuffer((u8 *) WM_DMA_NO.wc + 0x1538);
    for (i = 0; i < 15; i++) {
        WM_DMA_NO.wc->w14e8[i] = 0;
        WM_DMA_NO.wc->b1526[i] = -1;
    }
    WM_DMA_NO.wc->b1524 = 0;
    MIi_CpuClear16(0, (u8 *) WM_DMA_NO.wc + 0x1788, 0x5d40);
    MI_CpuFill8((u8 *) WM_DMA_NO.wc + 0x1754, 0, 0x1e);
    WM_DMA_NO.w8->h524 = 1;
    WM_DMA_NO.w8->p51c = func_0201b260;
    WM_DMA_NO.w8->p508 = MBi_ParentCallback;
    WM_DMA_NO.w8->h34  = WM_DMA_NO.w8->h500;
    WM_DMA_NO.w8->h518 = (WM_DMA_NO.w8->h34 + 0x23) & ~0x1f;
    WM_DMA_NO.w8->h36  = WM_DMA_NO.w8->h502;
    WM_DMA_NO.w8->h51a = ((WM_DMA_NO.w8->h36 + 0xe) * 15 + 0x29 & ~0x1f) << 1;
    MB_InitSendGameInfoStatus();
    r = MBi_StartCommon();
    func_0200faac(old);
    *(s32 *) ((u8 *) WM_DMA_NO.wc + 0x74c8) = PXI_IsCallbackReady(0xf, 1);
    return r;
}
