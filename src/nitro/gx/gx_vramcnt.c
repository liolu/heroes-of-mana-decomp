/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned char u8;
typedef volatile u8 vu8;
typedef unsigned short u16;
typedef int s32;
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
typedef volatile u16 vu16;

/* func_0200333c from projets/blue-dragon-awakened-shadow/src/donor/func_0200333c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_VRAMCNT_SetLCDC_(u32 lcdc) {
    if (lcdc & 0x001) {
        (*(vu8 *) 0x04000240) = 0x80;
    }
    if (lcdc & 0x002) {
        (*(vu8 *) 0x04000241) = 0x80;
    }
    if (lcdc & 0x004) {
        (*(vu8 *) 0x04000242) = 0x80;
    }
    if (lcdc & 0x008) {
        (*(vu8 *) 0x04000243) = 0x80;
    }
    if (lcdc & 0x010) {
        (*(vu8 *) 0x04000244) = 0x80;
    }
    if (lcdc & 0x020) {
        (*(vu8 *) 0x04000245) = 0x80;
    }
    if (lcdc & 0x040) {
        (*(vu8 *) 0x04000246) = 0x80;
    }
    if (lcdc & 0x080) {
        (*(vu8 *) 0x04000248) = 0x80;
    }
    if (lcdc & 0x100) {
        (*(vu8 *) 0x04000249) = 0x80;
    }
}

/* func_020033f4 from projets/blue-dragon-awakened-shadow/src/donor/func_020033f4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_SetBankForBG(s32 bg) {
    gGXState.lcdc = ~bg & (gGXState.lcdc | gGXState.bg);
    gGXState.bg   = bg;

    switch (bg) {
        case 0x08:
            (*(vu8 *) 0x04000243) = 0x81;
            break;
        case 0x0c:
            (*(vu8 *) 0x04000243) = 0x89;
        case 0x04:
            (*(vu8 *) 0x04000242) = 0x81;
            break;
        case 0x0e:
            (*(vu8 *) 0x04000243) = 0x91;
        case 0x06:
            (*(vu8 *) 0x04000242) = 0x89;
        case 0x02:
            (*(vu8 *) 0x04000241) = 0x81;
            break;
        case 0x0f:
            (*(vu8 *) 0x04000243) = 0x99;
        case 0x07:
            (*(vu8 *) 0x04000242) = 0x91;
        case 0x03:
            (*(vu8 *) 0x04000241) = 0x89;
        case 0x01:
            (*(vu8 *) 0x04000240) = 0x81;
            break;
        case 0x0b:
            (*(vu8 *) 0x04000240) = 0x81;
            (*(vu8 *) 0x04000241) = 0x89;
            (*(vu8 *) 0x04000243) = 0x91;
            break;
        case 0x0d:
            (*(vu8 *) 0x04000243) = 0x91;
        case 0x05:
            (*(vu8 *) 0x04000240) = 0x81;
            (*(vu8 *) 0x04000242) = 0x89;
            break;
        case 0x09:
            (*(vu8 *) 0x04000240) = 0x81;
            (*(vu8 *) 0x04000243) = 0x89;
            break;
        case 0x0a:
            (*(vu8 *) 0x04000241) = 0x81;
            (*(vu8 *) 0x04000243) = 0x89;
            break;
        case 0x70:
            (*(vu8 *) 0x04000246) = 0x99;
        case 0x30:
            (*(vu8 *) 0x04000245) = 0x91;
        case 0x10:
            (*(vu8 *) 0x04000244) = 0x81;
            break;
        case 0x50:
            (*(vu8 *) 0x04000246) = 0x91;
            (*(vu8 *) 0x04000244) = 0x81;
            break;
        case 0x60:
            (*(vu8 *) 0x04000246) = 0x89;
        case 0x20:
            (*(vu8 *) 0x04000245) = 0x81;
            break;
        case 0x40:
            (*(vu8 *) 0x04000246) = 0x81;
            break;
        default:
            break;
    }
    GX_VRAMCNT_SetLCDC_(gGXState.lcdc);
}

/* func_02003684 from projets/blue-dragon-awakened-shadow/src/donor/func_02003684.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_SetBankForOBJ(s32 obj) {
    gGXState.lcdc = ~obj & (gGXState.lcdc | gGXState.obj);
    gGXState.obj  = obj;

    switch (obj) {
        case 0x03:
            (*(vu8 *) 0x04000241) = 0x8a;
        case 0x01:
            (*(vu8 *) 0x04000240) = 0x82;
        case 0x00:
            break;
        case 0x02:
            (*(vu8 *) 0x04000241) = 0x82;
            break;
        case 0x70:
            (*(vu8 *) 0x04000246) = 0x9a;
        case 0x30:
            (*(vu8 *) 0x04000245) = 0x92;
        case 0x10:
            (*(vu8 *) 0x04000244) = 0x82;
            break;
        case 0x50:
            (*(vu8 *) 0x04000246) = 0x92;
            (*(vu8 *) 0x04000244) = 0x82;
            break;
        case 0x60:
            (*(vu8 *) 0x04000246) = 0x8a;
        case 0x20:
            (*(vu8 *) 0x04000245) = 0x82;
            break;
        case 0x40:
            (*(vu8 *) 0x04000246) = 0x82;
            break;
        default:
            break;
    }
    GX_VRAMCNT_SetLCDC_(gGXState.lcdc);
}

/* func_020037d4 from projets/blue-dragon-awakened-shadow/src/donor/func_020037d4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_SetBankForBGExtPltt(s32 bgExtPltt) {
    gGXState.lcdc      = ~bgExtPltt & (gGXState.lcdc | gGXState.bgExtPltt);
    gGXState.bgExtPltt = bgExtPltt;

    switch (bgExtPltt) {
        case 0x10:
            (*(u32 *) ((0x04000000) | 0x0)) |= 0x40000000;
            (*(vu8 *) 0x04000244) = 0x84;
            break;
        case 0x40:
            (*(u32 *) ((0x04000000) | 0x0)) |= 0x40000000;
            (*(vu8 *) 0x04000246) = 0x8c;
            break;
        case 0x60:
            (*(vu8 *) 0x04000246) = 0x8c;
        case 0x20:
            (*(vu8 *) 0x04000245) = 0x84;
            (*(u32 *) ((0x04000000) | 0x0)) |= 0x40000000;
            break;
        case 0x00:
            (*(u32 *) ((0x04000000) | 0x0)) &= ~0x40000000;
            break;
        default:
            break;
    }
    GX_VRAMCNT_SetLCDC_(gGXState.lcdc);
}

/* func_020038d4 from projets/blue-dragon-awakened-shadow/src/donor/func_020038d4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_SetBankForOBJExtPltt(s32 objExtPltt) {
    gGXState.lcdc       = ~objExtPltt & (gGXState.lcdc | gGXState.objExtPltt);
    gGXState.objExtPltt = objExtPltt;

    switch (objExtPltt) {
        case 0x20:
            (*(u32 *) ((0x04000000) | 0x0)) |= 0x80000000;
            (*(vu8 *) 0x04000245) = 0x85;
            break;
        case 0x40:
            (*(u32 *) ((0x04000000) | 0x0)) |= 0x80000000;
            (*(vu8 *) 0x04000246) = 0x85;
            break;
        case 0x00:
            (*(u32 *) ((0x04000000) | 0x0)) &= ~0x80000000;
            break;
        default:
            break;
    }
    GX_VRAMCNT_SetLCDC_(gGXState.lcdc);
}

/* func_02003980 from projets/blue-dragon-awakened-shadow/src/donor/func_02003980.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_SetBankForTex(s32 tex) {
    gGXState.lcdc = ~tex & (gGXState.lcdc | gGXState.tex);
    gGXState.tex  = tex;

    if (tex == 0) {
        (*(vu16 *) 0x04000060) &= (u16) ~(1 | 0x1000 | 0x2000);
    } else {
        (*(vu16 *) 0x04000060) = (u16) (((*(vu16 *) 0x04000060) & ~(0x1000 | 0x2000)) | 1);

        switch (tex) {
            case 0x05:
                (*(vu8 *) 0x04000240) = 0x83;
                (*(vu8 *) 0x04000242) = 0x8b;
                break;
            case 0x09:
                (*(vu8 *) 0x04000240) = 0x83;
                (*(vu8 *) 0x04000243) = 0x8b;
                break;
            case 0x0a:
                (*(vu8 *) 0x04000241) = 0x83;
                (*(vu8 *) 0x04000243) = 0x8b;
                break;
            case 0x0b:
                (*(vu8 *) 0x04000240) = 0x83;
                (*(vu8 *) 0x04000241) = 0x8b;
                (*(vu8 *) 0x04000243) = 0x93;
                break;
            case 0x0d:
                (*(vu8 *) 0x04000240) = 0x83;
                (*(vu8 *) 0x04000242) = 0x8b;
                (*(vu8 *) 0x04000243) = 0x93;
                break;
            case 0x08:
                (*(vu8 *) 0x04000243) = 0x83;
                break;
            case 0x0c:
                (*(vu8 *) 0x04000243) = 0x8b;
            case 0x04:
                (*(vu8 *) 0x04000242) = 0x83;
                break;
            case 0x0e:
                (*(vu8 *) 0x04000243) = 0x93;
            case 0x06:
                (*(vu8 *) 0x04000242) = 0x8b;
            case 0x02:
                (*(vu8 *) 0x04000241) = 0x83;
                break;
            case 0x0f:
                (*(vu8 *) 0x04000243) = 0x9b;
            case 0x07:
                (*(vu8 *) 0x04000242) = 0x93;
            case 0x03:
                (*(vu8 *) 0x04000241) = 0x8b;
            case 0x01:
                (*(vu8 *) 0x04000240) = 0x83;
                break;
            default:
                break;
        }
    }
    GX_VRAMCNT_SetLCDC_(gGXState.lcdc);
}

/* func_02003b58 from projets/blue-dragon-awakened-shadow/src/donor/func_02003b58.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_SetBankForTexPltt(s32 texPltt) {
    gGXState.lcdc    = ~texPltt & (gGXState.lcdc | gGXState.texPltt);
    gGXState.texPltt = texPltt;

    switch (texPltt) {
        case 0x60:
            (*(vu8 *) 0x04000246) = 0x8b;
        case 0x20:
            (*(vu8 *) 0x04000245) = 0x83;
            break;
        case 0x40:
            (*(vu8 *) 0x04000246) = 0x83;
            break;
        case 0x70:
            (*(vu8 *) 0x04000246) = 0x9b;
        case 0x30:
            (*(vu8 *) 0x04000245) = 0x93;
        case 0x10:
            (*(vu8 *) 0x04000244) = 0x83;
            break;
        case 0x00:
        default:
            break;
    }
    GX_VRAMCNT_SetLCDC_(gGXState.lcdc);
}

/* func_02003c40 from projets/blue-dragon-awakened-shadow/src/donor/func_02003c40.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_SetBankForClearImage(s32 clearImage) {
    gGXState.lcdc       = ~clearImage & (gGXState.lcdc | gGXState.clearImage);
    gGXState.clearImage = clearImage;

    switch (clearImage) {
        case 0x03:
            (*(vu8 *) 0x04000240) = 0x93;
        case 0x02:
            (*(vu8 *) 0x04000241) = 0x9b;
            (*(vu16 *) 0x04000060) |= 0x4000;
            break;
        case 0x0c:
            (*(vu8 *) 0x04000242) = 0x93;
        case 0x08:
            (*(vu8 *) 0x04000243) = 0x9b;
            (*(vu16 *) 0x04000060) |= 0x4000;
            break;
        case 0x00:
            (*(vu16 *) 0x04000060) &= ~0x4000;
            break;
        case 0x01:
            (*(vu8 *) 0x04000240) = 0x9b;
            (*(vu16 *) 0x04000060) |= 0x4000;
            break;
        case 0x04:
            (*(vu8 *) 0x04000242) = 0x9b;
            (*(vu16 *) 0x04000060) |= 0x4000;
            break;
        default:
            break;
    }
    GX_VRAMCNT_SetLCDC_(gGXState.lcdc);
}
