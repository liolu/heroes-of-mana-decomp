#include "m2c.h"
extern u8 data_ov116_020e71a8[];
void func_ov116_020e2e58(void);
void func_ov116_020e3354(void);

typedef struct {
    u32 lo : 8;
    u32 hi : 24;
} Bf;

void func_ov116_020e3ad4(void) {
    Bf *p = (Bf *) (data_ov116_020e71a8 + 0x9a8);
    switch (p->lo) {
        case 1:
            func_ov116_020e2e58();
            break;
        case 2:
            func_ov116_020e3354();
            break;
    }
}
