#include "m2c.h"

typedef struct {
    u16 v;
    u16 p[3];
} E;
void func_ov001_0216e620(int, int, int, int);
void func_ov001_0218169c(int);
extern E data_ov001_021929da[];
extern E data_ov001_021929dc[];
extern E data_ov001_021929de[];
extern E data_ov001_021929e0[];
extern u8 data_ov001_02196b9c;

void func_ov001_02173310(int a) {
    int i;
    if (a == 1) {
        return;
    }
    if (a == 3) {
        return;
    }
    data_ov001_02196b9c ^= 1;
    func_ov001_0218169c(8);
    i = data_ov001_02196b9c;
    func_ov001_0216e620(data_ov001_021929da[i].v, data_ov001_021929de[i].v, data_ov001_021929dc[i].v,
                        data_ov001_021929e0[i].v);
}
