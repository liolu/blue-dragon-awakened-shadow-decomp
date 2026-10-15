#include "m2c.h"

M2C_UNK SOCLi_SocketUnregisterList(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK SOCLiSocketList;

void SOCLi_SocketUnregister(M2C_UNK arg0) {
    SOCLi_SocketUnregisterList(&SOCLiSocketList, arg0);
}
