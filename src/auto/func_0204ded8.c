#include "m2c.h"

s32 DWCi_IsError();                                /* extern */
M2C_UNK func_0204e4e0();                            /* extern */
M2C_UNK func_0204e5fc(M2C_UNK);                     /* extern */
M2C_UNK func_0205192c(u8, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern void *data_0210e738;
extern M2C_UNK func_0204e918;

s32 func_0204ded8(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    if ((DWCi_IsError() != 0) || (M2C_FIELD(data_0210e738, s32 *, 0x24) != 3)) {
        return 0;
    }
    func_0204e4e0();
    M2C_FIELD(data_0210e738, s32 *, 0x88) = arg1;
    M2C_FIELD(data_0210e738, s32 *, 0x8C) = arg2;
    M2C_FIELD(data_0210e738, s8 *, 0x2C)  = 0;
    func_0204e5fc(5);
    func_0205192c((u8) (arg0 - 1), &func_0204e918, 0, arg3, arg4);
    return 1;
}
