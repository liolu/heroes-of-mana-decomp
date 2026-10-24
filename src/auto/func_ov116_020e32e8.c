extern unsigned short *func_0200a7b8(void);
void func_ov116_020e32e8(int x, int y, int n, int pal) {
    unsigned short *p = func_0200a7b8() + (x + y * 32);
    int i;
    for (i = 0; i < n; i++) {
        p[i]      = (p[i] & 0xfff) + (pal << 12);
        p[i + 32] = (p[i + 32] & 0xfff) + (pal << 12);
    }
}
