/* Created By Labib Althaf
              NIM 23343042
*/
#include <stdio.h>

// Struct untuk data mahasiswa
typedef struct {
    char npm[10];
    char nama[50];
    char tgl_lahir[11];
    char alamat[100];
    char hp[15];
} Mahasiswa;

int main() {
    Mahasiswa mhs[100]; // Array untuk menyimpan data mahasiswa
    int i = 0;
    char lagi;

    do {
        printf("NPM       : ");
        scanf("%s", mhs[i].npm);
        printf("NAMA      : ");
        scanf(" %[^\n]", mhs[i].nama); 
        printf("TGL LAHIR : ");
        scanf("%s", mhs[i].tgl_lahir);
        printf("ALAMAT    : ");
        scanf(" %[^\n]", mhs[i].alamat); 
        printf("HP        : ");
        scanf("%s", mhs[i].hp);

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &lagi);
        i++;
    } while(lagi == 'y' || lagi == 'Y');

    printf("\nData Mahasiswa:\n");
    for(int j = 0; j < i; j++) {
    	// untuk mencetak string dengan lebar tertentu dan rata kiri
        printf("%-10s %-20s %-15s %-20s %-15s\n", mhs[j].npm, mhs[j].nama, mhs[j].tgl_lahir, mhs[j].alamat, mhs[j].hp);
    }

    return 0;
}

