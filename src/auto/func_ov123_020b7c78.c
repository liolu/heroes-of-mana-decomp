/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x28];
    u8 f28;
    u8 pad2;
} Unit;
typedef struct {
    Unit *units;
    s32 f4;
    s32 f8;
    s32 fc;
    s32 a[5];
    s32 b[5];
    s32 f38;
    s32 f3c;
    u8 pad40[0x12];
    u8 f52;
    u8 f53;
    u8 f54;
} G;

extern G *data_ov123_020e4654;
extern u8 data_ov123_020e464c;
extern void func_ov123_020c0334(void);
extern void func_ov123_020bed10(void);
extern void func_ov123_020b9600(void);
extern void func_ov123_020c0dec(void);

s32 func_ov123_020ae0c0(void);
void func_ov123_020ae260(void);
void func_ov123_020ae628(void);
void func_ov123_020b23c0(s32, s32);
void func_ov123_020b23fc(s32, s32);
void func_ov123_020b2410(void *);
void func_ov123_020c1d58(void);
void func_ov123_020c23e8(void);
void func_ov123_020c29e0(void);
void func_ov123_020c3094(u8);
u8 *func_ov123_020c35d4(void);
void func_ov123_020c3574(void *);
void func_ov123_020c8840(s32);
s32 func_ov123_020c9820(s32);
void func_ov123_020c9b20(s32);
void func_ov123_020ca3a4(s32, s32);
void func_ov123_020ca49c(void *);
void func_ov123_020cae80(s32);
void func_ov123_020cb5ec(s32, s32);

void func_ov123_020b7c78(void) {
    s32 i;

    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    if (func_ov123_020ae0c0() == 0) {
        return;
    }
    func_ov123_020cb5ec(1, data_ov123_020e4654->f3c);
    for (i = 0; i < 5; i++) {
        if (data_ov123_020e4654->a[i] != 0) {
            func_ov123_020cae80(data_ov123_020e4654->a[i]);
        }
        if (data_ov123_020e4654->b[i] != 0) {
            func_ov123_020cae80(data_ov123_020e4654->b[i]);
        }
    }
    func_ov123_020c9b20(data_ov123_020e4654->fc);
    func_ov123_020c23e8();
    func_ov123_020ae628();
    func_ov123_020ae260();
    func_ov123_020c1d58();
    func_ov123_020c8840(data_ov123_020e4654->f4);
    func_ov123_020c8840(data_ov123_020e4654->f8);
    func_ov123_020ca3a4(1, 1);
    func_ov123_020ca3a4(0, 0x1D);
    *(volatile s32 *) 0x04000010 = 0;
    *(volatile s32 *) 0x04000018 = 0;
    if (data_ov123_020e4654->f54 == 0) {
        func_ov123_020c29e0();
        func_ov123_020c3094(func_ov123_020c35d4()[0xF4]);
        func_ov123_020b23fc(2, 0);
        func_ov123_020b2410((void *) func_ov123_020c0334);
    } else if (data_ov123_020e464c == 4) {
        func_ov123_020c29e0();
        func_ov123_020b23fc(0, 1);
        func_ov123_020b2410((void *) func_ov123_020bed10);
    } else {
        func_ov123_020c3574(&data_ov123_020e4654->units[data_ov123_020e4654->f52]);
        func_ov123_020b23fc(0, 0);
        if (data_ov123_020e4654->units[data_ov123_020e4654->f52].f28 != 0) {
            func_ov123_020b23fc(0, 1);
            func_ov123_020b23c0(1, 1);
            func_ov123_020b2410((void *) func_ov123_020b9600);
        } else {
            func_ov123_020b23fc(0, 1);
            func_ov123_020b23c0(0, 1);
            func_ov123_020b2410((void *) func_ov123_020c0dec);
        }
    }
    func_ov123_020ca49c(&data_ov123_020e4654);
}
