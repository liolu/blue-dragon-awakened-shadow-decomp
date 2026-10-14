#include "m2c.h"

M2C_UNK func_02009978(u8 *, M2C_UNK, M2C_UNK);      /* extern */
void *func_02059234();                              /* extern */
extern u8 data_0210e900;

s32 func_020533e0(u8 **arg0) {
    s32 var_r5;
    u8 *var_r6;
    u8 temp_r0;
    void *temp_r8;

    if (func_02059234() == NULL) {
        return 0;
    }
    func_02009978(&data_0210e900, 0, 0x20);
    var_r5 = 0;
    if ((s32) M2C_FIELD(func_02059234(), u8 *, 0xE) >= 0) {
        var_r6 = &data_0210e900;
loop_4:
        temp_r8 = func_02059234();
        if (M2C_FIELD(temp_r8, s32 *, 0x2F0) & (1 << M2C_FIELD((func_02059234() + var_r5), u8 *, 0x2D0))) {
            temp_r0 = M2C_FIELD((func_02059234() + var_r5), u8 *, 0x2D0);
            var_r5 += 1;
            *var_r6 = temp_r0;
            var_r6 += 1;
            if (var_r5 <= (s32) M2C_FIELD(func_02059234(), u8 *, 0xE)) {
                goto loop_4;
            }
        }
    }
    *arg0 = &data_0210e900;
    return M2C_FIELD(func_02059234(), u8 *, 0xE) + 1;
}
