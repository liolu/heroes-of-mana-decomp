#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202ce30(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0202ce98
    cmn ip, r3, lsl #0x1
    bhs L_0202ceac
L_0202ce44:
    orrs ip, r3, r1
    bmi L_0202ce74
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_0202ce60:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_0202ce74:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_0202ce98:
    bne L_0202ce60
    cmp r0, #0x0
    bhi L_0202ce60
    cmn ip, r3, lsl #0x1
    blo L_0202ce44
L_0202ceac:
    bne L_0202ce60
    cmp r2, #0x0
    bhi L_0202ce60
    b L_0202ce44
}
// clang-format on
