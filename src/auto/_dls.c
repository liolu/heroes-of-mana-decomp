#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dls(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0202ce0c
    cmn ip, r3, lsl #0x1
    bhs L_0202ce20
L_0202cda8:
    orrs ip, r3, r1
    bmi L_0202cdd8
    cmp r1, r3
    cmpeq r0, r2
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_0202cdc4:
    mov r0, #0x0
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_0202cdd8:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bne L_0202cdf8
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
L_0202cdf8:
    cmp r3, r1
    cmpeq r2, r0
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_0202ce0c:
    bne L_0202cdc4
    cmp r0, #0x0
    bhi L_0202cdc4
    cmn ip, r3, lsl #0x1
    blo L_0202cda8
L_0202ce20:
    bne L_0202cdc4
    cmp r2, #0x0
    bhi L_0202cdc4
    b L_0202cda8
}
// clang-format on
