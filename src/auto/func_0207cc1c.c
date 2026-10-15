#include "m2c.h"

M2C_UNK OS_InitMutex(M2C_UNK *);                   /* extern */
s32 OS_GetArenaHi(M2C_UNK);                         /* extern */
s32 OS_GetArenaLo(M2C_UNK);                         /* extern */
M2C_UNK OS_SetArenaLo(M2C_UNK, s32);                /* extern */
s32 OS_InitAlloc(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
M2C_UNK MI_CpuFill8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
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
    OS_InitMutex(&data_021102d0);
    M2C_FIELD(&data_02110288, M2C_UNK **, 4) = &data_02110348;
    temp_r4                                  = OS_GetArenaHi(0);
    OS_SetArenaLo(0, OS_InitAlloc(0, OS_GetArenaLo(0), temp_r4, 0xF));
    temp_r4_2                           = OS_GetArenaLo(0);
    M2C_FIELD(&data_02110288, s32 *, 8) = (s32) ((OS_GetArenaHi(0) & ~0xF) - ((temp_r4_2 + 0xF) & ~0xF));
    MI_CpuFill8(&data_02110388, 0, 0x3C);
    func_0207cdd0(&data_02110348, (M2C_FIELD(&data_02110288, s32 *, 8) - 0x46000) & ~0x3FF, &data_020fd38c, 0);
    M2C_FIELD(&data_02110288, s32 *, 0x14) = func_0207cf10(&data_02110348, 0, 8, 0);
    func_0207cdd0(&data_02110308, 0x1E000, &data_020fd394, 0);
}
