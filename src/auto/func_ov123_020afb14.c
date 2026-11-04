/* compiler: 1.2/sp3 */
/* near start: 4 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct {
    u8 pad[0x11C];
    u8 b11c;
    u8 pad11d;
    s8 s11e;
    u8 pad11f[3];
    u8 cnt;
    u8 b123;
} St;

extern u8 data_ov123_020d845c[];
extern u32 data_ov123_020d7a74[];
extern u8 data_ov123_020d7a28[];
extern St *data_ov123_020e45bc;
extern u32 data_ov123_020d7a54[];
extern u32 data_ov123_020d7a64[];
extern u32 data_ov123_020d7a4c[];
extern u8 data_ov123_020d7a24[];
s32 func_ov123_020ca82c(void *);
void func_ov123_020ca080(void *, void *, void *);
void func_ov123_020afac0(s32);
void func_ov123_020c36bc(s32);

void func_ov123_020afb14(void) {
    u8 buf[12];
    s32 i;
    if (func_ov123_020ca82c(data_ov123_020d845c) != 0) {
        for (i = 0; i < 0x2F; i++) {
            func_ov123_020ca080(&data_ov123_020d7a74[i], data_ov123_020d7a28, buf);
            if (func_ov123_020ca82c(buf) != 0) {
                if (data_ov123_020e45bc->s11e != i) {
                    goto fail;
                }
                func_ov123_020afac0(i);
                goto done;
            }
        }
        for (i = 2; i < 4; i++) {
            func_ov123_020ca080(&data_ov123_020d7a54[i], &data_ov123_020d7a64[i], buf);
            if (func_ov123_020ca82c(buf) != 0) {
                if (data_ov123_020e45bc->s11e != i + 0x2F) {
                    goto fail;
                }
                func_ov123_020afac0(i + 0x2F);
                if (i != 3) {
                    return;
                }
                data_ov123_020e45bc->cnt++;
                if (data_ov123_020e45bc->cnt < 0x28) {
                    return;
                }
                if (data_ov123_020e45bc->b123 == 0) {
                    func_ov123_020c36bc(9);
                    data_ov123_020e45bc->s11e = -1;
                    return;
                }
                data_ov123_020e45bc->b11c = 0x80;
                data_ov123_020e45bc->cnt -= 7;
                return;
            }
        }
        for (i = 0; i < 2; i++) {
            func_ov123_020ca080(&data_ov123_020d7a4c[i], data_ov123_020d7a24, buf);
            if (func_ov123_020ca82c(buf) != 0) {
                if (data_ov123_020e45bc->s11e != i + 0x33) {
                    goto fail;
                }
                func_ov123_020afac0(i + 0x33);
                goto done;
            }
        }
    }
fail:
    func_ov123_020afac0(-1);
done:
    data_ov123_020e45bc->cnt = 0;
}
