#include "m2c.h"

extern M2C_UNK data_0210e630;

u8 func_02044a60(void) {
    if (M2C_FIELD(&data_0210e630, void **, 0xC) != NULL) {
        return M2C_FIELD(M2C_FIELD(&data_0210e630, void **, 0xC), u8 *, 9);
    }
    return 0U;
}
