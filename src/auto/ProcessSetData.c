#include "m2c.h"

void *value_for_key_safe(void *, void *);
s32 atoi(void *);
s32 FindRequest(s32, s32, s32);
void CallReqCallback(s32, s32, s32, s32, s32);
extern u8 data_020fbbe0;
extern u8 data_020fbbc8;
extern u8 data_020fbbac;
extern u8 data_020fbbcc;

void ProcessSetData(void *a) {
    s32 s1;
    s32 s2;
    s32 s3;
    s32 s4;
    s32 r;
    s1 = atoi(value_for_key_safe(a, &data_020fbbe0));
    s2 = atoi(value_for_key_safe(a, &data_020fbbc8));
    s3 = atoi(value_for_key_safe(a, &data_020fbbac));
    s4 = atoi(value_for_key_safe(a, &data_020fbbcc));
    r  = FindRequest(2, s3, s2);
    if (r == -1) {
        return;
    }
    CallReqCallback(r, s1, s4, 0, 0);
}
