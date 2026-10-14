#include "m2c.h"

M2C_UNK func_02006fe4(s32);                         /* extern */
s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
M2C_UNK func_02037f70();                            /* extern */
M2C_UNK func_02038048();                            /* extern */
M2C_UNK func_020381e0();                            /* extern */
M2C_UNK func_0203821c();                            /* extern */
M2C_UNK func_02039fa0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203bee8(void *);                      /* extern */
M2C_UNK func_0203bf00(void *);                      /* extern */

s32 func_0203b7c8(void *arg0) {
    s32 temp_r5;
    s32 var_r0;
    s32 var_r1;
    s8 temp_r0;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    var_r1 = 1;
    temp_r0 = M2C_FIELD(temp_r4, s8 *, 0x73);
    if ((temp_r0 != 0) && (temp_r0 != 4)) {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        func_02006fe4(M2C_FIELD(temp_r4, s32 *, 0x68) + 0x20);
        func_020381e0();
        func_0203821c();
        func_02038048();
    }
    func_02037f70();
    M2C_FIELD(temp_r4, s16 *, 0x70) = (s16) (M2C_FIELD(temp_r4, s16 *, 0x70) & ~6);
    if (M2C_FIELD(temp_r4, s8 *, 0x73) == 2) {
        var_r0 = M2C_FIELD(temp_r4, s32 *, 0x68);
    } else {
        var_r0 = M2C_FIELD(temp_r4, s32 *, 0x64);
    }
    func_02039fa0(var_r0, 0);
    temp_r5 = func_02008ae0();
    func_0203bf00(temp_r4);
    func_0203bee8(temp_r4);
    func_02008af4(temp_r5);
    M2C_FIELD(temp_r4, s16 *, 0x70) = (s16) (M2C_FIELD(temp_r4, s16 *, 0x70) | 0x20);
    return 0;
}
