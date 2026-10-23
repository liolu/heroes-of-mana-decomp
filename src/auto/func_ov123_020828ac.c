/* compiler: 1.2/sp2p3 */
char *func_ov123_020828ac(int **a, int k) {
    char *c = *(char **) (*(char **) a + 0x434);
    while (c) {
        if (*(int *) (c + 0xc) == k && *(int *) c == 0x69) {
            return c;
        }
        c = *(char **) (c + 0x3c);
    }
    return 0;
}
