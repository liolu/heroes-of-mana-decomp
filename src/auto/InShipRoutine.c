/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 f0 : 4;
    u32 f4 : 4;
    u32 pad8 : 5;
    u32 f13 : 4;
    u32 rest : 15;
    u32 w4;
} E8;

typedef struct {
    u8 pad[0x21C];
    E8 ent[9];
    u8 pad2[0x2D0 - 0x21C - 72];
} P;

typedef struct {
    u8 pad[0x28];
    P *f28;
} T;

typedef struct {
    u32 pad0 : 11;
    u32 mode : 2;
    u32 idx : 4;
    u32 pad17 : 5;
    u32 sel : 5;
    u32 rest0 : 5;
    u32 st : 5;
    u32 sub : 5;
    u32 rest4 : 22;
    u8 pad8[6];
    u16 e;
    u8 pad10[0x31 - 0x10];
    u8 b31;
    u8 pad32[2];
    u8 b34;
    u8 pad35[0x3C - 0x35];
    u8 obj3C[0x368 - 0x3C];
    s32 a368[8];
} H;

typedef struct {
    u8 pad0[0x10];
    u32 b0 : 1;
    u32 p10 : 28;
    u32 b29 : 1;
    u32 r10 : 2;
    u8 pad14[0x20 - 0x14];
    u32 p20 : 12;
    u32 b12 : 1;
    u32 r20 : 19;
    u8 pad24[0x25E - 0x24];
    u16 h25E;
    u8 pad260[0x7A8 - 0x260];
    u32 p7A8 : 3;
    u32 f3 : 3;
    u32 r7A8 : 26;
    u16 h7AC;
} G;

extern G *data_ov000_02051548;
extern H *data_ov109_020ea340;
extern T *data_0203673c;

void SetUpDataInShip(void);
void AengineSetUpForShipInner(void);
void BengineSetUpForShipInner(void);
void KihonPalTrans(void);
void MesPalTransToObjPal(void);
void IconPalTransInShip(s32, s32, s32);
void PutCommonIconInShip(void);
void PutCarisumaSkill(void);
void PutNowCanMakeUnitKazu(void);
void PutWirelessLevel(void);
void SetUpFactoryData(s32, s32);
s32 oneLoopInShip(s32);
void FadeInScreen(s32);
void InitMessageScreenForDS(s32);
void MoveShipShake(void);
void MoveUnitAndAnime(s32, s32);
void PutMakingGage(void);
void MoveUnitAllInShip(void);
void SetBrightnessEng(s32, s32);
void ChangeComObjByFunc(void *, void *);
void deleteComObjByPutflag(void *);
void putOneSelUnitKazuIcon(s32, s32);
void putOneShisetuIcon(s32, s32);
void ChangeObjAnimeInShipAeng(s32, s32);
void touchIconEffectInShip(void);
void deleteTouchPosIconInShip(void);
void ReleaseExtObjPaletteTrans(void);
void ReleaseExtBGPaletteTrans(void);
void ReleaseTexPaletteTrans(void);
void DeleteMakingGage(void);
void DeleteCommonIconInShip(void);
void FadeOutScreen(s32);
void FadeOutScreenX2X(s32, s32, s32);
void ReleaseDataInShip(void);
void changeMoveLeftOneChar(void);
void changeMoveRightOneChar(void);

void InShipRoutine(u32 arg) {
    s32 i;

    data_ov000_02051548->h7AC = 0;
    SetUpDataInShip();
    data_ov109_020ea340->idx = arg;
    AengineSetUpForShipInner();
    BengineSetUpForShipInner();
    KihonPalTrans();
    MesPalTransToObjPal();
    IconPalTransInShip(4, 0, 0);
    IconPalTransInShip(5, 0, 1);
    IconPalTransInShip(6, 1, 0);
    PutCommonIconInShip();
    PutCarisumaSkill();
    PutNowCanMakeUnitKazu();
    if (data_ov000_02051548->b29 != 0) {
        data_ov000_02051548->f3 = 0;
        PutWirelessLevel();
    }
    for (i = 0; i < 9; i++) {
        E8 *e = &data_0203673c->f28[data_ov109_020ea340->idx].ent[i];
        if (e->f0 != 0) {
            s32 k = i;
            if (i == 8) {
                k = i + e->f13;
            }
            SetUpFactoryData(e->f4, k);
        }
    }
    oneLoopInShip(0);
    FadeInScreen(3);
    InitMessageScreenForDS(0);
    for (;;) {
        if (data_ov000_02051548->b0 != 0) {
            data_ov000_02051548->h25E = 0;
            break;
        }
        if (oneLoopInShip(1) == 0) {
            break;
        }
        MoveShipShake();
        if (data_ov109_020ea340->st == 1 || data_ov109_020ea340->st == 0xF || data_ov109_020ea340->st == 0x10) {
            break;
        }
        if (data_ov000_02051548->b29 != 0) {
            if (((s32) (*(volatile u16 *) 0x27FFFA8 & 0x8000) >> 15) == 1) {
                break;
            }
        }
        if (data_ov109_020ea340->sub == 0x11) {
            MoveUnitAndAnime(0, 0);
        } else {
            MoveUnitAndAnime(1, 0);
        }
        PutMakingGage();
        MoveUnitAllInShip();
        if (data_ov109_020ea340->st == 1 || data_ov109_020ea340->st == 0xF || data_ov109_020ea340->st == 0x10) {
            break;
        }
        if (data_ov109_020ea340->sub == 0) {
            goto L0;
        }
        if (data_ov109_020ea340->sub == 2) {
            goto L2;
        }
        if (data_ov109_020ea340->sub == 3) {
            goto L3;
        }
        if (data_ov109_020ea340->sub != 0x11) {
            continue;
        }
        {
            if (data_ov109_020ea340->e != 0) {
                data_ov109_020ea340->e = data_ov109_020ea340->e - 1;
                SetBrightnessEng(3, ((0x5A - data_ov109_020ea340->e) << 4) / 0x5A);
            }
            if (data_ov109_020ea340->e == 0) {
                data_ov109_020ea340->st     = 0x10;
                data_ov109_020ea340->mode   = 1;
                *(volatile s32 *) 0x4000000 = *(volatile s32 *) 0x4000000 & ~0x1F00;
                *(volatile s32 *) 0x4001000 = *(volatile s32 *) 0x4001000 & ~0x1F00;
            }
            continue;
        }
    L2: {
        ChangeComObjByFunc(data_ov109_020ea340->obj3C, changeMoveLeftOneChar);
        deleteComObjByPutflag(data_ov109_020ea340->obj3C);
        data_ov109_020ea340->e = data_ov109_020ea340->e - 1;
        if (data_ov109_020ea340->e == 2) {
            if (data_ov109_020ea340->st == 0xE) {
                putOneSelUnitKazuIcon(data_ov109_020ea340->sel + 4, 0xDC);
                if (data_ov109_020ea340->b34 == data_ov109_020ea340->a368[data_ov109_020ea340->sel + 4]) {
                    ChangeObjAnimeInShipAeng(data_ov109_020ea340->b34 + 0xFF26, 1);
                }
            } else {
                putOneShisetuIcon(data_ov109_020ea340->sel + 5, 0xDC);
                if (data_ov109_020ea340->b31 == data_ov109_020ea340->a368[data_ov109_020ea340->sel + 5]) {
                    ChangeObjAnimeInShipAeng(data_ov109_020ea340->b31 + 0xFF0A, 1);
                }
            }
        }
        if (data_ov109_020ea340->e == 0) {
            data_ov109_020ea340->sub = 0;
        }
        continue;
    }
    L3: {
        ChangeComObjByFunc(data_ov109_020ea340->obj3C, changeMoveRightOneChar);
        deleteComObjByPutflag(data_ov109_020ea340->obj3C);
        data_ov109_020ea340->e = data_ov109_020ea340->e - 1;
        if (data_ov109_020ea340->e == 2) {
            if (data_ov109_020ea340->st == 0xE) {
                putOneSelUnitKazuIcon(data_ov109_020ea340->sel, 0x5C);
                if (data_ov109_020ea340->b34 == data_ov109_020ea340->a368[data_ov109_020ea340->sel]) {
                    ChangeObjAnimeInShipAeng(data_ov109_020ea340->b34 + 0xFF26, 1);
                }
            } else {
                putOneShisetuIcon(data_ov109_020ea340->sel, 0x44);
                if (data_ov109_020ea340->b31 == data_ov109_020ea340->a368[data_ov109_020ea340->sel]) {
                    ChangeObjAnimeInShipAeng(data_ov109_020ea340->b31 + 0xFF0A, 1);
                }
            }
        }
        if (data_ov109_020ea340->e == 0) {
            data_ov109_020ea340->sub = 0;
        }
        continue;
    }
    L0: {
        switch (data_ov109_020ea340->st) {
            case 0:
                touchIconEffectInShip();
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
                touchIconEffectInShip();
                break;
        }
        continue;
    }
    }
    data_ov000_02051548->b12 = 0;
    deleteTouchPosIconInShip();
    ReleaseExtObjPaletteTrans();
    ReleaseExtBGPaletteTrans();
    ReleaseTexPaletteTrans();
    DeleteMakingGage();
    DeleteCommonIconInShip();
    switch (data_ov109_020ea340->mode) {
        case 0:
            FadeOutScreen(3);
            break;
        case 1:
            FadeOutScreenX2X(3, 0x10, -0x10);
            break;
    }
    ReleaseDataInShip();
}
