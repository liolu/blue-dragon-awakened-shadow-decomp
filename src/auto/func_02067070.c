#include "m2c.h"

M2C_UNK func_02017ba0(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_0205b80c(M2C_UNK, M2C_UNK, M2C_UNK *);     /* extern */
s32 func_0205c54c(M2C_UNK);                         /* extern */
void *func_0205cb20(M2C_UNK);                       /* extern */
extern M2C_UNK func_02067054;

void *func_02067070(void **arg0, s32 arg1, s32 arg2) {
    void *temp_r0;
    void *temp_r5;

    temp_r5 = *arg0;
    temp_r0 = func_0205cb20(0x50);
    if (temp_r0 == NULL) {
        return NULL;
    }
    func_02017ba0(temp_r0, 0, 0x50);
    M2C_FIELD(temp_r0, s32 *, 0) = 0x64;
    M2C_FIELD(temp_r0, s32 *, 4) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x10) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x14) = (s32) (func_0205c54c(0) + 0x2710);
    M2C_FIELD(temp_r0, void **, 0x4C) = (void *) M2C_FIELD(temp_r5, void **, 0x5D4);
    M2C_FIELD(temp_r0, s32 *, 0x3C) = func_0205b80c(0x18, 0, &func_02067054);
    M2C_FIELD(temp_r5, void **, 0x5D4) = temp_r0;
    M2C_FIELD(temp_r0, s32 *, 0x44) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x48) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x40) = 0;
    return temp_r0;
}
