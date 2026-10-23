#include "m2c.h"

M2C_UNK func_ov001_02186d6c(s32, void *);           /* extern */
M2C_UNK func_ov001_021886c4(void *);                /* extern */
extern s32 data_ov001_02196c74;

void func_ov001_02186844(void *arg0) {
    s32 *var_r3;
    s32 var_r2;
    s32 var_r4;

    var_r4 = 0;
    var_r2 = 0;
    var_r3 = M2C_FIELD(arg0, s32 **, 8);
    if ((s32) M2C_FIELD(arg0, u8 *, 0xC) > 0) {
        do {
            *var_r3 = (*var_r3 & 0xC1FFFCFF) | 0x200;
            var_r2 += 1;
            var_r3 += 2;
        } while (var_r2 < (s32) M2C_FIELD(arg0, u8 *, 0xC));
    }
    func_ov001_021886c4(arg0);
    if ((u32) arg0 >= (u32) (data_ov001_02196c74 + 0x228)) {
        var_r4 = 1;
    }
    func_ov001_02186d6c(M2C_FIELD(((var_r4 * 0x228) + data_ov001_02196c74), s32 *, 0x224), arg0);
}
