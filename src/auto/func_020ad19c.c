#include "m2c.h"

extern M2C_UNK data_02166440;

void func_020ad19c(void) {
    if ((u32) M2C_FIELD(&data_02166440, u16 *, 6) < 0xFFFFU) {
        M2C_FIELD(&data_02166440, u16 *, 6) = (u16) (M2C_FIELD(&data_02166440, u16 *, 6) + 1);
    }
}
