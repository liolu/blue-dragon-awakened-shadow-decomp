#include "m2c.h"

s32 func_020bd290();                                /* extern */

void func_020c6ccc(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x14);
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, s32 *, 0xC) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x128) = func_020bd290();
    }
    if (M2C_FIELD(arg0, void **, 0x18) == NULL) {
        M2C_FIELD(arg0, u16 *, 0x30) = 0U;
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x30) = (u16) (M2C_FIELD(arg0, u16 *, 0x30) & 0xFFC0);
    M2C_FIELD(arg0, u16 *, 0x30) =
        (u16) (M2C_FIELD(arg0, u16 *, 0x30) | M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), u16 *, 0x88));
}
