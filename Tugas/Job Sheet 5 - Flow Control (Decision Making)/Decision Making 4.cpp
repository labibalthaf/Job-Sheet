/* Created By Labib Althaf
              NIM 23343042
*/

#include <stdio.h>

int main() {
    float nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;

    printf("Masukkan Nilai Kehadiran: ");
    scanf("%f", &nilai_kehadiran);
    printf("Masukkan Nilai Tugas: ");
    scanf("%f", &nilai_tugas);
    printf("Masukkan Nilai UTS: ");
    scanf("%f", &nilai_uts);
    printf("Masukkan Nilai UAS: ");
    scanf("%f", &nilai_uas);

    // Menghitung nilai akhir
    nilai_akhir = (nilai_kehadiran * 0.2) + (nilai_tugas * 0.2) + (nilai_uts * 0.25) + (nilai_uas * 0.35);

    printf("Nilai Akhir: %.2f\n", nilai_akhir);

    // Menentukan hasil kelulusan berdasarkan nilai akhir
    if (nilai_akhir >= 0 && nilai_akhir <= 55) {
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilai_akhir >= 66 && nilai_akhir <= 85) {
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 86 && nilai_akhir <= 100) {
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan\n");
    } else {
        printf("Nilai tidak valid!\n");
    }

    return 0;
}

