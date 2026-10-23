typedef unsigned int u32;
typedef struct S {
    u32 flag;
    u32 a;
    u32 b;
    u32 c;
} S;
extern S data_ov004_020cf880;
extern u32 data_ov004_020cf884;
u32 *func_ov004_020b8dc0(void) {
    if (!(data_ov004_020cf880.flag & 1)) {
        data_ov004_020cf880.a = 0;
        data_ov004_020cf880.b = 0;
        data_ov004_020cf880.c = 0;
        data_ov004_020cf880.flag |= 1;
    }
    return &data_ov004_020cf884;
}
