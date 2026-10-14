#include "m2c.h"

M2C_UNK func_0208b488(void *);                      /* extern */
M2C_UNK func_0208c5bc(void *);                      /* extern */
M2C_UNK func_0208d598(void *);                      /* extern */

void func_0208c9b8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        func_0208b488(arg0 + 0x28);
    }
    func_0208d598(arg0);
    func_0208c5bc(arg0);
}
