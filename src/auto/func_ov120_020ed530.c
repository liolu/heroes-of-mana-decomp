extern unsigned short *func_ov120_020ed39c(int, int, int, int, int, int, int);
void func_ov120_020ed530(int a, int b, int c, int d, int e, int f, int g) {
    unsigned short *p = func_ov120_020ed39c(a, b, c, d, e, f, g);
    p[0]              = 0xC395;
    p[0x20]           = 0xC3B5;
}
