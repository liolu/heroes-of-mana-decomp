/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    void *(*alloc)(void *, s32);
    s32 b;
    s32 c;
} A;
typedef struct {
    u8 pad[0x1004];
    s32 key;
    u8 pad2[0x100];
    A a;
} G;
extern u8 data_ov123_020dc554;
extern u8 data_ov123_020dc568;
extern G *data_ov123_020e1694;
extern s32 data_ov123_020e1698;
extern void *data_ov123_020e16a4;
void MI_CpuFill8(void *, s32, s32);
void OS_InitMutex(void *);
void func_ov123_0209858c(void);
s32 func_ov123_020987f4(A *a) {
    void *(*f)(void *, s32);
    f = a->alloc;
    if (data_ov123_020e1694 != 0) {
        return 4;
    }
    data_ov123_020e1694 = f(&data_ov123_020dc554, 0x11f4);
    if (data_ov123_020e1694 == 0) {
        return 4;
    }
    MI_CpuFill8(data_ov123_020e1694, 0, 0x11f4);
    data_ov123_020e1694->key = 0xfffe7961;
    data_ov123_020e1694->a   = *a;
    if (data_ov123_020e16a4 != 0) {
        return 4;
    }
    data_ov123_020e16a4 = f(&data_ov123_020dc568, 0x1c14);
    if (data_ov123_020e16a4 == 0) {
        return 4;
    }
    data_ov123_020e1698 = 0;
    OS_InitMutex((u8 *) data_ov123_020e1694 + 0x11dc);
    func_ov123_0209858c();
    return 0;
}
