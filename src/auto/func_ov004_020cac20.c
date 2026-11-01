typedef unsigned int u32;

extern u32 data_ov004_020ce41c[];

void func_ov004_020cac20(u32 *d, u32 *s) {
    u32 a = s[2];
    u32 b = s[3];
    d[0]  = (u32) data_ov004_020ce41c;
    d[1]  = b;
    d[2]  = a;
}
