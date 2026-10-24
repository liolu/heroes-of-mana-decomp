/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"

typedef struct {
    u8 p0[0x100];
    u8 ent[0x100];
    u16 f200;
    u16 f202;
    u8 p1[4];
    s32 tbl[16];
    u8 p2[0xa93 - 0x248];
    u8 fa93;
    s32 fa94;
} G;

extern G *data_ov123_020e470c;

void func_ov123_020c7814(void) {
    s32 temp_r7;
    s32 var_ip;

    var_ip = 0;
    do {
        if (data_ov123_020e470c->tbl[var_ip] != 0) {
            temp_r7 = (var_ip * 0x44) + (s32) (data_ov123_020e470c->ent);
            if (var_ip == 1) {
                if (data_ov123_020e470c->fa93 == 1) {
                    if (*(u16 *) temp_r7 != 0x10) {
                        return;
                    }
                    data_ov123_020e470c->fa94 = data_ov123_020e470c->fa94 + 1;
                    if (!(data_ov123_020e470c->fa94 & 1)) {
                        data_ov123_020e470c->f200 = data_ov123_020e470c->f200 + 1;
                        if (data_ov123_020e470c->f200 >= 0x24) {
                            data_ov123_020e470c->f200 = 0;
                        }
                    }
                } else {
                    data_ov123_020e470c->f202 = 0xBC;
                    if (*(u16 *) temp_r7 == 0xBD) {
                        data_ov123_020e470c->fa93 = 1;
                        data_ov123_020e470c->f200 = 0;
                        data_ov123_020e470c->fa94 = 0;
                    }
                }
            }
        }
        var_ip += 1;
    } while (var_ip < 0x10);
}
