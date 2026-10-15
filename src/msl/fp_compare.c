#include "m2c.h"

// clang-format on

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dgr(void) {
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

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dleq(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0202cd70
    cmn ip, r3, lsl #0x1
    bhs L_0202cd84
L_0202cd04:
    orrs ip, r3, r1
    bmi L_0202cd38
    cmp r1, r3
    cmpeq r0, r2
    movls r0, #0x1
    movhi r0, #0x0
    bx lr
L_0202cd20:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_0202cd38:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bne L_0202cd5c
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    orr ip, ip, #0x40000000
    msr cpsr_f, ip
    bxeq lr
L_0202cd5c:
    cmp r3, r1
    cmpeq r2, r0
    movls r0, #0x1
    movhi r0, #0x0
    bx lr
L_0202cd70:
    bne L_0202cd20
    cmp r0, #0x0
    bhi L_0202cd20
    cmn ip, r3, lsl #0x1
    blo L_0202cd04
L_0202cd84:
    bne L_0202cd20
    cmp r2, #0x0
    bhi L_0202cd20
    b L_0202cd04
}
