typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u8 p0[0xc];
    int f0c;
    int f10;
    u8 p14[8];
    u32 f1c;
    u32 f20;
} T;
void func_ov123_020889ec(T *);
void func_ov123_0208805c(T *);
int func_ov123_02087d14(T *, int, int, int);
int func_ov123_02088294(T *self, u32 now) {
    if (self->f0c < 5) {
        int t = 0;
        if (self->f10 != 0) {
            if (self->f20 != 0) {
                if (now - self->f1c > self->f20) {
                    t = 1;
                }
            }
        } else if (self->f0c < 4) {
            if (now - self->f1c > 60000) {
                t = 1;
            }
        }
        if (t != 0) {
            func_ov123_020889ec(self);
            func_ov123_0208805c(self);
            if (func_ov123_02087d14(self, 6, 0, 0) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
