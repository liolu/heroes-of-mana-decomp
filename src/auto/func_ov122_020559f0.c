#include "m2c.h"
typedef struct S {
    s32 a;
    u8 pad[0xdd8];
    u32 f;
} S;
extern S data_ov122_02065604;
void func_ov122_02053b24(int, int, int, int, int, int);
void func_ov122_020536c8(int, int, int, int, int, int);
void func_ov123_020d349c(void);
void func_ov122_02055808(void);
void func_ov122_020559f0(void) {
    int z;
    data_ov122_02065604.a = 0x300;
    z                     = 0;
    func_ov122_02053b24(2, 8, 0x1c, 6, z, z);
    func_ov122_020536c8(2, 8, 0x3d, z, z, z);
    func_ov123_020d349c();
    while (1) {
        data_ov122_02065604.f &= ~0x8000000;
        func_ov122_02055808();
    }
}
