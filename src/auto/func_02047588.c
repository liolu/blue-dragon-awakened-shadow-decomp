#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, s32);        /* extern */
s32 WM_InitializeForListening(void *, s32, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK MATHi_CRC16InitTableRev(void *, s32);                 /* extern */
s32 func_0204757c();                                /* extern */
extern void *data_0210e644;

s32 func_02047588(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_r0;

    if (arg1 == 0) {
        return -1;
    }
    data_0210e644 = arg0;
    MI_CpuFill8(data_0210e644, 0, func_0204757c());
    M2C_FIELD(data_0210e644, s32 *, 0x1A90) = 0;
    M2C_FIELD(data_0210e644, s16 *, 0x1A94) = 0;
    MATHi_CRC16InitTableRev(data_0210e644 + 0x1A96, 0xA001);
    var_r0 = WM_InitializeForListening(data_0210e644, arg1, arg2, arg3);
    if (var_r0 == 2) {
        var_r0 = 0;
    }
    return var_r0;
}
