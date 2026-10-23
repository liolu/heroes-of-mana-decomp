extern char *data_ov123_020e4790;
int func_ov123_020ce604(void) {
    int v;
    if (data_ov123_020e4790 == 0) {
        return 0;
    }
    v = *(int *) (data_ov123_020e4790 + 0xe44);
    if (v == 0) {
        *(int *) (data_ov123_020e4790 + 0xe44) = 1;
        return 0;
    }
    if (v == 3) {
        return 1;
    }
    return 0;
}
