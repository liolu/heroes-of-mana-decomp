/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02003c40 from projets/blue-dragon-awakened-shadow/src/donor/func_02003c40.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
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
extern UnkGxVramState data_02038580;
extern UnkGxVramState data_02038580;
extern void func_02009754(u32 lcdc);
void func_0200a058(s32 clearImage) {
    data_02038580.lcdc       = ~clearImage & (data_02038580.lcdc | data_02038580.clearImage);
    data_02038580.clearImage = clearImage;

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
    func_02009754(data_02038580.lcdc);
}
