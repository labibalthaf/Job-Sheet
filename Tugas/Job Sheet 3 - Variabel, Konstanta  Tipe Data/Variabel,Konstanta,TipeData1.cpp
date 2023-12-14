/*created by Labib Althaf
             NIM 23343042
*/             

#include <stdio.h>

int main() {
    // Mendefinisikan variabel
    double rupiah, dollar;
    double rate = 14250; // Nilai tukar 1$ = Rp. 14.250

    // Jumlah uang dalam Rupiah yang ingin ditukar
    rupiah = 2500000;

    // Melakukan konversi dari Rupiah ke Dollar
    dollar = rupiah / rate;

    // Menampilkan hasil konversi
    printf("Jumlah uang dalam Dollar: $%.2f\n", dollar);

    return 0;
}

