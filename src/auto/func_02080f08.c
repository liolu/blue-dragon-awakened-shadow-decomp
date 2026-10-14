#include "m2c.h"

M2C_UNK func_02033b3c(s32);                         /* extern */
M2C_UNK func_02081ac0(void *);                      /* extern */

void *func_02080f08(void *arg0) {
    func_02033b3c(M2C_FIELD(arg0, s32 *, 0x998));
    func_02033b3c(M2C_FIELD(arg0, s32 *, 0x994));
    func_02081ac0(arg0 + 0x710);
    return arg0;
}
