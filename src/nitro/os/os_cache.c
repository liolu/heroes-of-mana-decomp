#include "m2c.h"

// clang-format on

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void DC_FlushAll(void) {
    mov ip, #0x0
    mov r1, #0x0
L_0200e7a0:
    mov r0, #0x0
L_0200e7a4:
    orr r2, r1, r0
    mcr p15, 0, ip, c7, c10, 4
    mcr p15, 0, r2, c7, c14, 2
    add r0, r0, #0x20
    cmp r0, #0x400
    blt L_0200e7a4
    add r1, r1, #0x40000000
    cmp r1, #0x0
    bne L_0200e7a0
    bx lr
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void DC_InvalidateRange(void) {
    add r1, r1, r0
    bic r0, r0, #0x1f
L_0200e7d4:
    mcr p15, 0, r0, c7, c6, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_0200e7d4
    bx lr
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void DC_StoreRange(void) {
    add r1, r1, r0
    bic r0, r0, #0x1f
L_0200e7f0:
    mcr p15, 0, r0, c7, c10, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_0200e7f0
    bx lr
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void DC_FlushRange(void) {
    mov ip, #0x0
    add r1, r1, r0
    bic r0, r0, #0x1f
L_0200e810:
    mcr p15, 0, ip, c7, c10, 4
    mcr p15, 0, r0, c7, c14, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_0200e810
    bx lr
}

void DC_WaitWriteBufferEmpty(void) {
    __asm__ volatile("mov r0, #0\n"
                     "mcr p15, 0, r0, c7, c10, 4\n"
                     :
                     :
                     : "r0", "memory");
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void IC_InvalidateRange(void) {
    add r1, r1, r0
    bic r0, r0, #0x1f
L_0200e83c:
    mcr p15, 0, r0, c7, c5, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_0200e83c
    bx lr
}
