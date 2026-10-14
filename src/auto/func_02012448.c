#include "m2c.h"

s32 func_02007614(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_020076b8(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
M2C_UNK func_02007a2c(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_02104368;

u16 *func_02012448(void) {
    u16 *sp0;

    if (func_02007614(&data_02104368, &sp0, 0) == 0) {
        return NULL;
    }
    func_02007a2c(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_020076b8(&data_02104368, sp0, 1);
    return NULL;
}
