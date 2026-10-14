#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202cc58(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0202cccc
    cmn ip, r3, lsl #0x1
    bhs L_0202cce0
L_0202cc6c:
    orrs ip, r3, r1
    bmi L_0202cc9c
    cmp r1, r3
    cmpeq r0, r2
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_0202cc88:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_0202cc9c:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_0202cccc:
    bne L_0202cc88
    cmp r0, #0x0
    bhi L_0202cc88
    cmn ip, r3, lsl #0x1
    blo L_0202cc6c
L_0202cce0:
    bne L_0202cc88
    cmp r2, #0x0
    bhi L_0202cc88
    b L_0202cc6c
}
// clang-format on
