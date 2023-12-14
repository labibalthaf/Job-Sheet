/* Created By Labib Althaf
              NIM 23343042
*/              

#include <stdio.h>

int main() {
    int i, j;

    // Loop luar untuk mengontrol jumlah baris
    for(i = 1; i <= 5; i++) {
        // Loop dalam untuk mencetak angka di setiap baris
        for(j = 1; j <= i; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}

