#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);    /* extern */
s16 WM_GetAllowedChannel();                                /* extern */
s16 WM_GetDispersionScanPeriod();                                /* extern */
s32 WM_StartScanEx(M2C_UNK *, void *);               /* extern */
extern void *data_0210e644;
extern M2C_UNK func_02047290;

s32 func_02047660(s32 arg0) {
    s32 var_r0;

    if (arg0 == 0) {
        return -1;
    }
    M2C_FIELD(data_0210e644, void **, 0x1300) = (void *) (data_0210e644 + 0xF00);
    M2C_FIELD(data_0210e644, s16 *, 0x1304)   = 0x400;
    M2C_FIELD(data_0210e644, s16 *, 0x1306)   = WM_GetAllowedChannel();
    M2C_FIELD(data_0210e644, s16 *, 0x1308)   = WM_GetDispersionScanPeriod();
    M2C_FIELD(data_0210e644, s16 *, 0x1310)   = 1;
    MI_CpuFill8(data_0210e644 + 0x130A, 0xFF, 6);
    M2C_FIELD(data_0210e644, s32 *, 0x1344) = arg0;
    M2C_FIELD(data_0210e644, s32 *, 0x1A90) = 1;
    var_r0                                  = WM_StartScanEx(&func_02047290, data_0210e644 + 0x1300);
    if (var_r0 == 2) {
        var_r0 = 0;
    }
    return var_r0;
}
