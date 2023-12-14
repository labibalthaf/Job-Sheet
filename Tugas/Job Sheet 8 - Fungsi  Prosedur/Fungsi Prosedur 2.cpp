/* Created by Labib Althaf
              NIM 23343042
*/ 
#include <stdio.h>

float a, b;

float tambah(int a, int b) {
	return a + b;
}

float kurang(int a, int b) {
	return a - b;
}

float kali(int a, int b) {
	return a * b;
}

float bagi(int a, int b) {
	return a / b;
}

main() {
	
	printf ("Masukkan angka 1: ");
	scanf("%f", &a);
	
	printf("Masukkan angka 2: ");
	scanf("%f", &b); 
	
	printf("Hasil penjumlahan: %.2f\n", tambah(a, b));
	printf("Hasil pengurangan: %.2f\n", kurang(a, b));
    printf("Hasil perkalian: %.2f\n", kali(a, b));
    printf("Hasil pembagian: %.2f\n", bagi(a, b));

	
	return 0;

}
