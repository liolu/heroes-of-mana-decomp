typedef struct {
    unsigned char pad0[2];
    short s2;
    unsigned char pad1[0x220];
    unsigned int cnt : 16;
    unsigned int flag : 1;
    unsigned int rest : 15;
} S10e8;
extern S10e8 data_ov117_020f10e8;
extern unsigned char data_ov117_020f110c[];
extern unsigned char data_ov117_020f237c[];
typedef struct {
    int w0;
    int w4;
    int w8;
    int wc;
    unsigned char pad[0xAB0 - 0x10];
    unsigned int idx : 8;
    unsigned int mid : 16;
    unsigned int b24 : 1;
    unsigned int b25 : 1;
    unsigned int b26 : 1;
    unsigned int rest : 5;
} S23e0;
extern S23e0 data_ov117_020f23e0;
extern unsigned char data_ov117_020f23f4[];
extern unsigned char data_ov117_020f27f4[];
typedef struct {
    unsigned int lo : 8;
    unsigned int hi : 24;
} B8;
extern B8 data_ov117_020f2e90;
void MIi_CpuCopy16(void *, void *, unsigned int);
void func_ov117_020e4fa8(int, int);
void func_ov117_020e4fd8(void);
void func_ov117_020e5018(int, int, int, int);
int func_ov117_020e57a4(int);
void func_ov117_020e6af8(void *);
void func_ov117_020e8828(void) {
    data_ov117_020f23e0.w4         = 1;
    data_ov117_020f23e0.wc         = 1;
    *(int *) 0x04001010            = (0x01FF0000 & ((data_ov117_020f10e8.s2 + 6) << 16)) | 1;
    *(unsigned short *) 0x04001048 = (*(unsigned short *) 0x04001048 & ~0x3F) | 0x2F;
    *(unsigned short *) 0x0400104A = (*(unsigned short *) 0x0400104A & ~0x3F) | 0x3E;
    *(unsigned short *) 0x04001048 = (*(unsigned short *) 0x04001048 & ~0x3F00) | 0x2F00;
    *(short *) 0x04001040          = 0x64E8;
    *(short *) 0x04001044          = 0x28B8;
    *(short *) 0x04001042          = 5;
    *(short *) 0x04001046          = 0xC0;
    *(int *) 0x04001000            = (*(int *) 0x04001000 & ~0xE000) | 0x6000;
    func_ov117_020e4fd8();
    if (data_ov117_020f23e0.b24 != 0) {
        func_ov117_020e5018(0xF0, 0x10, 9, 1);
    }
    if (*(short *) (data_ov117_020f237c + 0x60) != -1) {
        func_ov117_020e5018(0xF4, 0x2C, func_ov117_020e57a4(0x2C) + 0xF, 0);
        func_ov117_020e5018(0xF4, 0xB4, func_ov117_020e57a4(0x2D) + 0x11, 0);
        func_ov117_020e6af8(&data_ov117_020f10e8);
        MIi_CpuCopy16(data_ov117_020f27f4, data_ov117_020f23f4 + ((unsigned int) data_ov117_020f23e0.idx << 3), 0x80);
        data_ov117_020f2e90.lo = data_ov117_020f2e90.lo + 0x10;
        if (data_ov117_020f10e8.flag != 0) {
            MIi_CpuCopy16(data_ov117_020f110c, data_ov117_020f23f4 + ((unsigned int) data_ov117_020f23e0.idx << 3),
                          (unsigned int) data_ov117_020f10e8.cnt << 3);
            data_ov117_020f2e90.lo = data_ov117_020f10e8.cnt + data_ov117_020f2e90.lo;
        }
    }
    func_ov117_020e4fa8(0, 0x400);
    if (data_ov117_020f23e0.b26 != 0) {
        data_ov117_020f23e0.b26 = 0;
    }
}
