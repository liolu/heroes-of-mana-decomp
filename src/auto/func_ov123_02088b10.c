/* compiler: 1.2/sp3 */
#include "m2c.h"

extern int func_020213f0(const void *, const void *, int);
extern void func_ov123_020873f4(void *, s32, s32);
extern void func_ov123_02087490(void *, const void *, s32);
extern s32 func_ov123_020875e8(void *);
extern s32 func_ov123_02088338(void *, void *, s32);
extern u8 data_ov123_020db544;

typedef struct {
    u8 *base;
    s32 b;
    s32 len;
} Buf;
typedef struct {
    u8 pad[0x50];
    Buf buf;
} Obj;

s32 func_ov123_02088b10(Obj *arg0, u8 *arg1, s32 arg2) {
    s32 n;
    s32 p;
    if (arg2 < 2 || func_020213f0(arg1, &data_ov123_020db544, 2) != 0) {
        if (func_ov123_02088338(arg0, arg1, arg2) == 0) {
            return 0;
        }
        return 1;
    }
    n = arg2 + 2;
    if (func_ov123_020875e8(&arg0->buf) < n) {
        return 1;
    }
    p = (s32) arg0->buf.base + arg0->buf.len;
    func_ov123_02087490(&arg0->buf, &data_ov123_020db544, 2);
    func_ov123_02087490(&arg0->buf, arg1, arg2);
    if (func_ov123_02088338(arg0, (void *) p, n) == 0) {
        return 0;
    }
    func_ov123_020873f4(&arg0->buf, -1, n);
    return 1;
}
