/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_ov123_02075c2c_dummy(void);
s32 func_ov123_02075c2c(void *obj, u8 *data, s32 size);
void func_ov123_02077974(void *obj);
void func_ov123_020778b4(void *obj, void *src, s32 size);
void func_ov123_02077840(void *obj, void *dst);
void func_ov123_02077fb4(void *obj);
void func_ov123_02077ef4(void *obj, void *src, s32 size);
void func_ov123_02077e80(void *obj, void *dst);
void MI_CpuFill8(void *dst, u8 value, u32 size);
s32 func_020213f0(void *a, void *b, s32 size);
void func_ov123_02075c48(void *obj);

s32 func_ov123_020759f0(void *self, u8 *pkt) {
    struct {
        u8 a[0x14];
        u8 b[0x30];
    } L;
    s32 n;
    s32 len;
    u8 *obj;

    s32 lo;
    s32 hi;

    n = func_ov123_02075c2c(self, pkt + 5, (pkt[3] << 8) + pkt[4]);
    switch (*(u16 *) ((u8 *) self + 0x32)) {
        case 4:
            n -= 0x10;
            pkt[3] = (u8) (n >> 8);
            obj    = (u8 *) self + 0x3FC;
            pkt[4] = (u8) n;
            func_ov123_02077974(obj);
            func_ov123_020778b4(obj, *(void **) ((u8 *) self + 0x1D4), 0x10);
            MI_CpuFill8(L.b, 0x36, 0x30);
            func_ov123_020778b4(obj, L.b, 0x30);
            func_ov123_020778b4(obj, (u8 *) self + 0x2E4, 8);
            func_ov123_020778b4(obj, pkt, 1);
            func_ov123_020778b4(obj, pkt + 3, n + 2);
            func_ov123_02077840(obj, L.a);
            func_ov123_02077974(obj);
            func_ov123_020778b4(obj, *(void **) ((u8 *) self + 0x1D4), 0x10);
            MI_CpuFill8(L.b, 0x5C, 0x30);
            func_ov123_020778b4(obj, L.b, 0x30);
            func_ov123_020778b4(obj, L.a, 0x10);
            func_ov123_02077840(obj, L.a);
            len = 0x10;
            break;
        case 5:
            n -= 0x14;
            pkt[3] = (u8) (n >> 8);
            obj    = (u8 *) self + 0x348;
            pkt[4] = (u8) n;
            func_ov123_02077fb4(obj);
            func_ov123_02077ef4(obj, *(void **) ((u8 *) self + 0x1D4), 0x14);
            MI_CpuFill8(L.b, 0x36, 0x28);
            func_ov123_02077ef4(obj, L.b, 0x28);
            func_ov123_02077ef4(obj, (u8 *) self + 0x2E4, 8);
            func_ov123_02077ef4(obj, pkt, 1);
            func_ov123_02077ef4(obj, pkt + 3, n + 2);
            func_ov123_02077e80(obj, L.a);
            func_ov123_02077fb4(obj);
            func_ov123_02077ef4(obj, *(void **) ((u8 *) self + 0x1D4), 0x14);
            MI_CpuFill8(L.b, 0x5C, 0x28);
            func_ov123_02077ef4(obj, L.b, 0x28);
            func_ov123_02077ef4(obj, L.a, 0x14);
            func_ov123_02077e80(obj, L.a);
            len = 0x14;
            break;
    }
    if (func_020213f0(pkt + 5 + n, L.a, len) != 0) {
        *((u8 *) self + 0x455) = 9;
    }
    func_ov123_02075c48((u8 *) self + 0x2EC);
    return n + 5;
}
