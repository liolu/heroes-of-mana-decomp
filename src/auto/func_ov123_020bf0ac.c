/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x1C];
    u8 b1c;
} Gs;

extern u8 data_ov123_020e4690;
extern Gs *data_ov123_020e4694;
void func_ov123_020c36bc(s32);
void func_ov123_020bf2cc(void);

void func_ov123_020bf0ac(s32 a) {
    s32 ok = 1;
    u8 t;
    s32 n;
    switch (data_ov123_020e4690) {
        case 0:
            data_ov123_020e4694->b1c = 0;
            if (a == 0) {
                data_ov123_020e4690 = 2;
            } else if (a == 2) {
                data_ov123_020e4690 = 1;
            } else if (a == 1) {
                data_ov123_020e4690 = 3;
            } else {
                data_ov123_020e4690 = 4;
            }
            break;
        case 1:
            data_ov123_020e4694->b1c = 1;
            if (a == 0) {
                data_ov123_020e4690 = 0;
            } else if (a == 2) {
                data_ov123_020e4690 = 2;
            } else if (a == 1) {
                data_ov123_020e4690 = 3;
            } else {
                data_ov123_020e4690 = 5;
            }
            break;
        case 2:
            data_ov123_020e4694->b1c = 2;
            if (a == 0) {
                data_ov123_020e4690 = 1;
            } else if (a == 2) {
                data_ov123_020e4690 = 0;
            } else if (a == 1) {
                data_ov123_020e4690 = 3;
            } else {
                data_ov123_020e4690 = 6;
            }
            break;
        case 3:
            t = data_ov123_020e4694->b1c;
            n = t + 4;
            if (a == 1) {
                data_ov123_020e4690 = n;
            } else if (a == 3) {
                data_ov123_020e4690 = t;
            } else {
                ok = 0;
            }
            break;
        case 4:
            data_ov123_020e4694->b1c = 0;
            if (a == 0) {
                data_ov123_020e4690 = 6;
            } else if (a == 2) {
                data_ov123_020e4690 = 5;
            } else if (a == 1) {
                data_ov123_020e4690 = 0;
            } else {
                data_ov123_020e4690 = 3;
            }
            break;
        case 5:
            data_ov123_020e4694->b1c = 1;
            if (a == 0) {
                data_ov123_020e4690 = 4;
            } else if (a == 2) {
                data_ov123_020e4690 = 6;
            } else if (a == 1) {
                data_ov123_020e4690 = 1;
            } else {
                data_ov123_020e4690 = 3;
            }
            break;
        case 6:
            data_ov123_020e4694->b1c = 2;
            if (a == 0) {
                data_ov123_020e4690 = 5;
            } else if (a == 2) {
                data_ov123_020e4690 = 4;
            } else if (a == 1) {
                data_ov123_020e4690 = 2;
            } else {
                data_ov123_020e4690 = 3;
            }
            break;
    }
    if (ok) {
        func_ov123_020c36bc(8);
        func_ov123_020bf2cc();
    }
}
