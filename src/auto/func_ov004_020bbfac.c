extern int func_ov004_020bbff0(void);
int func_ov004_020bbfac(char *a) {
    int i = func_ov004_020bbff0();
    char *t;
    if (i >= *(int *) (a + 8)) {
        return 0;
    }
    t = *(char **) (a + 0xc) + i * 12;
    *(unsigned short *) t += 1;
    return *(int *) (*(char **) (a + 0xc) + i * 12 + 4);
}
