/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x60];
    u8 b60;
    s8 b61;
    u8 b62;
    u8 b63;
} G;

extern s32 func_ov123_020ca6e8(void *);
extern void func_ov123_020ca080(void *, void *, void *);
extern void func_ov123_020b0e10(void);
extern G *data_ov123_020e45c0;
extern u8 data_ov123_020d845c;
extern u32 data_ov123_020d7d58[];
extern u8 data_ov123_020d7cf0;
extern u8 data_ov123_020d7d30[];
extern u32 data_ov123_020d7d20[];
extern u8 data_ov123_020d7cf8;
extern u8 data_ov123_020d7cec[];
extern u32 data_ov123_020d7d28[];
extern u8 data_ov123_020d7cfc;
extern u8 data_ov123_020d7ce8[];

void func_ov123_020b1608(void) {
    s32 i;
    u32 tmp[3];

    data_ov123_020e45c0->b60 = 0;
    if (func_ov123_020ca6e8(&data_ov123_020d845c) == 0) {
        return;
    }
    i = 0;
    if (i < 10) {
        do {
            func_ov123_020ca080(&data_ov123_020d7d58[i], &data_ov123_020d7cf0, tmp);
            if (func_ov123_020ca6e8(tmp) != 0) {
                if (data_ov123_020e45c0->b61 != i) {
                    return;
                }
                data_ov123_020e45c0->b60 = data_ov123_020d7d30[i];
                data_ov123_020e45c0->b63 = i;
                func_ov123_020b0e10();
                return;
            }
            i++;
        } while (i < 10);
    }
    i = 0;
    if (i < 2) {
        do {
            func_ov123_020ca080(&data_ov123_020d7d20[i], &data_ov123_020d7cf8, tmp);
            if (func_ov123_020ca6e8(tmp) != 0) {
                if (data_ov123_020e45c0->b61 != i + 10) {
                    return;
                }
                data_ov123_020e45c0->b60 = data_ov123_020d7cec[i];
                data_ov123_020e45c0->b63 = i + 10;
                func_ov123_020b0e10();
                return;
            }
            i++;
        } while (i < 2);
    }
    i = 0;
    if (i < 2) {
        do {
            func_ov123_020ca080(&data_ov123_020d7d28[i], &data_ov123_020d7cfc, tmp);
            if (func_ov123_020ca6e8(tmp) != 0) {
                if (data_ov123_020e45c0->b61 != i + 12) {
                    return;
                }
                data_ov123_020e45c0->b60 = data_ov123_020d7ce8[i];
                data_ov123_020e45c0->b63 = i + 12;
                func_ov123_020b0e10();
                return;
            }
            i++;
        } while (i < 2);
    }
}
