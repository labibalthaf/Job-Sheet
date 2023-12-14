/* Created By Labib Althaf
              NIM 23343042
*/
#include <stdio.h>

int main() {
    int nilai[20];
    int i;
    float total = 0, rata_rata;

    for(i = 0; i < 20; i++) {
        printf("Masukkan nilai mahasiswa ke-%d: ", i+1);
        scanf("%d", &nilai[i]);
        total += nilai[i];
    }

    rata_rata = total / 20;

    printf("Rata-rata nilai mahasiswa: %.2f\n", rata_rata);

    return 0;
}

