#include "m2c.h"

void func_0206764c(void *arg0, void *arg1) {
    void *temp_r2;
    void *temp_r3;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (M2C_FIELD(arg0, void **, 0x40) == NULL) {
            M2C_FIELD(arg0, void **, 0x44) = arg1;
            M2C_FIELD(arg0, void **, 0x48) = arg1;
            M2C_FIELD(arg0, void **, 0x40) = arg1;
            return;
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0x48);
        temp_r2 = M2C_FIELD(arg0, void **, 0x44);
        if (temp_r2 == temp_r3) {
            M2C_FIELD(temp_r2, void **, 0xC) = arg1;
            M2C_FIELD(arg0, void **, 0x48) = arg1;
            return;
        }
        M2C_FIELD(temp_r3, void **, 0xC) = arg1;
        M2C_FIELD(arg0, void **, 0x48) = arg1;
    }
}
