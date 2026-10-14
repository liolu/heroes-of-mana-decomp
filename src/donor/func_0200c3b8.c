/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02005e34 from projets/blue-dragon-awakened-shadow/src/donor/func_02005e34.c (same code in another game of this
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
extern const u16 data_02034748[8];
extern s32 func_0200a500(void);
void func_0200c3b8(void) {
    s32 bank                       = func_0200a500();
    data_020385b8.texPlttBank      = bank;
    data_020385b8.texPlttStartAddr = data_02034748[bank >> 4] << 12;
}
