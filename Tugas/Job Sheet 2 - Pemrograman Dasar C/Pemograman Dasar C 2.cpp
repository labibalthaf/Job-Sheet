/* Created By Labib Althaf
              NIM 23343042
*/  

#include <stdio.h>

int main() {

  char nama[100];
  char nim[15];
  char prodi[50];
  char fakultas[50];
  
  float praktikum, uts, uas, nilaiAkhir; 
  
  
  printf("Nama    : ");
  scanf("%[^\n]s", nama);
  
  printf("NIM     : ");
  scanf("%s", nim);

  printf("Prodi   : ");
  scanf("%s", prodi);

  printf("Fakultas: ");
  scanf("%s", fakultas);

  printf("Nilai Praktikum: ");
  scanf("%f", &praktikum);

  printf("Nilai UTS      : ");
  scanf("%f", &uts);

  printf("Nilai UAS      : "); 
  scanf("%f", &uas);

  nilaiAkhir = 0.3*praktikum + 0.3*uts + 0.4*uas;
  
  printf("\nNama    : %s", nama);
  printf("\nNIM     : %s", nim);
  printf("\nProdi   : %s", prodi);
  printf("\nFakultas: %s", fakultas);

  printf("\nNilai Praktikum: %.2f", praktikum);
  printf("\nNilai UTS      : %.2f", uts); 
  printf("\nNilai UAS      : %.2f", uas);
  
  printf("\nNilai Akhir    : %.2f", nilaiAkhir);

  return 0;
}
