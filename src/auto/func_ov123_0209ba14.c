/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u32 p;
    u32 f4;
    u8 pad[0x28];
    u32 f30;
    u64 f34;
} S;
char *func_02024c44(char *, const char *);
void func_ov123_0207bf24(u32, char *, char *, s32, s32, s32, s32);
u32 func_ov123_0209bbe4(void);
extern S *data_ov123_020e18d4;
u64 func_0200f510(void);

void func_ov123_0209ba14(char *a, char *b, s32 c, s32 d) {
    S *s;
    func_02024c44((char *) data_ov123_020e18d4 + 0x48, a);
    func_02024c44((char *) data_ov123_020e18d4 + 0x148, b);
    s      = data_ov123_020e18d4;
    s->f34 = func_0200f510();
    s->f30 = 1;
    func_ov123_0207bf24(data_ov123_020e18d4->p, (char *) data_ov123_020e18d4 + 0x48, (char *) data_ov123_020e18d4 + 0x148, 1,
                        0, c, 0);
    if (func_ov123_0209bbe4() == 0) {
        data_ov123_020e18d4->f4 = d;
    }
}
