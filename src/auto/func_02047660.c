#include "m2c.h"

M2C_UNK func_02009978(void *, M2C_UNK, M2C_UNK);    /* extern */
s16 func_02012e8c();                                /* extern */
s16 func_02012fcc();                                /* extern */
s32 func_02013724(M2C_UNK *, void *);               /* extern */
extern void *data_0210e644;
extern M2C_UNK func_02047290;

s32 func_02047660(s32 arg0) {
    s32 var_r0;

    if (arg0 == 0) {
        return -1;
    }
    M2C_FIELD(data_0210e644, void **, 0x1300) = (void *) (data_0210e644 + 0xF00);
    M2C_FIELD(data_0210e644, s16 *, 0x1304) = 0x400;
    M2C_FIELD(data_0210e644, s16 *, 0x1306) = func_02012e8c();
    M2C_FIELD(data_0210e644, s16 *, 0x1308) = func_02012fcc();
    M2C_FIELD(data_0210e644, s16 *, 0x1310) = 1;
    func_02009978(data_0210e644 + 0x130A, 0xFF, 6);
    M2C_FIELD(data_0210e644, s32 *, 0x1344) = arg0;
    M2C_FIELD(data_0210e644, s32 *, 0x1A90) = 1;
    var_r0 = func_02013724(&func_02047290, data_0210e644 + 0x1300);
    if (var_r0 == 2) {
        var_r0 = 0;
    }
    return var_r0;
}
