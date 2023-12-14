/* Created by Labib Althaf
              NIM 23343042
*/ 
#include <stdio.h>
#define PI 3.14

float jari_jari;

float luas(float jari_jari) {
	return PI * jari_jari * jari_jari;
}

float keliling(float jari_jari) {
	return 2 * PI * jari_jari;
}

main() {
		
	printf ("Masukkan jari-jari: ");
	scanf("%f", &jari_jari);
	
	
	printf("Hasil luas lingkaran: %.2f cm\n", luas(jari_jari));
	printf("Hasil keliling lingkaran: %.2f cm\n", keliling(jari_jari));
	
	return 0;

}
