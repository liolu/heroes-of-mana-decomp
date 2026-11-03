/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0xa90];
    u8 state;
    u8 pad91[7];
    s32 f98;
    u32 f9c;
    u8 pada0[0xaac - 0xaa0];
    u8 faac;
} G;

extern G *data_ov123_020e470c;

s32 func_ov123_020c84e0(void);
void func_ov123_020c7f6c(void);
void func_ov123_020c7f48(void);
void func_ov123_020c7d5c(void);
void func_ov123_020c7d28(void);
void func_ov123_020c7b3c(void);
void func_ov123_020c7b24(void);
s32 func_ov123_020c7ae8(void);
void MB_EndToIdle(void);
s32 func_ov123_020c6db4(void);
s32 func_ov123_020c6400(void);
void func_ov123_020c645c(void);

void func_ov123_020c8084(void) {
    switch (data_ov123_020e470c->state) {
        case 1:
            if (data_ov123_020e470c->faac == 1) {
                data_ov123_020e470c->faac = 0;
                func_ov123_020c84e0();
                return;
            }
            if (data_ov123_020e470c->faac != 2) {
                return;
            }
            data_ov123_020e470c->faac  = 0;
            data_ov123_020e470c->state = 0x22;
            return;
        case 2:
            func_ov123_020c7f6c();
            return;
        case 3:
            func_ov123_020c7f48();
            data_ov123_020e470c->state = 4;
            return;
        case 4:
            data_ov123_020e470c->f98 += 1;
            func_ov123_020c7d5c();
            return;
        case 5:
        case 6:
            func_ov123_020c7d5c();
            return;
        case 7:
            func_ov123_020c7d28();
            return;
        case 8:
        case 9:
        case 10:
            func_ov123_020c7b3c();
            return;
        case 11:
            func_ov123_020c7b24();
            return;
        case 16:
            data_ov123_020e470c->f9c   = 0;
            data_ov123_020e470c->state = 0x11;
            return;
        case 17:
            if (data_ov123_020e470c->f9c++ <= 0x1E) {
                return;
            }
            func_ov123_020c7ae8();
            return;
        case 18:
            MB_EndToIdle();
            data_ov123_020e470c->f9c   = 0;
            data_ov123_020e470c->state = 0x16;
            return;
        case 19:
            if (data_ov123_020e470c->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov123_020c6db4() != 1) {
                return;
            }
            func_ov123_020c6400();
            data_ov123_020e470c->state = 0x14;
            return;
        case 21:
            func_ov123_020c645c();
            data_ov123_020e470c->f9c   = 0;
            data_ov123_020e470c->state = 0x16;
            return;
        case 22:
            if (data_ov123_020e470c->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov123_020c6db4() != 1) {
                return;
            }
            func_ov123_020c6400();
            data_ov123_020e470c->state = 0x17;
            return;
        case 24:
            func_ov123_020c645c();
            data_ov123_020e470c->f9c   = 0;
            data_ov123_020e470c->state = 0x19;
            return;
        case 25:
            if (data_ov123_020e470c->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov123_020c6db4() != 1) {
                return;
            }
            func_ov123_020c6400();
            data_ov123_020e470c->state = 0x1A;
            return;
        case 27:
            func_ov123_020c645c();
            data_ov123_020e470c->f9c   = 0;
            data_ov123_020e470c->state = 0x1C;
            return;
        case 28:
            if (data_ov123_020e470c->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov123_020c6db4() == 1) {
                func_ov123_020c6400();
                data_ov123_020e470c->state = 0x1D;
                return;
            }
            if (data_ov123_020e470c->f9c % 30 != 1) {
                return;
            }
            if (data_ov123_020e470c->f9c <= 0x37) {
                return;
            }
            func_ov123_020c645c();
            return;
        case 32:
            func_ov123_020c645c();
            data_ov123_020e470c->f9c   = 0;
            data_ov123_020e470c->state = 0x21;
            return;
        case 33:
            if (data_ov123_020e470c->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov123_020c6db4() != 1) {
                return;
            }
            func_ov123_020c6400();
            data_ov123_020e470c->state = 0x22;
            return;
        case 30:
            func_ov123_020c645c();
            return;
        case 34:
        default:
            return;
    }
}
