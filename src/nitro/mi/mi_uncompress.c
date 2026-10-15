#include "m2c.h"

// clang-format on

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void MI_UncompressLZ8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r5, [r0], #0x4
    mov r2, r5, lsr #0x8
L_02010578:
    cmp r2, #0x0
    ble L_020105f8
    ldrb lr, [r0], #0x1
    mov r4, #0x8
L_02010588:
    subs r4, r4, #0x1
    blt L_02010578
    tst lr, #0x80
    bne L_020105ac
    ldrb r6, [r0], #0x1
    swpb r6, r6, [r1]
    add r1, r1, #0x1
    sub r2, r2, #0x1
    b L_020105e8
L_020105ac:
    ldrb r5, [r0, #0x0]
    mov r6, #0x3
    add r3, r6, r5, asr #0x4
    ldrb r6, [r0], #0x1
    and r5, r6, #0xf
    mov ip, r5, lsl #0x8
    ldrb r6, [r0], #0x1
    orr r5, r6, ip
    add ip, r5, #0x1
    sub r2, r2, r3
L_020105d4:
    ldrb r5, [r1, -ip]
    swpb r5, r5, [r1]
    add r1, r1, #0x1
    subs r3, r3, #0x1
    bgt L_020105d4
L_020105e8:
    cmp r2, #0x0
    movgt lr, lr, lsl #0x1
    bgt L_02010588
    b L_02010578
L_020105f8:
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
