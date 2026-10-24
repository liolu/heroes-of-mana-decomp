/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad0 : 29;
    u32 on : 1;
    u32 pad1 : 2;
} GFlag;

typedef struct {
    u32 lo : 6;
    u32 a : 1;
    u32 b : 1;
    u32 mid : 8;
    u32 hi : 16;
} WFlag;

typedef struct {
    u8 pad0[0x10];
    GFlag f;
} G;

extern s32 WH_SendData(void *, u16, void *);
extern void func_0200fddc(void);
extern G *data_ov000_02051548;
extern u8 data_ov003_020b53f0[];
extern u8 OkSend[];
extern u32 data_ov003_020b53fc[];

typedef struct {
    u8 pad0[0x70];
    u32 w70;
    u32 w74;
    u32 w78;
    u8 pad1[0x174 - 0x7C];
    WFlag fl;
    u32 w178;
    u32 w17c;
    u8 *w180;
    u32 w184;
    u32 w188;
    u32 w18c;
    s32 w190;
} W;

extern W data_ov003_020b5380;

void SendOnePack(void) {
    u32 *s;
    u32 *d;
    u32 n;

    if (data_ov000_02051548->f.on == 0) {
        return;
    }
    if (data_ov003_020b5380.fl.b != 0) {
        data_ov003_020b5380.w70 = (data_ov003_020b5380.fl.hi) | 0x40000000;
        data_ov003_020b5380.w78 = data_ov003_020b5380.w18c;
        if (WH_SendData(data_ov003_020b53f0, 0xC, OkSend) == 1) {
            data_ov003_020b5380.fl.a = 0;
            data_ov003_020b5380.fl.b = 0;
            data_ov003_020b5380.w190 = -1;
            return;
        }
    }
    data_ov003_020b5380.w190 = data_ov003_020b5380.w18c - data_ov003_020b5380.w188;
    if ((u32) data_ov003_020b5380.w190 > 0xEC) {
        data_ov003_020b5380.w190 = 0xEC;
    }
    if (data_ov003_020b5380.w190 == 0) {
        data_ov003_020b5380.w70 = data_ov003_020b5380.fl.hi | 0x80000000;
        if (WH_SendData(data_ov003_020b53f0, 0xC, OkSend) == 1) {
            data_ov003_020b5380.fl.a = 0;
        } else {
            goto fail;
        }
    } else {
        data_ov003_020b5380.w70 = data_ov003_020b5380.fl.hi;
        data_ov003_020b5380.w74 = data_ov003_020b5380.w188;
        data_ov003_020b5380.w78 = data_ov003_020b5380.w190;
        n                       = (u32) (data_ov003_020b5380.w190 + 3) >> 2;
        d                       = data_ov003_020b53fc;
        s                       = (u32 *) (data_ov003_020b5380.w180 + data_ov003_020b5380.w188);
        if (n != 0) {
            do {
                *d++ = *s++;
            } while (--n != 0);
        }
        if (WH_SendData(data_ov003_020b53f0, (u16) (data_ov003_020b5380.w190 + 0xC), OkSend) == 1) {
            if (data_ov003_020b5380.w70 & 0x80000000) {
                func_0200fddc();
            }
            data_ov003_020b5380.fl.a = 0;
        } else {
        fail:
            data_ov003_020b5380.fl.a = 1;
        }
    }
}
