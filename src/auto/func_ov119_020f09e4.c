#include "m2c.h"
typedef struct S {
    u8 pad[0x14];
    u8 *code;
    u8 pad2[0x4e0];
    u16 pc;
    u16 done : 1;
    u16 rest : 15;
} S;
extern S *data_ov119_020f2f68;
extern void (*data_ov119_020f1cf4[])(void);
void func_ov119_020f09e4(s32 n) {
    s32 i                     = 0;
    data_ov119_020f2f68->done = 0;
    if (n <= 0) {
        return;
    }
    do {
        data_ov119_020f1cf4[data_ov119_020f2f68->code[data_ov119_020f2f68->pc]]();
        if (data_ov119_020f2f68->done) {
            return;
        }
        i++;
    } while (i < n);
}
