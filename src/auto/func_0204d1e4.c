#include "m2c.h"

M2C_UNK func_020072b4(M2C_UNK);                     /* extern */
s32 func_0204465c();                                /* extern */
s32 func_02047910();                                /* extern */
M2C_UNK func_02047c48();                            /* extern */
M2C_UNK func_02047c64();                            /* extern */
extern M2C_UNK data_0210e718;

void func_0204d1e4(void) {
    if (M2C_FIELD(&data_0210e718, void **, 4) == NULL) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(&data_0210e718, void **, 4), u16 *, 4) == 1) {
        if (M2C_FIELD(M2C_FIELD(&data_0210e718, void **, 4), s32 *, 0x10) == 1) {
            func_02047c48();
            do {

            } while ((u32) (func_02047910() - 2) > 2U);
            func_02047c64();
        }
        M2C_FIELD(&data_0210e718, void **, 4) = NULL;
        return;
    }
    if (func_0204465c() == 0) {
        do {
            func_020072b4(0xA);
        } while (func_0204465c() == 0);
    }
    M2C_FIELD(&data_0210e718, void **, 4) = NULL;
}
