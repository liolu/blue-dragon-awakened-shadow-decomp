#include "m2c.h"

M2C_UNK func_020077d0(M2C_UNK *);                   /* extern */
s32 func_02007c94(M2C_UNK);                         /* extern */
s32 func_02007ca8(M2C_UNK);                         /* extern */
M2C_UNK func_02007e5c(M2C_UNK, s32);                /* extern */
s32 func_02008138(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_02009978(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0207cdd0(M2C_UNK *, s32, M2C_UNK *, M2C_UNK); /* extern */
s32 func_0207cf10(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020fd38c;
extern M2C_UNK data_020fd394;
extern M2C_UNK data_02110288;
extern M2C_UNK data_021102d0;
extern M2C_UNK data_02110308;
extern M2C_UNK data_02110348;
extern M2C_UNK data_02110388;

void func_0207cc1c(void) {
    s32 temp_r4;
    s32 temp_r4_2;

    if (M2C_FIELD(&data_02110288, M2C_UNK **, 4) != NULL) {
        return;
    }
    func_020077d0(&data_021102d0);
    M2C_FIELD(&data_02110288, M2C_UNK **, 4) = &data_02110348;
    temp_r4 = func_02007c94(0);
    func_02007e5c(0, func_02008138(0, func_02007ca8(0), temp_r4, 0xF));
    temp_r4_2 = func_02007ca8(0);
    M2C_FIELD(&data_02110288, s32 *, 8) = (s32) ((func_02007c94(0) & ~0xF) - ((temp_r4_2 + 0xF) & ~0xF));
    func_02009978(&data_02110388, 0, 0x3C);
    func_0207cdd0(&data_02110348, (M2C_FIELD(&data_02110288, s32 *, 8) - 0x46000) & ~0x3FF, &data_020fd38c, 0);
    M2C_FIELD(&data_02110288, s32 *, 0x14) = func_0207cf10(&data_02110348, 0, 8, 0);
    func_0207cdd0(&data_02110308, 0x1E000, &data_020fd394, 0);
}
