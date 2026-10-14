#include "m2c.h"

M2C_UNK func_02009fd4(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_0200a5f4(M2C_UNK);                     /* extern */
M2C_UNK func_0200a7b0(s32);                         /* extern */
s32 func_0200a81c();                                /* extern */
M2C_UNK func_02010078(void *);                      /* extern */
M2C_UNK func_02010090(void *);                      /* extern */
M2C_UNK func_02032b98(void *);                      /* extern */

void func_02032b24(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_02009fd4(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_02010078(arg0 + 8);
        func_02010090(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5 = func_0200a81c();
        func_0200a5f4(1);
        func_0200a7b0(temp_r5);
    }
    func_02032b98(arg0);
}
