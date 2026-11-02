#include "m2c.h"

extern u8 *data_ov123_020e1694;
extern u8 *data_ov123_020e16a4;
extern u8 data_ov123_020dc530[];
extern u8 data_ov123_020dc408[];
extern u8 data_ov123_020dc4bc[];
extern u8 data_ov123_020dc540[];

typedef void (*CbFn)(void *a, s32 b, s32 c);

void func_ov123_02096ca8(u8 *p);
void func_ov123_02095778(void);

void func_ov123_020986f4(void) {
    CbFn fn;
    s32 v;

    fn = *(CbFn *) (data_ov123_020e1694 + 0x1000 + 0x10C);
    if (data_ov123_020e16a4 != NULL) {
        func_ov123_02096ca8(data_ov123_020e16a4);
        fn(data_ov123_020dc530, (s32) data_ov123_020e16a4, 0);
        data_ov123_020e16a4 = NULL;
    }
    func_ov123_02095778();
    if (data_ov123_020e1694 == NULL) {
        return;
    }
    v = *(s32 *) (data_ov123_020e1694 + 0x1000 + 0x114);
    if (v != 0) {
        fn(data_ov123_020dc408, v, 0);
        *(s32 *) (data_ov123_020e1694 + 0x1000 + 0x114) = 0;
    }
    v = *(s32 *) (data_ov123_020e1694 + 0x1000 + 0x118);
    if (v != 0) {
        fn(data_ov123_020dc4bc, v, 0);
        *(s32 *) (data_ov123_020e1694 + 0x1000 + 0x118) = 0;
    }
    fn(data_ov123_020dc540, (s32) data_ov123_020e1694, 0);
    data_ov123_020e1694 = NULL;
}
