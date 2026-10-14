#include "m2c.h"

M2C_UNK func_0207c344(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov000_021e5e94();                      /* extern */
extern M2C_UNK data_02110134;
extern M2C_UNK data_021672cc;

void func_020dda00(void) {
    if (M2C_FIELD(&data_021672cc, s32 *, 4) != 0) {
        func_ov000_021e5e94();
    }
    if (M2C_FIELD(&data_021672cc, u8 *, 0) == 0) {
        return;
    }
    func_0207c344(&data_02110134, 6, 0);
}
