typedef struct G {
    char p[0x488];
    unsigned int lo : 3;
    unsigned int mode : 8;
    unsigned int hi : 21;
} G;
extern G data_ov112_020ec588;
extern void func_ov112_020e92ac(void);
extern void func_ov112_020e64bc(void);
extern void func_ov112_020e86f4(void);
void func_ov112_020e9abc(void) {
    switch (data_ov112_020ec588.mode) {
        case 1:
            *(volatile unsigned int *) 0x4000000 &= ~0xe000;
            func_ov112_020e92ac();
            break;
        case 2:
        case 4:
        case 8:
            *(volatile unsigned int *) 0x4000000 &= ~0xe000;
            func_ov112_020e64bc();
            break;
        case 16:
        case 32:
            func_ov112_020e86f4();
            break;
    }
}
