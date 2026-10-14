#include "m2c.h"

M2C_UNK func_0200b100();                            /* extern */
M2C_UNK func_0200b20c(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_02104340;
extern M2C_UNK func_02012010;

void func_02011fe4(void) {
    func_0200b100();
    func_0200b20c(0xE, &func_02012010);
    M2C_FIELD(&data_02104340, s32 *, 4) = 0;
}
