#include "m2c.h"

M2C_UNK func_02027390(s32, void *);                 /* extern */
M2C_UNK func_02033b3c();                            /* extern */
extern M2C_UNK data_0210b224;

void func_02032970(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_02033b3c();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_02027390((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_0210b224 + 0xC, arg0);
}
