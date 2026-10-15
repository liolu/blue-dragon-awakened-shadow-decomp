#include "m2c.h"

M2C_UNK DWC_Auth_SetCustomNas(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020fa6e0;
extern M2C_UNK data_020fa708;
extern M2C_UNK data_020fa72c;

void DWC_SetAuthServer(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 0:
            DWC_Auth_SetCustomNas(&data_020fa6e0);
            return;
        case 1:
            DWC_Auth_SetCustomNas(&data_020fa708);
            return;
        case 2:
            DWC_Auth_SetCustomNas(&data_020fa72c);
            return;
    }
}
