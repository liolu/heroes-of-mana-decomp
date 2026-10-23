typedef unsigned char u8;
typedef int s32;
extern u8 *func_ov004_020bb234(s32 a, s32 b);
s32 func_ov004_020bb1e8(s32 a, s32 idx) {
    return (*func_ov004_020bb234(a, idx) >> ((idx % 2) * 4)) & 0xF;
}
