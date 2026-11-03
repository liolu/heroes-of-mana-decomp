/* compiler: 2.0/sp1p5 -profile */
typedef unsigned int u32;
typedef unsigned short u16;
typedef signed char s8;
typedef unsigned char u8;
typedef int s32;
typedef struct {
    u8 pad[0x118];
    u32 mode : 2;
    u32 g : 5;
    u32 h : 5;
    u32 r118 : 20;
    u32 lo : 12;
    u32 mid : 12;
    u32 hi : 8;
    u32 c : 12;
    u32 d : 20;
    s8 b124;
    s8 b125;
} S;
extern S *data_ov000_02051548;
extern volatile u16 REG_BLDCNT_EXT;

void SetScreenRGB_AengineChangePower(s32 a, s32 b, s32 c) {
    if (data_ov000_02051548->mode != 0) {
        data_ov000_02051548->mid  = 0;
        data_ov000_02051548->c    = c;
        data_ov000_02051548->b125 = a;
        data_ov000_02051548->h    = b;
        if (c == 0) {
            data_ov000_02051548->b124   = a;
            data_ov000_02051548->g      = b;
            *(volatile u16 *) 0x4000052 = a | (b << 8);
        }
    }
}
