#include "m2c.h"
typedef struct {
    u8 pad[0x28];
    u8 *tab;
    u8 pad2[0x500 - 0x2c];
    u8 pad3[0xc];
    u16 idx;
    u16 f : 1;
} S;
extern S *data_ov111_020f1bd8;
extern void (*data_ov111_020ec048[])(void);
void func_ov111_020e9070(s32 n) {
    s32 i                  = 0;
    data_ov111_020f1bd8->f = 0;
    if (n > 0) {
        do {
            data_ov111_020ec048[data_ov111_020f1bd8->tab[data_ov111_020f1bd8->idx]]();
            if (data_ov111_020f1bd8->f) {
                return;
            }
            i++;
        } while (i < n);
    }
}
