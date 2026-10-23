unsigned func_ov123_0209386c(unsigned char *p) {
    unsigned v = 0;
    v |= p[0] << 24;
    v |= p[1] << 16;
    v |= p[2] << 8;
    v |= p[3];
    return ((v >> 24) & 0xFF) | ((v >> 8) & 0xFF00) | ((v << 8) & 0xFF0000) | ((v << 24) & 0xFF000000);
}
