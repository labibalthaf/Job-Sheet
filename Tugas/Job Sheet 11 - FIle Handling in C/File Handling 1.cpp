/* Created by Labib Althaf
              NIM 23343042
*/
#include <stdio.h>

typedef struct {
    char nama[50];
    char nim[20];
    char jurusan[50];
    char prodi[50];
} Mahasiswa;

int main() {
    FILE *file;
    Mahasiswa mhs;
    int i, n;

    file = fopen("datamahasiswa.txt", "w");
    if (file == NULL) {
        printf("Tidak bisa membuat file.\n");
        return 1;
    }

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan data mahasiswa ke-%d\n", i);
        printf("Nama         : ");
        scanf(" %[^\n]", mhs.nama);
        printf("NIM          : ");
        scanf(" %[^\n]", mhs.nim);
        printf("Jurusan      : ");
        scanf(" %[^\n]", mhs.jurusan);
        printf("Program Studi: ");
        scanf(" %[^\n]", mhs.prodi);

        fprintf(file, "Data Mahasiswa ke-%d\n", i);
        fprintf(file, "Nama: %s\n", mhs.nama);
        fprintf(file, "NIM: %s\n", mhs.nim);
        fprintf(file, "Jurusan: %s\n", mhs.jurusan);
        fprintf(file, "Program Studi: %s\n\n", mhs.prodi);
    }

    fclose(file);

    return 0;
}

