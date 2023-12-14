/* Created by Labib Althaf
              NIM 23343042
*/

#include <stdio.h>

int main() {
    int i;

    printf("Deret bilangan genap: ");
    for(i = 0; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\nDeret bilangan ganjil: ");
    for(i = 0; i <= 50; i++) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

