/* compiler: 1.2/sp3 */
#include "m2c.h"

extern s32 func_ov123_020c9820(s32);
extern s32 func_ov123_020c3844(void);
extern s32 func_ov123_020ae0c0(void);
extern void func_ov123_020c8f8c();
extern void func_ov123_020ae628(void);
extern void func_ov123_020ae260(void);
extern void func_ov123_020c8840(void *);
extern void func_ov123_020ae580(void *, void *);
extern void func_ov123_020ca3a4(s32, s32);
extern void func_ov123_020b23fc(s32, s32);
extern void func_ov123_020b2410(void *);
extern u8 *func_ov123_020c35d4(void);
extern void func_ov123_020b23c0(s32, s32);
extern void func_ov123_020bac64(s32);
extern void func_ov123_020ca49c(void *);
extern u8 GX_LoadOBJPltt;
extern u8 data_ov123_020de130;
extern u8 data_ov123_020e4690;
typedef struct {
    void *a;
    u32 b[3];
    u32 c[3];
    u8 pad[0x1d - 0x1c];
    u8 d;
} Ss;
extern Ss *data_ov123_020e4694;
extern u8 func_ov123_020b3a24;
extern u8 func_ov123_020bd1bc;
extern u8 func_ov123_020c0334;
extern u8 func_ov123_020c148c;

void func_ov123_020bf354(void) {
    u32 i;
    u32 j;

    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    if (func_ov123_020c3844() == 0) {
        return;
    }
    if (func_ov123_020ae0c0() == 0) {
        return;
    }
    for (i = 0; i < 3; i++) {
        if (data_ov123_020e4694->b[i] != 0) {
            func_ov123_020c8f8c();
        }
    }
    for (j = 0; j < 3; j++) {
        if (data_ov123_020e4694->c[j] != 0) {
            func_ov123_020c8f8c();
        }
    }
    func_ov123_020ae628();
    func_ov123_020ae260();
    func_ov123_020c8840(data_ov123_020e4694->a);
    func_ov123_020ae580(&data_ov123_020de130, &GX_LoadOBJPltt);
    func_ov123_020ca3a4(1, 1);
    func_ov123_020ca3a4(0, 0x14);
    if (data_ov123_020e4694->d == 2) {
        func_ov123_020b23fc(0, 0);
        func_ov123_020b2410(&func_ov123_020b3a24);
    } else {
        switch (data_ov123_020e4690) {
            default:
                break;
            case 0:
            case 1:
            case 2:
                func_ov123_020b23fc(2, 0);
                if (func_ov123_020c35d4()[0xE7] == 0xFF) {
                    func_ov123_020b2410(&func_ov123_020c0334);
                } else {
                    func_ov123_020b23c0(0, 0);
                    func_ov123_020bac64(0);
                    func_ov123_020b2410(&func_ov123_020bd1bc);
                }
                break;
            case 3:
                func_ov123_020b23fc(2, 1);
                func_ov123_020b2410(&func_ov123_020c148c);
                break;
        }
    }
    func_ov123_020ca49c(&data_ov123_020e4694);
}
