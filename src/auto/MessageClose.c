/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct G0 {
    u8 pad[0x760];
    u32 f760_0 : 1;
    u32 r : 31;
} G0;
typedef struct G1 {
    u8 pad[0x34E];
    u8 a : 1;
    u8 ra : 7;
    u8 pad2[7];
    u8 b : 1;
    u8 rb : 7;
} G1;
extern G0 *data_ov000_02051548;
extern G1 *data_ov109_020ea340;
void DeleteMessageNextIcon(void);
void PutMessageEnd(s32);
void EndMessageScreenForDS(s32);
void OS_SleepThread(s32);

void MessageClose(void) {
    DeleteMessageNextIcon();
    PutMessageEnd(0);
    EndMessageScreenForDS(0);
    while (data_ov109_020ea340->a != 0 || data_ov109_020ea340->b != 0) {
        data_ov000_02051548->f760_0 = 0;
        OS_SleepThread(0);
    }
}
