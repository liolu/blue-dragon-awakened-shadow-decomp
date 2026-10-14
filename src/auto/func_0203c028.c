#include "m2c.h"

M2C_UNK func_0203a524(M2C_UNK, u16, s32);           /* extern */

void func_0203c028(M2C_UNK arg0, void *arg1) {
    u16 temp_r2;
    u32 temp_lr;

    temp_r2 = M2C_FIELD(arg1, u16 *, 2);
    temp_lr = M2C_FIELD(arg1, u32 *, 4);
    func_0203a524(arg0, (u16) ((u8) ((s32) temp_r2 >> 8) | ((temp_r2 << 8) & 0xFF00)), ((temp_lr << 0x18) & 0xFF000000) | (((temp_lr << 8) & 0xFF0000) | ((u8) (temp_lr >> 0x18) | ((temp_lr >> 8) & 0xFF00))));
}
