extern int func_ov111_020e5cd8(void);
extern int func_ov111_020e5d60(void);
extern char *data_ov111_020f1bd8;
int func_ov111_020e5d98(void) {
    int r = func_ov111_020e5d60();
    if ((r & 0x8000) == 0) {
        return func_ov111_020e5cd8();
    }
    r &= 0x7fff;
    return ((int *) *(int *) (data_ov111_020f1bd8 + 0x2c))[r];
}
