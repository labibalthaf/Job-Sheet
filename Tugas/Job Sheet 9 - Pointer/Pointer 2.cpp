/* Created By Labib Althaf
              NIM 23343042
*/
#include <stdio.h>
#include <string.h>

// Fungsi membalikkan kalimat
void balikKalimat(char* kalimat) {
    int len = strlen(kalimat); 
    int i;

    // Loop dari akhir kalimat ke awal kalimat
    for(i = len - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }
}

int main() {
    char kalimat[] = "HELLO";

    printf("Kalimat Masukan : %s\n", kalimat);
    printf("Kebalikannya : ");
    balikKalimat(kalimat);

    return 0;
}

