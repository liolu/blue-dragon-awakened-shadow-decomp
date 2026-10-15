#include "engine.h"
#include "m2c.h"

void func_0204a640(M2C_UNK);

extern M2C_UNK data_020f92b4;
extern M2C_UNK data_0210e654;

void func_02048cb8(void) {
    M2C_UNK (*temp_r4)(M2C_UNK *, void *, M2C_UNK);
    s32 temp_r0;

    if (M2C_FIELD(&data_0210e654, void **, 8) == NULL) {
        return;
    }
    temp_r0 = M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), s32 *, 0x1314);
    temp_r4 = M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), M2C_UNK(**)(M2C_UNK *, void *, M2C_UNK), 0x1210);
    if (temp_r0 != 0) {
        func_0204a640(temp_r0);
    }
    temp_r4(&data_020f92b4, M2C_FIELD(&data_0210e654, void **, 8), 0);
    M2C_FIELD(&data_0210e654, void **, 8) = NULL;
}
