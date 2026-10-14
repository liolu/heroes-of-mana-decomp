/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02003ee8 from projets/blue-dragon-awakened-shadow/src/donor/func_02003ee8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
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
extern UnkGxVramState data_02038580;
extern UnkGxVramState data_02038580;
extern void func_02009754(u32 lcdc);
void func_0200a300(s32 subObj) {
    data_02038580.lcdc   = ~subObj & (data_02038580.lcdc | data_02038580.subObj);
    data_02038580.subObj = subObj;

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
    func_02009754(data_02038580.lcdc);
}
