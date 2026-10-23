void **func_ov123_02073408(void **p, void *k) {
    void *c = *p;
    while (c) {
        if (c == k) {
            return p;
        }
        p = (void **) ((char *) c + 0x7c);
        c = *p;
    }
    return 0;
}
