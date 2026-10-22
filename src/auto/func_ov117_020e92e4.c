extern void MIi_CpuCopy16(void *, void *, int);
extern void func_ov117_020e4fa8(int, int);
extern void func_ov117_020e4fd8(void);
extern void func_ov117_020e5018(int, int, int, int);
extern int func_ov117_020e57a4(int);
extern void func_ov117_020e6af8(void *);
extern int data_ov117_020f0f18[];
extern unsigned char data_ov117_020f1d18[];
extern int data_ov117_020f23e0[];
extern unsigned char data_ov117_020f23f4[];
extern unsigned char data_ov117_020f27f4[];
extern struct {
    unsigned int lo : 8;
    unsigned int hi : 24;
} data_ov117_020f2e90;

void func_ov117_020e92e4(void) {
    data_ov117_020f23e0[1]         = 1;
    data_ov117_020f23e0[3]         = 1;
    *(int *) 0x04001010            = 0x01FF0000 & ((*(short *) ((unsigned char *) data_ov117_020f0f18 + 2) + 6) << 16);
    *(unsigned short *) 0x04001048 = (*(unsigned short *) 0x04001048 & ~0x3F) | 0x3F;
    *(unsigned short *) 0x0400104A = (*(unsigned short *) 0x0400104A & ~0x3F) | 0x3E;
    *(short *) 0x04001040          = 0x8E0;
    *(short *) 0x04001044          = 0x28B8;
    *(int *) 0x04001000            = (*(int *) 0x04001000 & ~0xE000) | 0x2000;
    func_ov117_020e4fd8();
    if (((unsigned int) (data_ov117_020f23e0[0x2AC] << 7) >> 31) != 0) {
        func_ov117_020e5018(0xF0, 0x10, 9, 1);
    }
    if (*(short *) (data_ov117_020f1d18 + 0x60) != -1) {
        func_ov117_020e5018(0xF4, 0x2C, func_ov117_020e57a4(0x3B) + 0xF, 0);
        func_ov117_020e5018(0xF4, 0xB4, func_ov117_020e57a4(0x3C) + 0x11, 0);
        func_ov117_020e6af8(data_ov117_020f0f18);
        MIi_CpuCopy16(data_ov117_020f27f4, data_ov117_020f23f4 + ((unsigned int) (data_ov117_020f23e0[0x2AC] << 24) >> 21),
                      0x80);
        data_ov117_020f2e90.lo += 0x10;
    }
    func_ov117_020e4fa8(0, 0x400);
    if (((unsigned int) (data_ov117_020f23e0[0x2AC] << 5) >> 31) != 0) {
        data_ov117_020f23e0[0x2AC] = data_ov117_020f23e0[0x2AC] & ~0x04000000;
    }
}
