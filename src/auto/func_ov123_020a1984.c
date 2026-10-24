typedef unsigned char u8;
extern char data_ov123_020dd404[];
extern char data_ov123_020dd40c[];
extern char data_ov123_020dd414[];
int func_0200cdbc(char *, int, char *, char *, ...);
int func_02024c28(char *);
void MI_CpuCopy8(void *, void *, int);
void func_ov123_0207b450(int, int, char *);
void func_ov123_020a1984(int a, int c, int b, char *s) {
    char buf[0x200];
    int len;
    char *p;
    int n;
    len            = func_0200cdbc(buf, 0x200, data_ov123_020dd404, data_ov123_020dd40c, 3, data_ov123_020dd414);
    buf[len]       = c;
    (buf + 1)[len] = 0;
    p              = buf + 1 + len;
    if (s != 0) {
        n = func_02024c28(s);
        MI_CpuCopy8(s, p, n);
        p[n] = 0;
    }
    func_ov123_0207b450(a, b, buf);
}
