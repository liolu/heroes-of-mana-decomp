/* compiler: 1.2/sp3 */
typedef unsigned char u8;
typedef struct {
    u8 p[0x214];
    int w214;
    char s1[0x100];
    char s2[0x100];
} B;
typedef struct {
    B *b;
} A;
typedef struct {
    int p0;
    A *a;
} G;
extern G *data_ov123_020e18dc;
int func_ov123_0209b430(void);
int func_ov123_0207b4e4(A *, int, void *, void *);
int func_ov123_0209ccc8(int x, char *y, char *z) {
    if (data_ov123_020e18dc == 0 || func_ov123_0209b430() == 0) {
        return 0;
    }
    if (x == -1) {
        x = data_ov123_020e18dc->a->b->w214;
    }
    if (y == 0) {
        y = data_ov123_020e18dc->a->b->s1;
    }
    if (z == 0) {
        z = data_ov123_020e18dc->a->b->s2;
    }
    return func_ov123_0207b4e4(data_ov123_020e18dc->a, x, y, z);
}
