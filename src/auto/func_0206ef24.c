#include "m2c.h"

s32 func_0206eaac(void *, M2C_UNK, s32, s32 *);     /* extern */
s32 func_0206eba0(void *);                          /* extern */

s32 func_0206ef24(void *arg0) {
    s32 sp0;

    if (func_0206eaac(arg0, 7, M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x44) + 7, &sp0) == 0) {
        return 0;
    }
    if (sp0 != 0) {
        return 1;
    }
    if (func_0206eba0(arg0) != 0) {
        return 1;
    }
    return 0;
}
