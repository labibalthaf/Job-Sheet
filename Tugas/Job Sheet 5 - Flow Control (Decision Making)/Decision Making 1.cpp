/* Created By Labib Althaf
              NIM 23343042
*/
#include <stdio.h>

int main() {
    int pilihan;
    float angka1, angka2;

    printf("Pilih operasi yang diinginkan:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Hasil Bagi\n");
    printf("Masukkan pilihan (1/2/3/4/5): ");
    scanf("%d", &pilihan);

    printf("Masukkan dua bilangan: ");
    scanf("%f %f", &angka1, &angka2);

    switch (pilihan) {
        case 1:
            printf("Hasil penjumlahan: %.2f\n", angka1 + angka2);
            break;
        case 2:
            printf("Hasil pengurangan: %.2f\n", angka1 - angka2);
            break;
        case 3:
            printf("Hasil perkalian: %.2f\n", angka1 * angka2);
            break;
        case 4:
            if (angka2 != 0)
                printf("Hasil pembagian: %.2f\n", angka1 / angka2);
            else
                printf("Pembagian oleh nol tidak diizinkan.\n");
            break;
        case 5:
            if (angka2 != 0)
                printf("Hasil bagi: %.2f\n", (int)angka1 / (int)angka2);
            else
                printf("Pembagian oleh nol tidak diizinkan.\n");
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}

