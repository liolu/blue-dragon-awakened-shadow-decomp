#include "m2c.h"

M2C_UNK func_02009898(void *, void *, M2C_UNK);     /* extern */
void *func_02042410();                              /* extern */
void *func_02043aec();                              /* extern */
void *func_02043bb8();                              /* extern */
void *func_02043be8(void *);                        /* extern */
M2C_UNK func_02043ca4(void *);                      /* extern */

void func_02043a60(void *arg0, s16 arg1) {
    void *temp_r0;
    void *var_r7;

    temp_r0 = func_02042410();
    if (temp_r0 == NULL) {
        return;
    }
    if ((M2C_FIELD(temp_r0, u8 *, 0x226A) == 0) && (M2C_FIELD(arg0, u16 *, 0x3C) == 0)) {
        var_r7 = func_02043be8(arg0 + 4);
        if (var_r7 == NULL) {
            var_r7 = func_02043aec();
        }
        if ((var_r7 == NULL) && (M2C_FIELD(temp_r0, s32 *, 0x2278) == 1)) {
            var_r7 = func_02043bb8();
        }
        if (var_r7 == NULL) {
            return;
        }
        M2C_FIELD(var_r7, s16 *, 2) = arg1;
        func_02009898(arg0, var_r7 + 0x10, 0xC0);
        func_02043ca4(var_r7);
    }
}
