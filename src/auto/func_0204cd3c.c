#include "m2c.h"

M2C_UNK func_02048a34(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020fa6e0;
extern M2C_UNK data_020fa708;
extern M2C_UNK data_020fa72c;

void func_0204cd3c(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        func_02048a34(&data_020fa6e0);
        return;
    case 1:
        func_02048a34(&data_020fa708);
        return;
    case 2:
        func_02048a34(&data_020fa72c);
        return;
    }
}
