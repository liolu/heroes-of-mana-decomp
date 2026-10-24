#include "m2c.h"

typedef struct {
    u8 p[0x40];
    int h;
} G;
extern G *data_ov123_020e45c0;
extern struct {
    u16 a;
    u16 lim;
} data_ov123_020d7d28;
extern u8 func_ov123_020b19b4;
void func_ov123_020c8c80(int, int, int *, int *);
void func_ov123_020b0f78(int, int);
void func_ov123_020b0e10(void);
void func_ov123_020cb618(int, void *);

void func_ov123_020b19d4(int arg) {
    int sp4;
    int sp0;
    int l;
    func_ov123_020c8c80(data_ov123_020e45c0->h, 0, &sp0, &sp4);
    l   = data_ov123_020d7d28.lim;
    sp4 = sp4 - 12;
    if (sp4 > l) {
        func_ov123_020b0f78(4, sp4);
        return;
    }
    func_ov123_020b0f78(4, l);
    func_ov123_020b0e10();
    func_ov123_020cb618(arg, &func_ov123_020b19b4);
}
