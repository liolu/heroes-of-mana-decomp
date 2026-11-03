/* compiler: 1.2/sp3 */
/* near start: 4 diffs with profile "1.2/sp3" */
#include "m2c.h"

extern u8 data_ov123_020da364[];
extern u8 data_ov123_020da378[];
extern u8 data_ov123_020da380[];

void func_ov123_0207e128(void *a, void *b, void *c);
void func_ov123_0207e0f0(void *a, void *b, s32 c);
void func_ov123_0207da38(void *a, s32 b, void *c, void *d, s32 e, void *f);
void func_ov123_0207af18(s32 a, s32 b);
void func_ov123_0207af34(s32 a);
void func_ov123_020996a0(s32 a);
void func_ov123_02081e10(void *a, s32 b);
void func_ov123_02082b6c(void *a, void *b);
s32 func_ov123_02083618(void *a, void *b, s32 c);
void func_ov123_0207e944(void);

void func_ov123_0207e780(u8 *self, s32 flag) {
    u8 *o;
    u32 buf[2];
    u8 *p;
    u8 *cur;
    s32 st;
    s32 t;

    o  = *(u8 **) self;
    st = *(s32 *) (o + 0x1d8);
    if (st == 4) {
        return;
    }
    if (st != 0) {
        if (flag != 0 && st == 3) {
            func_ov123_0207e128(self, o + 0x1f4, data_ov123_020da364);
            func_ov123_0207e0f0(self, o + 0x1f4, *(s32 *) (o + 0x198));
            func_ov123_0207e128(self, o + 0x1f4, data_ov123_020da378);
        }
        func_ov123_0207da38(self, *(s32 *) (o + 0x1d4), o + 0x1f4, buf, 1, data_ov123_020da380);
        if (*(s32 *) (o + 0x1d4) != -1) {
            func_ov123_0207af18(*(s32 *) (o + 0x1d4), 2);
            func_ov123_0207af34(*(s32 *) (o + 0x1d4));
            *(s32 *) (o + 0x1d4) = -1;
        }
        if (*(s32 *) (o + 0x204) != -1) {
            func_ov123_0207af18(*(s32 *) (o + 0x204), 2);
            func_ov123_0207af34(*(s32 *) (o + 0x204));
            *(s32 *) (o + 0x204) = -1;
        }
        *(s32 *) (o + 0x1d8) = 4;
        *(s32 *) (o + 0x19c) = 0;
        *(s32 *) (o + 0x1a0) = 0;
    } else {
        goto skip;
    }

skip:
    func_ov123_020996a0(*(s32 *) (o + 0x1dc));
    *(s32 *) (o + 0x1dc) = 0;
    func_ov123_020996a0(*(s32 *) (o + 0x1ec));
    *(s32 *) (o + 0x1ec) = 0;
    func_ov123_020996a0(*(s32 *) (o + 0x1f4));
    *(s32 *) (o + 0x1f4) = 0;
    func_ov123_020996a0(*(s32 *) (o + 0x440));
    *(s32 *) (o + 0x440) = 0;
    func_ov123_020996a0(*(s32 *) (o + 0x450));
    *(s32 *) (o + 0x450) = 0;
    if ((t = *(s32 *) (o + 0x424)) != 0) {
        do {
            func_ov123_02081e10(self, t);
            t = *(s32 *) (o + 0x424);
        } while (t != 0);
    }
    *(s32 *) (o + 0x424) = 0;
    p                    = *(u8 **) (o + 0x434);
    if (p != 0) {
        do {
            cur = p;
            p   = *(u8 **) (p + 0x3c);
            func_ov123_02082b6c(self, cur);
        } while (p != 0);
    }
    *(s32 *) (o + 0x434) = 0;
    do {
    } while (func_ov123_02083618(self, (void *) func_ov123_0207e944, 0) == 0);
}
