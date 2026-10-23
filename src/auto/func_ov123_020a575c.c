int func_ov123_020a575c(unsigned char *arg0) {
    int i;
    for (i = 0; i < 0x20; i++) {
        if (arg0[i] != 0) {
            return 1;
        }
    }
    return 0;
}
