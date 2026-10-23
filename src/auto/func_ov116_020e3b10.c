#include "m2c.h"
void func_ov116_020e2e5c(void);
void func_ov116_020e37bc(void);
extern s32 data_ov116_020e71a8[];
void func_ov116_020e3b10(void) {
    switch ((u32) (data_ov116_020e71a8[0x26A] << 24) >> 24) {
        case 1:
            func_ov116_020e2e5c();
            return;
        case 2:
            func_ov116_020e37bc();
            return;
    }
}
