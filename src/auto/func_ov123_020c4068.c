/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct T {
    u16 a;
    u16 b;
} T;

typedef struct G {
    s32 pad[1];
    s32 f0c;
} G;

void func_ov123_020c8c80(s32, s32, s32 *, s32 *);
void func_ov123_020c8d2c(s32, s32, s32, s32);
void func_ov123_020cb618(s32, void *);
extern T data_ov123_020d8308[];
extern s32 *data_ov123_020e46dc;
extern void func_ov123_020c3f84(void);

void func_ov123_020c4068(s32 arg0) {
    s32 sp0;
    s32 sp4;
    s32 i;
    func_ov123_020c8c80(data_ov123_020e46dc[1], 0, &sp0, &sp4);
    sp0 += 8;
    if (sp0 < data_ov123_020d8308[1].a || sp0 > 0x100) {
        for (i = 1; i < 5; i++) {
            func_ov123_020c8d2c(data_ov123_020e46dc[i], -1, sp0, data_ov123_020d8308[i].b);
        }
        return;
    }
    sp0 = data_ov123_020d8308[1].a;
    for (i = 1; i < 5; i++) {
        func_ov123_020c8d2c(data_ov123_020e46dc[i], -1, sp0, data_ov123_020d8308[i].b);
    }
    func_ov123_020cb618(arg0, func_ov123_020c3f84);
}
