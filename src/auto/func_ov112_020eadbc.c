void func_ov112_020eadbc(unsigned char *a, short *b) {
    int i;
    for (i = 0; i < 0x400; i++) {
        unsigned char t = a[i];
        *b++            = (t & 0xf) | ((t * 16) & 0xf00);
    }
}
