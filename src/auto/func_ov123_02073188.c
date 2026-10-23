/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct A {
    u8 pad[0x18];
    void *(*alloc)(s32);
    void (*free)(void *);
} A;
typedef struct Ctx {
    u8 pad0[0x3c];
    s32 f3c;
    s32 f40;
    u8 pad1[4];
    s32 f48;
    s32 f4c;
    u8 pad2[0x14];
} Ctx;
void MI_CpuFill8(void *, s32, s32);
void func_ov123_0206d3fc(Ctx *);
s32 func_ov123_0206b2e0(s32);
void func_ov123_0206d3e4(void);
extern A *data_ov123_020e0a00;
s32 func_ov123_02073188(s32 a) {
    Ctx c;
    s32 r;
    u8 *buf;
    if (a == 0) {
        return 0;
    }
    buf = data_ov123_020e0a00->alloc(0xfd0);
    if (buf == 0) {
        return 0;
    }
    MI_CpuFill8(&c, 0, 0x64);
    c.f40 = (s32) buf;
    c.f3c = 0xb68;
    c.f4c = (s32) (buf + 0xb68);
    c.f48 = 0x466;
    func_ov123_0206d3fc(&c);
    r = func_ov123_0206b2e0(a);
    func_ov123_0206d3e4();
    data_ov123_020e0a00->free(buf);
    return r;
}
