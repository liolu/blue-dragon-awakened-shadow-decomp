#include "m2c.h"

s32 func_0205bfb8(s32, M2C_UNK *, s32 *);           /* extern */
s32 func_0205c600();                                /* extern */
extern M2C_UNK func_0206fb68;

s32 func_0206fbc0(void *arg0) {
    s32 sp0;

    sp0 = func_0205c600();
    if (func_0205bfb8(M2C_FIELD(arg0, s32 *, 0xC), &func_0206fb68, &sp0) == 0) {
        return 1;
    }
    return 0;
}
