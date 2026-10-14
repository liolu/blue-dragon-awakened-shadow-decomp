#include "m2c.h"

M2C_UNK func_02038190(void *);                      /* extern */
M2C_UNK func_0203f790(void *);                      /* extern */
extern M2C_UNK data_021019a4;

void func_020381e0(void) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(&data_021019a4, void **, 4), void **, 0xA4);
    if (temp_r4 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r4, u8 *, 9) != 0) {
        func_0203f790(temp_r4);
    }
    func_02038190(temp_r4);
}
