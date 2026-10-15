#include "m2c.h"

M2C_UNK func_02002a88();                            /* extern */
M2C_UNK FX_DivAsync();                            /* extern */

void FX_Div(void) {
    FX_DivAsync();
    func_02002a88();
}
