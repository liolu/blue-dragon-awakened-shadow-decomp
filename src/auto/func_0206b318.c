#include "m2c.h"

M2C_UNK func_0205c0e0(s32);                         /* extern */
M2C_UNK func_0205c0f4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0205cb50();                            /* extern */
M2C_UNK func_0206bc50();                            /* extern */
extern M2C_UNK data_020fbb30;
extern M2C_UNK data_0210f240;

void func_0206b318(void) {
    if (M2C_FIELD(&data_020fbb30, s32 *, 4) != -1) {
        func_0205c0f4(M2C_FIELD(&data_020fbb30, s32 *, 4), 2);
        func_0205c0e0(M2C_FIELD(&data_020fbb30, s32 *, 4));
    }
    M2C_FIELD(&data_020fbb30, s32 *, 4) = -1;
    func_0206bc50();
    if (M2C_FIELD(&data_0210f240, s32 *, 0x28) == 0) {
        return;
    }
    func_0205cb50();
    M2C_FIELD(&data_0210f240, s32 *, 0x28) = 0;
    M2C_FIELD(&data_0210f240, s32 *, 0x18) = 0;
    M2C_FIELD(&data_0210f240, s32 *, 8) = 0;
}
