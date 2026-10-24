/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

int checkBoxIn(int a, int b) {
    int x;
    int y;
    x = a + 0x50000;
    if (x < 0) {
        x = -x;
    }
    x = (x / 0x800) % 8;
    if (x != 4 && x != 3) {
        return 0;
    }
    y = b + 0x50000;
    if (y < 0) {
        y = -y;
    }
    y = (y / 0x800) % 8;
    if (y != 4 && y != 3) {
        return 0;
    }
    return 1;
}
