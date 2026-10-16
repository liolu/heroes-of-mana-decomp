#include "m2c.h"
s32 OS_GetConsoleType();
extern struct {
    u32 a;
    u32 b;
    u32 c;
} OSi_UserExceptionHandler;
extern u8 OSi_ExceptionHandler[];

void OS_InitException(void) {
    u32 h = *(u32 *) 0x027FFD9C;
    u8 *p = (u8 *) 0x027E3000;
    if (h >= 0x02600000U && h < 0x02800000U) {
        OSi_UserExceptionHandler.c = h;
    } else {
        OSi_UserExceptionHandler.c = 0;
    }
    if (OSi_UserExceptionHandler.c == 0 && !(OS_GetConsoleType() & 0x40000000)) {
        *(u32 *) 0x027FFD9C  = (u32) OSi_ExceptionHandler;
        *(u32 *) (p + 0xFDC) = (u32) OSi_ExceptionHandler;
    }
    OSi_UserExceptionHandler.a = 0;
}
