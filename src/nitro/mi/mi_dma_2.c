/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef volatile u32 vu32;
extern void MI_WaitDma(u32 dmaNo);
typedef unsigned short u16;
typedef volatile u16 vu16;
typedef int s32;
extern void func_0200fddc(void);

/* func_02067384 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma.c (license: none), reused by
 * tools/donor_match.py */
static inline void UnkWaitDmaBusy(u32 dmaNo) {
    vu32 *cnt = &(((vu32 *) 0x040000b0)[(dmaNo) * 3 + 2]);
    while (*cnt & 0x80000000) {
    }
}

void MI_WaitDma(u32 dmaNo) {
    u32 e = func_0200fa98();
    UnkWaitDmaBusy(dmaNo);
    if (dmaNo == 0) {
        vu32 *p = (vu32 *) (0x040000b0 + dmaNo * 12);
        p[0]    = 0;
        p[1]    = 0;
        p[2]    = 0x81400001;
    }
    func_0200faac(e);
}

/* func_020673ec from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma.c (license: none), reused by
 * tools/donor_match.py */
void MI_StopDma(u32 dmaNo) {
    u32 e = func_0200fa98();
    (((vu16 *) 0x040000b0)[(dmaNo) * 6 + 5]) &= ~0x3a00;
    (((vu16 *) 0x040000b0)[(dmaNo) * 6 + 5]) &= ~0x8000;
    (((vu16 *) 0x040000b0)[(dmaNo) * 6 + 5]);
    (((vu16 *) 0x040000b0)[(dmaNo) * 6 + 5]);
    if (dmaNo == 0) {
        vu32 *p = (vu32 *) (0x040000b0 + dmaNo * 12);
        p[0]    = 0;
        p[1]    = 0;
        p[2]    = 0x81400001;
    }
    func_0200faac(e);
}

/* func_02067468 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma.c (license: none), reused by
 * tools/donor_match.py */
void MIi_CheckAnotherAutoDMA(u32 dmaNo, u32 dmaType) {
    s32 i;
    vu32 *cnt = &(((vu32 *) 0x040000b0)[(0) * 3 + 2]);

    for (i = 0; i < 3; i++, cnt += 3) {
        u32 dmaCnt;
        if (i == dmaNo) {
            continue;
        }
        dmaCnt = *cnt;
        if (!(dmaCnt & 0x80000000)) {
            continue;
        }
        dmaCnt &= 0x38000000;
        if (dmaCnt == dmaType) {
            continue;
        }
        if (dmaCnt == 0x08000000 && dmaType == 0x10000000) {
            continue;
        }
        if (dmaCnt == 0x10000000 && dmaType == 0x08000000) {
            continue;
        }
        if (dmaCnt == 0x18000000 || dmaCnt == 0x20000000 || dmaCnt == 0x28000000 || dmaCnt == 0x30000000 ||
            dmaCnt == 0x38000000 || dmaCnt == 0x08000000 || dmaCnt == 0x10000000) {
            func_0200fddc();
        }
    }
}
