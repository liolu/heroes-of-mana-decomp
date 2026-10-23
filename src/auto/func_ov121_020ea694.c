typedef unsigned char u8;
typedef short s16;
typedef int s32;
void func_ov121_020ea694(u8 *src, s16 *dst) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        u8 b = src[i];
        *dst = (b & 0xF) | ((b << 4) & 0xF00);
        dst++;
    }
}
