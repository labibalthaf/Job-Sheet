/* Created By Labib Althaf
              NIM 23343042
*/              

#include <stdio.h>

int main() {

  char nama[100];

  printf("Hello, siapa nama lengkapmu? ");
  scanf("%[^\n]s", nama);

  printf("\nSelamat Datang %s dalam Pemrograman C!\n", nama);

  return 0;
}
