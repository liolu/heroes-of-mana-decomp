/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02003230 from projets/blue-dragon-awakened-shadow/src/donor/func_02003230.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_02035aac;
extern u16 data_0203857c;
extern u16 data_02035aac;
extern u16 data_0203857c;
void func_02009648(u32 dispMode, u32 bgMode, u32 bg0_2d3d) {
    u32 cnt = (*(u32 *) ((0x04000000) | 0x0));

    data_0203857c = dispMode;
    if (!data_02035aac) {
        dispMode = 0;
    }
    (*(u32 *) ((0x04000000) | 0x0)) = (cnt & ~0xf000f) | (dispMode << 16) | bgMode | (bg0_2d3d << 3);
    if (data_0203857c == 0) {
        data_02035aac = 0;
    }
}
