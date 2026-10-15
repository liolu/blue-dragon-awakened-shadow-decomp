#include "m2c.h"

M2C_UNK DC_InvalidateRange(s32, M2C_UNK);                /* extern */
M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 WCM_GetApEssid(M2C_UNK);                         /* extern */
u8 func_02044b5c();                                 /* extern */
M2C_UNK func_02046d28(s32, void *);                 /* extern */
extern M2C_UNK data_0210e630;

void func_02044ab4(s32 arg0) {
    s32 temp_r0;
    s32 var_r1;
    s8 temp_r0_2;
    u8 var_r2;
    void *var_r2_2;

    var_r2 = M2C_FIELD(M2C_FIELD(&data_0210e630, void **, 0xC), u8 *, 0x22);
    if (var_r2 == 0) {
        var_r2 = func_02044b5c(arg0);
    }
    M2C_FIELD(M2C_FIELD(&data_0210e630, void **, 0xC), u8 *, 0x17) = var_r2;
    temp_r0                                                        = WCM_GetApEssid(0);
    if (temp_r0 != 0) {
        DC_InvalidateRange(temp_r0, 0x20);
        func_02046d28(temp_r0, M2C_FIELD(&data_0210e630, void **, 0xC) + 0x18);
    }
    var_r1   = 0;
    var_r2_2 = M2C_FIELD(&data_0210e630, void **, 0xC);
loop_5:
    temp_r0_2 = M2C_FIELD(var_r2_2, s8 *, 0x18);
    if (((s32) temp_r0_2 < 0x20) || ((s32) temp_r0_2 > 0x7E)) {
        MI_CpuFill8(M2C_FIELD(&data_0210e630, void **, 0xC) + 0x18, 0, 0xA);
        return;
    }
    var_r1 += 1;
    var_r2_2 += 1;
    if (var_r1 >= 0xA) {
        return;
    }
    goto loop_5;
}
