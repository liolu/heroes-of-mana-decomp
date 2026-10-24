/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    s32 a, b, c;
} T3;
typedef struct {
    u8 pad[0x11e];
    s8 sel;
    u8 pad11f[4];
    u8 b123;
    u8 b124;
} G;

extern s32 data_ov123_020d845c;
extern G *data_ov123_020e45bc;
extern s32 data_ov123_020d7a74[];
extern s32 data_ov123_020d7a28;
extern s32 data_ov123_020d7a64[];
extern s32 data_ov123_020d7a54[];
extern s32 data_ov123_020dd8a0[];
extern s32 data_ov123_020d7a4c[];
extern s32 data_ov123_020d7a24;

s32 func_ov123_020ca7c0(void *);
void func_ov123_020ca080(void *, void *, void *);
void func_ov123_020c36bc(s32);

void func_ov123_020b0070(void) {
    T3 t;
    s32 i;
    if (func_ov123_020ca7c0(&data_ov123_020d845c) == 0) {
        return;
    }
    data_ov123_020e45bc->sel = -1;
    for (i = 0; i < 0x2f; i++) {
        func_ov123_020ca080(&data_ov123_020d7a74[i], &data_ov123_020d7a28, &t);
        if (func_ov123_020ca7c0(&t) != 0) {
            if (data_ov123_020e45bc->b124 == 0) {
                func_ov123_020c36bc(9);
                return;
            }
            func_ov123_020c36bc(0);
            data_ov123_020e45bc->sel = i;
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        func_ov123_020ca080(&data_ov123_020d7a54[i], &data_ov123_020d7a64[i], &t);
        if (func_ov123_020ca7c0(&t) != 0) {
            if ((i == 3 && data_ov123_020e45bc->b123 == 0) || (i == 2 && data_ov123_020e45bc->b124 == 0)) {
                func_ov123_020c36bc(9);
                return;
            }
            func_ov123_020c36bc(data_ov123_020dd8a0[i]);
            data_ov123_020e45bc->sel = i + 0x2f;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov123_020ca080(&data_ov123_020d7a4c[i], &data_ov123_020d7a24, &t);
        if (func_ov123_020ca7c0(&t) != 0) {
            func_ov123_020c36bc(0);
            data_ov123_020e45bc->sel = i + 0x33;
            return;
        }
    }
}
