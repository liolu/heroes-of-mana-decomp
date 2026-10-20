/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_0203673c;
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac808;

typedef struct {
    u32 f:4;
    u32 z:2;
    u32 x:2;
    u32 rest:24;
} P4;

typedef struct {
    u32 lo:8;
    u32 f:4;
    u32 hi:20;
} D4;

void SetUpCarisumaSally(void) {
    s32 temp_ip;
    s32 var_r0;
    u32 temp_ip_2;
    void *var_r1;
    P4 *p4;

    var_r0 = 0;
    var_r1 = M2C_FIELD(data_0203673c, void **, 0x24);
    do {
        temp_ip = M2C_FIELD(var_r1, s32 *, 0);
        if (((u32) (temp_ip << 0x1F) >> 0x1F) != 0) {
            temp_ip_2 = temp_ip << 0x15;
            p4 = (P4 *)((u8 *)var_r1 + 4);
            if ((((u32) M2C_FIELD(data_0203673c, u32 *, 0x20) > (u32) (temp_ip_2 >> 0x17)) || ((temp_ip_2 >> 0x17) == 0x3C)) && (p4->f == ((D4 *)((u8 *)data_ov000_02051548 + 0x14))->f)) {
                p4->x = 0;
            } else {
                p4->x = 1;
            }
        }
        var_r0 += 1;
        var_r1 += 0x34;
    } while (var_r0 < 0x58);
}
