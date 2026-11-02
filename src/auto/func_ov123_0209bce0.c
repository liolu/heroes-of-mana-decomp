/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x14];
    void (*fn)(s32, s32, s32);
    s32 data;
} Obj14;

void func_ov123_02099524(s32, s32);
void func_ov123_0209bc58(void);
extern Obj14 *data_ov123_020e18d4;

void func_ov123_0209bce0(s32 a, s32 b) {
    if (data_ov123_020e18d4 == NULL) {
        return;
    }
    if (a == 0) {
        return;
    }
    func_ov123_02099524(a, b);
    if (data_ov123_020e18d4->fn != NULL) {
        data_ov123_020e18d4->fn(a, 0, data_ov123_020e18d4->data);
    }
    func_ov123_0209bc58();
}
