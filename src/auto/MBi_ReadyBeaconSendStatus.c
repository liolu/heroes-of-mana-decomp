#include "m2c.h"
typedef struct {
    u8 pad[0x4b4];
    u8 f4b4;
    u8 pad2[7];
    u32 f4bc;
} Inner;
typedef struct {
    u8 pad[0x18];
    Inner *cur;
    Inner *sel;
    u8 pad2[4];
    u8 state;
    u8 pad3;
    u8 f26;
} MbSt;
extern MbSt sUnlockFunc;
extern u8 bsendBuff;
s32 MBi_GetGgid(void);
u16 MBi_GetTgid(void);
s32 WM_SetGameInfo(void *a, s32 b, u32 c, s32 d, u16 e, u8 f);
void MBi_ClearSendStatus(void);
s32 MBi_ReadyBeaconSendStatus(void) {
    Inner *n;
    if (*(u32 *) ((u8 *) &sUnlockFunc + 0x18) == 0) {
        s32 g = MBi_GetGgid();
        u16 t = MBi_GetTgid();
        WM_SetGameInfo(0, (s32) &bsendBuff, 0x70, g, t, 8);
        return 0;
    }
    if (sUnlockFunc.sel == 0 || (n = (Inner *) sUnlockFunc.sel->f4bc) == 0) {
        n = sUnlockFunc.cur;
    }
    sUnlockFunc.sel = n;
    MBi_ClearSendStatus();
    sUnlockFunc.f26   = sUnlockFunc.sel->f4b4;
    sUnlockFunc.state = 2;
    return 1;
}
