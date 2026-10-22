extern int func_ov119_020edf78(int);
extern void func_ov119_020eacec(int, void *);
extern int data_ov119_020f1c08[];
extern unsigned char *data_ov119_020f2f68;
typedef struct F {
    unsigned int a0 : 1, b1 : 1, c2 : 1, d3 : 1, e4 : 1, f5 : 1, g6 : 1, h7 : 1;
    unsigned int mid : 9;
    unsigned int b17 : 1;
    unsigned int rest : 14;
} F;
extern unsigned char data_ov119_020f1f50[];

void func_ov119_020f07f0(void) {
    int r;
    int off;
    F *fp;
    unsigned char *s;
    r                                           = func_ov119_020edf78(3);
    off                                         = (r & 1) * 0x6C;
    *(int *) (data_ov119_020f1f50 + 0x5c + off) = -0x80;
    *(int *) (data_ov119_020f1f50 + 0x60 + off) = 1;
    *(int *) (data_ov119_020f1f50 + 0x54 + off) = 0x30;
    *(int *) (data_ov119_020f1f50 + 0x58 + off) = 0x60;
    *(int *) (data_ov119_020f1f50 + 0x64 + off) = 1;
    s                                           = data_ov119_020f1f50 + off;
    fp                                          = (F *) (s + 0x50);
    fp->d3                                      = 0;
    fp->c2                                      = 1;
    fp->b17                                     = 0;
    fp->b1                                      = r & 1;
    func_ov119_020eacec(data_ov119_020f1c08[func_ov119_020edf78(1)], s);
    *(unsigned short *) (data_ov119_020f2f68 + 0x4F8) += 5;
}
