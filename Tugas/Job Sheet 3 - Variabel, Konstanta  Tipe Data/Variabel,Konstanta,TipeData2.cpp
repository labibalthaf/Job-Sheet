/* created by Labib Althaf
              NIM 23343042
*/

#include <stdio.h>

int main() {
    float c, k, f, r;

    printf("Input Suhu (Celcius)  = ");
    scanf("%f", &c);

    // Melakukan konversi suhu
    k = c + 273.15; // Konversi ke Kelvin
    f = (c * 1.8) + 32; // Konversi ke Fahrenheit
    r = c * 0.8; // Konversi ke Reamur

    printf("Suhu dalam Kelvin     = %.2f\n", k);
    printf("Suhu dalam Fahrenheit = %.2f\n", f);
    printf("Suhu dalam Reamur     = %.2f\n", r);

    return 0;
}
              
