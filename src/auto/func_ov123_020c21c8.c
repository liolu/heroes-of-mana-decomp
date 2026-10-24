/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x14];
    u8 f14;
    u8 pad1[3];
    u8 b18;
    u8 pad2;
    u8 b1a;
    u8 b1b;
    u8 state;
    u8 out;
    u8 b1e;
} G;

extern G *data_ov123_020e46c8;
s32 func_ov123_020c1f50(void);
s32 func_ov123_020c1f04(s32);
void func_ov123_020c36bc(s32);
void func_ov123_020c369c(s32);
void func_ov123_020ca658(void *);
void func_ov123_020c2050(s32);
void func_ov123_020c1fdc(void);
void func_ov123_020c20f8(void);

void func_ov123_020c21c8(void) {
    data_ov123_020e46c8->out = 0;
    switch (data_ov123_020e46c8->state) {
        case 0:
            if (data_ov123_020e46c8->b1e != 0) {
                return;
            }
            switch (func_ov123_020c1f50()) {
                case 1:
                    if (data_ov123_020e46c8->b1b == 0) {
                        return;
                    }
                    func_ov123_020c36bc(0x16);
                    func_ov123_020c369c(0);
                    data_ov123_020e46c8->out = 1;
                    func_ov123_020ca658(&data_ov123_020e46c8->f14);
                    data_ov123_020e46c8->b18   = data_ov123_020e46c8->b1a;
                    data_ov123_020e46c8->state = 1;
                    return;
                case 2:
                    func_ov123_020c2050(2);
                    return;
                case 3:
                    func_ov123_020c2050(3);
                    return;
                case 4:
                    func_ov123_020c1fdc();
                    return;
            }
            break;
        case 1:
            func_ov123_020c20f8();
            return;
        case 2:
            if (func_ov123_020c1f04(2) != 2) {
                data_ov123_020e46c8->out   = 5;
                data_ov123_020e46c8->state = 0;
                return;
            }
            if (func_ov123_020c1f50() != 2) {
                return;
            }
            func_ov123_020c2050(2);
            return;
        case 3:
            if (func_ov123_020c1f04(3) != 3) {
                data_ov123_020e46c8->out   = 7;
                data_ov123_020e46c8->state = 0;
                return;
            }
            if (func_ov123_020c1f50() != 3) {
                return;
            }
            func_ov123_020c2050(3);
            break;
    }
}
