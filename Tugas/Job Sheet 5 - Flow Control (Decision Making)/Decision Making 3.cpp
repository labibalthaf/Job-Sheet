/* Created By Labib Althaf
              NIM 23343042
*/

#include <stdio.h>

int main (){
	char pilihan;
	double hasil;
	double r, s, p, l, t;
	double PI = 3.14;
	
	printf("Pilih rumus luas: \n");
	printf("a.Bola\n");
	printf("b.Kubus\n");
	printf("c.Balok\n");
	printf("d.Tabung\n");
	printf("Masukkan pilihan (a/b/c/d): ");
	scanf("%c", &pilihan);
	
	switch (pilihan) {
		case'a':
			printf("Masukkan jari-jari bola: ");
			scanf("%lf", &r);
			hasil = 4 * PI * r * r;
			printf("Luas Permukaan Bola: %.2lf", hasil);
			break;
			
		case 'b':
			printf("Masukkan panjang sisi kubus: ");
			scanf("%lf", &s);
			hasil = 6 * s * s;
			printf("Luas permukaan kubus: %.2lf", hasil);
			break;
			
		case 'c':
			printf("Masukkan panjang, lebar, dan tinggi: ");
			scanf("%lf %lf %lf", &p, &l, &t);
			hasil = 2 * (p * l + p * t + l * t);
			printf("Luas permukaan balok: %.2lf", hasil);
			break;
			
		case 'd':
		 	printf("Masukkan jari-jari dan tinggi: ");
		 	scanf("%lf %lf", &r, &t);
		 	hasil = 2 * PI * r * (r + t);
		 	break;
		 	
		default:
			printf("Maaf, pilihan Anda tidak valid");
			return 1;
			
			
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
