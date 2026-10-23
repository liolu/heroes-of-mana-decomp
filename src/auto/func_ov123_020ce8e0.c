typedef unsigned int u32;
typedef struct S {
    u32 flag;
    u32 a;
    u32 b;
    u32 c;
} S;
extern S data_ov123_020e47c0;
extern u32 data_ov123_020e47c4;
u32 *func_ov123_020ce8e0(void) {
    if (!(data_ov123_020e47c0.flag & 1)) {
        data_ov123_020e47c0.a = 0;
        data_ov123_020e47c0.b = 0;
        data_ov123_020e47c0.c = 0;
        data_ov123_020e47c0.flag |= 1;
    }
    return &data_ov123_020e47c4;
}
