/* Created by Labib Althaf
              NIM 23343042
*/

#include <stdio.h>

int main() {
    float nilai_presensi = 85, nilai_praktek = 65, nilai_uts = 80, nilai_uas = 75;
    float nilai_akhir;

    // Menghitung nilai akhir
    nilai_akhir = (nilai_presensi * 0.1) + (nilai_praktek * 0.2) + (nilai_uts * 0.3) + (nilai_uas * 0.4);

    printf("Nilai Presensi = 85\n");
    printf("Nilai Praktek  = 65\n");
    printf("Nilai UTS      = 80\n");
    printf("Nilai UAS      = 75\n");
	printf("Nilai Akhir    = %.2f\n", nilai_akhir);

    return 0;
}

