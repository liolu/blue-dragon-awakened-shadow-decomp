#include "m2c.h"

M2C_UNK func_02019ddc(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern M2C_UNK data_021011f4;
extern M2C_UNK data_021012a4;
extern M2C_UNK data_0216711c;

M2C_UNK *func_020ce3e0(void *arg0) {
    func_02019ddc(&data_0216711c, &data_021012a4, *((M2C_UNK *)((s8 *)&data_021011f4 + (M2C_FIELD(arg0, s32 *, 0x130) * 4))));
    return &data_0216711c;
}
