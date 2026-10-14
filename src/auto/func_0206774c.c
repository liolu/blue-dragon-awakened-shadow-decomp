#include "m2c.h"

M2C_UNK func_0205b864();                            /* extern */
M2C_UNK func_0205cb50(void *);                      /* extern */
M2C_UNK func_0206569c(void *);                      /* extern */

void func_0206774c(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 != NULL) {
        func_0205cb50(M2C_FIELD(temp_r0, void **, 8));
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 8) = NULL;
        func_0205cb50(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0xC));
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0xC) = NULL;
        func_0205cb50(M2C_FIELD(arg0, void **, 8));
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
    temp_r0_2 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r0_2 != NULL) {
        func_0205cb50(M2C_FIELD(temp_r0_2, void **, 8));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 8) = NULL;
        func_0205cb50(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0xC));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0xC) = NULL;
        func_0205cb50(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x10));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x10) = NULL;
        func_0205cb50(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x14));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x14) = NULL;
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38) != 0) {
            func_0205b864();
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38) = 0;
        }
        func_0205cb50(M2C_FIELD(arg0, void **, 0xC));
        M2C_FIELD(arg0, void **, 0xC) = NULL;
    }
    func_0206569c(arg0);
    func_0205cb50(M2C_FIELD(arg0, void **, 0x14));
    M2C_FIELD(arg0, void **, 0x14) = NULL;
    func_0205cb50(M2C_FIELD(arg0, void **, 0x1C));
    M2C_FIELD(arg0, void **, 0x1C) = NULL;
}
