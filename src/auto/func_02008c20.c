#include "m2c.h"

M2C_UNK func_0200b100();                            /* extern */
M2C_UNK func_0200b20c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0200b258(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_02101d08;
extern M2C_UNK func_02008c74;

void func_02008c20(void) {
    if (M2C_FIELD(&data_02101d08, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_02101d08, u16 *, 2) = 1U;
    func_0200b100();
    do {

    } while (func_0200b258(0xC, 1) == 0);
    func_0200b20c(0xC, &func_02008c74);
}
