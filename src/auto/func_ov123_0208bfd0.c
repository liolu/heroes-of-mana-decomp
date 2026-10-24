/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Buf {
    s32 w[16];
} Buf;
extern void *data_ov123_020e12f0;
void *func_ov123_0207a27c(s32, s32, void *);
void func_ov123_0207a140(void *, Buf *);
s32 func_ov123_0207a204(void *);
void func_ov123_0207a194(void *, s32);
void func_ov123_0208c068(void);

void func_ov123_0208bfd0(void) {
    Buf b = {0};
    if (data_ov123_020e12f0 == 0) {
        data_ov123_020e12f0 = func_ov123_0207a27c(0x40, 4, func_ov123_0208c068);
    }
    func_ov123_0207a140(data_ov123_020e12f0, &b);
    func_ov123_0207a194(data_ov123_020e12f0, func_ov123_0207a204(data_ov123_020e12f0) - 1);
}
