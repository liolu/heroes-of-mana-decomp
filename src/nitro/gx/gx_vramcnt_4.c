/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u8 vu8;
typedef struct {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clearImage;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 subBg;
    u16 subObj;
    u16 subBgExtPltt;
    u16 subObjExtPltt;
} UnkGxVramState;
extern UnkGxVramState gGXState;
extern UnkGxVramState gGXState;
extern void GX_VRAMCNT_SetLCDC_(u32 lcdc);

/* func_02003e40 from projets/blue-dragon-awakened-shadow/src/donor/func_02003e40.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_SetBankForSubBG(s32 subBg) {
    gGXState.lcdc  = ~subBg & (gGXState.lcdc | gGXState.subBg);
    gGXState.subBg = subBg;

    switch (subBg) {
        case 0x004:
            (*(vu8 *) 0x04000242) = 0x84;
            break;
        case 0x180:
            (*(vu8 *) 0x04000249) = 0x81;
        case 0x080:
            (*(vu8 *) 0x04000248) = 0x81;
            break;
        case 0x000:
        default:
            break;
    }
    GX_VRAMCNT_SetLCDC_(gGXState.lcdc);
}

/* func_02003ee8 from projets/blue-dragon-awakened-shadow/src/donor/func_02003ee8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_SetBankForSubOBJ(s32 subObj) {
    gGXState.lcdc   = ~subObj & (gGXState.lcdc | gGXState.subObj);
    gGXState.subObj = subObj;

    switch (subObj) {
        case 0x008:
            (*(vu8 *) 0x04000243) = 0x84;
            break;
        case 0x100:
            (*(vu8 *) 0x04000249) = 0x82;
            break;
        case 0x000:
        default:
            break;
    }
    GX_VRAMCNT_SetLCDC_(gGXState.lcdc);
}

/* func_02003f58 from projets/blue-dragon-awakened-shadow/src/donor/func_02003f58.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_SetBankForSubBGExtPltt(s32 subBgExtPltt) {
    gGXState.lcdc         = ~subBgExtPltt & (gGXState.lcdc | gGXState.subBgExtPltt);
    gGXState.subBgExtPltt = subBgExtPltt;

    switch (subBgExtPltt) {
        case 0x080:
            (*(u32 *) ((0x04001000) | 0x0)) |= 0x40000000;
            (*(vu8 *) 0x04000248) = 0x82;
            break;
        case 0x000:
            (*(u32 *) ((0x04001000) | 0x0)) &= ~0x40000000;
            break;
    }
    GX_VRAMCNT_SetLCDC_(gGXState.lcdc);
}

/* func_02003fd8 from projets/blue-dragon-awakened-shadow/src/donor/func_02003fd8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_SetBankForSubOBJExtPltt(s32 subObjExtPltt) {
    gGXState.lcdc          = ~subObjExtPltt & (gGXState.lcdc | gGXState.subObjExtPltt);
    gGXState.subObjExtPltt = subObjExtPltt;

    switch (subObjExtPltt) {
        case 0x100:
            (*(u32 *) ((0x04001000) | 0x0)) |= 0x80000000;
            (*(vu8 *) 0x04000249) = 0x83;
            break;
        case 0x000:
            (*(u32 *) ((0x04001000) | 0x0)) &= ~0x80000000;
            break;
    }
    GX_VRAMCNT_SetLCDC_(gGXState.lcdc);
}
