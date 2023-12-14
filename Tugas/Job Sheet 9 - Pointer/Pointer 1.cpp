/* Created By Labib Althaf
              NIM 23343042
*/
#include <stdio.h>

int main() {
    char *str = "BORLAND";
    int len = 7; // Panjang string
    int i;

    // Loop dari akhir string ke awal
    for(i = len-1; i >= 0; i--) {
        printf("%s\n", str + i);
    }

    return 0;
}

