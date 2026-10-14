#include "m2c.h"

M2C_UNK func_0200166c(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
M2C_UNK func_020016f8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02001a84(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_021059f4;
extern M2C_UNK data_02105a40;
extern M2C_UNK data_02105ab0;
extern M2C_UNK data_02105b24;
extern M2C_UNK data_02105b54;

void func_020290b0(void) {
    func_02001a84(&data_02105ab0, &data_02105a40, &data_02105b24);
    func_0200166c(&data_02105b24, &data_02105b24, M2C_FIELD(&data_021059f4, s32 *, 0xEC), M2C_FIELD(&data_021059f4, s32 *, 0xF0), M2C_FIELD(&data_021059f4, s32 *, 0xF4));
    func_020016f8(&data_02105b24, &data_02105b54);
}
