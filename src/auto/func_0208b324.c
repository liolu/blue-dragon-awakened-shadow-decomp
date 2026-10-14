#include "m2c.h"

s32 func_020786bc(void *);                          /* extern */
M2C_UNK func_0208b360(void *);                      /* extern */

s32 func_0208b324(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x40) != 1) {
        return 1;
    }
    if (func_020786bc(arg0 + 0x20) == 0) {
        return 0;
    }
    func_0208b360(arg0);
    return 1;
}
