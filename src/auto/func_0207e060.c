#include "m2c.h"

M2C_UNK func_02009978(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern u8 data_0211045c;
extern M2C_UNK data_02110468;
extern M2C_UNK data_0211048c;

void func_0207e060(void) {
    if (data_0211045c != 0) {
        return;
    }
    func_02009978(&data_02110468, 0, 0x24);
    func_02009978(&data_0211048c, 0, 0x24);
    data_0211045c = 1;
}
