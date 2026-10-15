#include "m2c.h"

M2C_UNK func_020c175c(void *);                      /* extern */
M2C_UNK func_020c184c(void *);                      /* extern */

void func_020c188c(s32 *arg0) {
    *arg0 = 0;
    func_020c184c(((s8 *) arg0 + 4));
    func_020c175c(((s8 *) arg0 + 0x1C));
    func_020c184c(((s8 *) arg0 + 0x10));
}
