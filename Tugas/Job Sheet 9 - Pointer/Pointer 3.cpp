/* Created By Labib Althaf
              NIM 23343042
*/
#include <stdio.h>

void hitungA() {
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

    printf("A:\n");
    printf("Nilai Layla: %d\n", Layla);
    printf("Nilai Balmond: %d\n", Balmond);
}

void hitungB() {
    int Lesley = 57082;
    int *Layla = &Lesley;
    int Balmond = *Layla + 1;

    printf("B:\n");
    printf("Nilai Layla: %d\n", *Layla);
    printf("Nilai Balmond: %d\n", Balmond);
}

int main() {
    hitungA();
    hitungB();

    return 0;
}

