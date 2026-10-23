/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 pad[0xc];
    s32 f;
    u8 pad2[1];
    u8 fl;
} O;
typedef struct {
    void *first;
    u8 pad[60];
} E;
void func_ov123_020ca49c(void *);
void func_ov123_020cadd0(void *);
void func_ov123_020c9468(void *, void *);
extern E *data_ov123_020e478c;
void func_ov123_020cb5a0(s32 i, u8 *o) {
    if (o[0x11] != 0) {
        func_ov123_020ca49c(o + 0xc);
    }
    func_ov123_020cadd0(o);
    func_ov123_020c9468(data_ov123_020e478c[i].first, o);
}
