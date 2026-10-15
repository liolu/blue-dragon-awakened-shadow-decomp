/* compiler: 2.0/sp1p5  */
/* func_0200acf4 from projets/heroes-of-mana/src/auto/func_0200acf4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
void G2x_SetBlendBrightness_(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 < 0) {
        (*(s16 *) ((s8 *) (arg0) + (0))) = (s16) (arg1 | 0xC0);
        (*(s16 *) ((s8 *) (arg0) + (4))) = (s16) (-arg2);
    } else {
        (*(s16 *) ((s8 *) (arg0) + (0))) = (s16) (arg1 | 0x80);
        (*(s16 *) ((s8 *) (arg0) + (4))) = (s16) arg2;
    }
}
