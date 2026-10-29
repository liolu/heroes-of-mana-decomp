#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dneq(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0202cf24
    cmn ip, r3, lsl #0x1
    bhs L_0202cf38
L_0202ced0:
    orrs ip, r3, r1
    bmi L_0202cf00
    cmp r1, r3
    cmpeq r0, r2
    movne r0, #0x1
    moveq r0, #0x0
    bx lr
L_0202ceec:
    mov r0, #0x1
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_0202cf00:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movne r0, #0x1
    moveq r0, #0x0
    bx lr
L_0202cf24:
    bne L_0202ceec
    cmp r0, #0x0
    bhi L_0202ceec
    cmn ip, r3, lsl #0x1
    blo L_0202ced0
L_0202cf38:
    bne L_0202ceec
    cmp r2, #0x0
    bhi L_0202ceec
    b L_0202ced0
}
// clang-format on
