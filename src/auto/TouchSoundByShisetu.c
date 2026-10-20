/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK Ring_SoundEffect(M2C_UNK);             /* extern */

void TouchSoundByShisetu(s32 arg0) {

    switch (arg0) {
    default:
        break;
    case 0:
        Ring_SoundEffect(0x8C);
        break;
    case 1:
        Ring_SoundEffect(0x8D);
        break;
    case 2:
        Ring_SoundEffect(0x8E);
        break;
    case 3:
        Ring_SoundEffect(0x8F);
        break;
    case 4:
        Ring_SoundEffect(0x91);
        break;
    case 5:
        Ring_SoundEffect(0x90);
        break;
    case 6:
        Ring_SoundEffect(0x92);
        break;
    case 7:
        Ring_SoundEffect(0x8B);
        break;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        Ring_SoundEffect(0x93);
        break;
    }
}
