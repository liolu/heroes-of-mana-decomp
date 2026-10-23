/* compiler: 1.2/sp3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct G {
    u8 pad0[0x200];
    u16 h200;
    u8 pad1[2];
    u32 w204;
    u8 pad2[0x648 - 0x208];
    u16 h648;
    u16 h64a;
    u8 pad3[0xa90 - 0x64c];
    u8 b_a90;
    u8 pad4[0xaa4 - 0xa91];
    u8 *p_aa4;
} G;
extern G *data_ov123_020e470c;
extern u32 func_ov123_020c6db4(void);
extern void func_ov123_020c66c4(int, u16, u16);
extern void func_ov123_020c7904(int, u16, void *);
extern void func_ov123_020c7814(void);
extern int func_ov123_020c77fc(void);
void func_ov123_020c7b3c(void) {
    switch (func_ov123_020c6db4()) {
        case 1:
            func_ov123_020c66c4(4, (u16) (data_ov123_020e470c->h648 + 1), data_ov123_020e470c->h64a);
            return;
        case 4:
        case 5:
        case 6:
            func_ov123_020c7904(0, data_ov123_020e470c->h200,
                                data_ov123_020e470c->p_aa4 + (data_ov123_020e470c->h200 % 16) * 64);
            func_ov123_020c7814();
            if (data_ov123_020e470c->b_a90 == 0x1b) {
                return;
            }
            if (data_ov123_020e470c->w204 > 0x1e0) {
                data_ov123_020e470c->b_a90 = 0x1b;
                return;
            }
            if (func_ov123_020c77fc() == 0x10 || func_ov123_020c77fc() == 0x20) {
                func_ov123_020c77fc();
                data_ov123_020e470c->b_a90 = 0xa;
                return;
            }
            if (func_ov123_020c77fc() == 0x40) {
                data_ov123_020e470c->b_a90 = 0xb;
                return;
            }
            if (func_ov123_020c77fc() == 0xff) {
                data_ov123_020e470c->b_a90 = 0x1b;
                return;
            }
            if (func_ov123_020c77fc() == 0x50) {
                data_ov123_020e470c->b_a90 = 0x15;
                return;
            }
            if (func_ov123_020c77fc() == 0x60) {
                data_ov123_020e470c->b_a90 = 0x18;
                return;
            }
            if (func_ov123_020c77fc() == 0x70) {
                data_ov123_020e470c->b_a90 = 0x1b;
                return;
            }
            if (func_ov123_020c77fc() == 0) {
                data_ov123_020e470c->b_a90 = 8;
                return;
            }
            if (func_ov123_020c77fc() == 0xbd) {
                data_ov123_020e470c->b_a90 = 9;
                return;
            }
            data_ov123_020e470c->b_a90 = 0x1f;
            return;
        default:
            return;
    }
}
