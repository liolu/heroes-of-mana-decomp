/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02005c4c from projets/blue-dragon-awakened-shadow/src/donor/func_02005c4c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef struct {
    s32 clearImageBank;
    u32 texStartAddr;
    u32 texPlttStartAddr;
    s32 texPlttBank;
    u32 clearImageAddr;
    s32 texBank;
    u32 texStartAddr2;
    u32 texSize1;
} UnkGxLoad3dState;
extern UnkGxLoad3dState data_020385b8;
extern const u16 data_02034758[16][3];
extern s32 func_0200a4ec(void);
void func_0200c1d0(void) {
    s32 bank                    = func_0200a4ec();
    data_020385b8.texBank       = bank;
    data_020385b8.texStartAddr  = data_02034758[bank][0] << 12;
    data_020385b8.texStartAddr2 = data_02034758[bank][1] << 12;
    data_020385b8.texSize1      = data_02034758[bank][2] << 12;
}
