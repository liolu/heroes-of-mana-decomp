/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x2a];
    u8 mode;
} Ctx;

extern Ctx *data_ov123_020e4658;

u8 func_ov123_020c530c(void);
void func_ov123_020c36bc(s32 v);
void func_ov123_020c5320(void);
void func_ov123_020b2410(void *f);
extern void func_ov123_020b8d54(void);

void func_ov123_020b8e04(void) {
    data_ov123_020e4658->mode = func_ov123_020c530c();
    switch (data_ov123_020e4658->mode) {
        case 0:
            func_ov123_020c36bc(7);
            break;
        case 1:
            func_ov123_020c36bc(14);
            break;
        default:
            return;
    }
    func_ov123_020c5320();
    func_ov123_020b2410(func_ov123_020b8d54);
}
