/* created by Labib Althaf
              NIM 23343042
*/

#include <stdio.h>

int main() {
    int detik, jam, menit, sisa_detik;

    printf("Masukan jumlah waktu dalam detik: ");
    scanf("%d", &detik);

    // Menghitung jam, menit, dan sisa detik
    jam = detik / 3600;
    menit = (detik % 3600) / 60;
    sisa_detik = (detik % 3600) % 60;

    printf("%d Jam, %d Menit, %d Detik\n", jam, menit, sisa_detik);

    return 0;
}

