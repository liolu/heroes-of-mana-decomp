/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov123_02077fb4(s8 *);
void func_ov123_02077ef4(s8 *, s8 *, s32);
void func_ov123_02077e80(s8 *, s8 *);
void func_ov123_02077974(s8 *);
void func_ov123_020778b4(s8 *, s8 *, s32);
void func_ov123_02077840(s8 *, s8 *);
void func_ov123_02078824(s8 *, s8 *, s32);

void func_ov123_02075f44(s8 *arg0, s32 arg1, s32 arg2) {
    s32 sz0;
    s32 sz1;
    s32 tot;
    s32 i;
    s32 j;
    s8 *a;
    s32 off;
    s8 buf[28];

    switch (*(u16 *) (arg0 + 0x32)) {
        case 4:
            sz0  = 0x10;
            sz1  = 0x10;
            arg2 = 0;
            break;
        case 5:
            sz0  = 0x14;
            sz1  = 0x10;
            arg2 = 0;
            break;
    }
    i   = 0;
    tot = (arg2 + (sz0 + sz1)) * 2;
    if (tot > 0) {
        off = 0;
        do {
            a = arg0 + 0x348;
            func_ov123_02077fb4(a);
            buf[0] = i + 0x41;
            for (j = 0; j < i + 1; j++) {
                func_ov123_02077ef4(a, buf, 1);
            }
            func_ov123_02077ef4(a, arg0, 0x30);
            func_ov123_02077ef4(a, arg0 + 0x54, 0x20);
            func_ov123_02077ef4(a, arg0 + 0x34, 0x20);
            func_ov123_02077e80(a, &buf[1]);
            a = arg0 + 0x3FC;
            func_ov123_02077974(a);
            func_ov123_020778b4(a, arg0, 0x30);
            func_ov123_020778b4(a, &buf[1], 0x14);
            func_ov123_02077840(a, arg0 + 0x74 + off);
            off += 0x10;
            i++;
        } while (off < tot);
    }
    if (*(u8 *) (arg0 + 0x454) != 0) {
        *(s8 **) (arg0 + 0x1D4) = arg0 + 0x74;
        *(s8 **) (arg0 + 0x1D8) = *(s8 **) (arg0 + 0x1D4) + sz0 * 2;
        *(s8 **) (arg0 + 0xBC)  = arg0 + 0x74 + sz0;
        *(s8 **) (arg0 + 0xC0)  = *(s8 **) (arg0 + 0xBC) + sz0 + sz1;
    } else {
        *(s8 **) (arg0 + 0xBC)  = arg0 + 0x74;
        *(s8 **) (arg0 + 0xC0)  = *(s8 **) (arg0 + 0xBC) + sz0 * 2;
        *(s8 **) (arg0 + 0x1D4) = arg0 + 0x74 + sz0;
        *(s8 **) (arg0 + 0x1D8) = *(s8 **) (arg0 + 0x1D4) + sz0 + sz1;
    }
    func_ov123_02078824(arg0 + 0x1E0, *(s8 **) (arg0 + 0x1D8), 0x10);
    func_ov123_02078824(arg0 + 0xC8, *(s8 **) (arg0 + 0xC0), 0x10);
}
