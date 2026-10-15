#include "m2c.h"

// clang-format on

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void OS_EnableInterrupts(void) {
    mrs r0, cpsr
    bic r1, r0, #0x80
    msr cpsr_c, r1
    and r0, r0, #0x80
    bx lr
}
