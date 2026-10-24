typedef unsigned char u8;
typedef signed char s8;
typedef unsigned long long u64;
typedef struct {
    u8 p0[0xcb0];
    u64 t;
    u8 pcb8[0xd11 - 0xcb8];
    s8 c;
} T;
extern char data_ov123_020d4e88[];
extern char data_ov123_020d4e90[];
u64 func_0200f510(void);
int func_ov123_0209302c(T *, int);
void func_ov123_02092ec0(char *, char *, int, int);
int func_ov123_020933a4(T *self) {
    u64 d = ((func_0200f510() - self->t) * 64) / 0x82ea;
    if (d >= 300) {
        self->c = self->c + 2;
        if (self->c >= 13) {
            return func_ov123_0209302c(self, 3);
        }
        self->t = func_0200f510();
        func_ov123_02092ec0(data_ov123_020d4e88, data_ov123_020d4e90, self->c, 0x200000);
    }
    return 3;
}
