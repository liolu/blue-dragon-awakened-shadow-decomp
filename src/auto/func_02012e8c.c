#include "m2c.h"

s32 func_020125cc();                                /* extern */

u16 func_02012e8c(void) {
    if (func_020125cc() != 0) {
        return 0x8000U;
    }
    return *(u16 *)0x027FFCFA;
}
