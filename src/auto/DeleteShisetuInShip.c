/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern s32 GetShisetuNo(s32 a);
extern void DeleteShisetuInShipByShisetu(s32 a, s32 b);
void DeleteShisetuInShip(s32 a, s32 b) {
    s32 n = GetShisetuNo(b - 1);
    if (n != -1) {
        DeleteShisetuInShipByShisetu(a, n);
    }
}
