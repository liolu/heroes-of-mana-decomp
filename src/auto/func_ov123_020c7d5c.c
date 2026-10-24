/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad0[0x64A];
    u16 h64a;
    u8 pad1[0xA90 - 0x64C];
    u8 state;
    u8 pad2[0xAB4 - 0xA91];
    u8 buf[1];
} Game;

extern Game *data_ov123_020e470c;

u16 func_ov123_020c58e0(void);
void func_ov123_020c6240(void *, u16);
s32 func_ov123_020c5884(s32);
s32 func_ov123_020c5da0(void);
void func_ov123_020c5c98(void);
void func_ov123_020c5c7c(void);
s32 func_ov123_020c6db4(void);
s32 func_ov123_020c6400(void);

void func_ov123_020c7d5c(void) {
    switch (func_ov123_020c58e0()) {
        case 1:
            func_ov123_020c6240(data_ov123_020e470c->buf, data_ov123_020e470c->h64a);
            return;
        case 2:
            if (func_ov123_020c5884(2) != 0) {
                data_ov123_020e470c->state = 5;
                return;
            }
            if (func_ov123_020c5884(3) != 0 || func_ov123_020c5884(4) != 0) {
                data_ov123_020e470c->state = 6;
                return;
            }
            if (data_ov123_020e470c->state != 5) {
                return;
            }
            if (func_ov123_020c5884(2) == 0) {
                data_ov123_020e470c->state = 0xD;
            }
            return;
        case 3:
            if (func_ov123_020c5da0() != 0) {
                func_ov123_020c5c98();
                return;
            }
            if ((u8) (data_ov123_020e470c->state + 0xFA) > 1) {
                return;
            }
            if (func_ov123_020c5884(3) == 0) {
                data_ov123_020e470c->state = 0x12;
            }
            return;
        case 5:
            data_ov123_020e470c->state = 7;
            return;
        case 7:
            func_ov123_020c5c7c();
            data_ov123_020e470c->state = 1;
            return;
        case 0:
            switch (func_ov123_020c6db4()) {
                case 1:
                    func_ov123_020c6400();
                    return;
                case 0:
                    data_ov123_020e470c->state = 0x1F;
                    return;
                case 3:
                    return;
                default:
                    data_ov123_020e470c->state = 0x1F;
                    break;
            }
            break;
    }
}
