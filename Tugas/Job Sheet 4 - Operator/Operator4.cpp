/* Created by Labib Althaf
              NIM 23343042
*/              

#include <stdio.h>

int main() {
    int tarif_pertama = 15000; // Tarif 1 jam pertama
    float tarif_selanjutnya = tarif_pertama * 0.5; // Tarif jam berikutnya
    int durasi = 3; // Durasi menonton film
    float total;

    // Menghitung total biaya
    if (durasi == 1) {
        total = tarif_pertama;
    } else {
        total = tarif_pertama + (tarif_selanjutnya * (durasi - 1));
    }

    // Menampilkan hasil perhitungan
    printf("Total yang harus dibayar = Rp %.2f\n", total);

    return 0;
}


