#include "m2c.h"

s32 func_020c0f54(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_020c1094(M2C_UNK arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0:
            if (func_020c0f54(arg0, 1, 1, 1) != 0) {
                return;
            }
            func_020c0f54(arg0, 2, 1, 1);
            return;
        case 1:
            if (func_020c0f54(arg0, 2, 1, 1) != 0) {
                return;
            }
            func_020c0f54(arg0, 1, 1, 1);
            return;
    }
}
