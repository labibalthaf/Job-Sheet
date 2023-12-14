/* Created by Labib Althaf
              NIM 23343042
*/ 
#include <stdio.h>

// Fungsi rekursif untuk perkalian
int perkalian(int a, int b) {
    // Kasus dasar: jika b sama dengan 0, hasil perkalian adalah 0
    if(b == 0) {
        return 0;
    }
    // Kasus rekursif: a ditambah dengan hasil perkalian a dan b-1
    else {
        return a + perkalian(a, b-1);
    }
}

int main() {
    int a = 12, b = 6;
    printf("Hasil perkalian %d x %d = %d\n", a, b, perkalian(a, b));
    return 0;
}

