#include "m2c.h"

extern M2C_UNK data_0210e8cc;

void func_020500a8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 0x2C) = arg2;
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 0x30) = arg3;
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 0x34) = arg4;
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 0x38) = arg5;
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 0x3C) = arg6;
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 0x40) = arg7;
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s8 *, 0x1D)  = 0;
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s8 *, 0x1E)  = 0;
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), u8 *, 0x1F)  = 0U;
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s8 *, 0x1C)  = 0;
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 0)    = 1;
    if (M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 0x18) == 0) {
        M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), u8 *, 0x1F) =
            (u8) (M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), u8 *, 0x1F) + 1);
    }
    M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), u8 *, 0x1F) =
        (u8) (M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), u8 *, 0x1F) + 1);
}
