/* compiler: 1.2/sp2p3 */
unsigned char func_ov115_020e756c(unsigned char *a) {
    unsigned char s = 0;
    unsigned i;
    for (i = 0; i < 0xe; i++) {
        s += (unsigned char) (a[i] ^ 0xff);
    }
    return s;
}
