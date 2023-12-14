/* Created by Labib Althaf
              NIM 23343042
*/
#include <stdio.h>

int main() {
    int jumlah_mahasiswa, i;
    char nama_mahasiswa[50][50];

    // Meminta input jumlah mahasiswa
    printf("Input banyak siswa: ");
    scanf("%d", &jumlah_mahasiswa);

    // Meminta input nama mahasiswa
    for(i = 0; i < jumlah_mahasiswa; i++) {
        printf("Input nama mahasiswa %d: ", i+1);
        scanf("%s", nama_mahasiswa[i]);
    }

    // Menampilkan nama mahasiswa
    for(i = 0; i < jumlah_mahasiswa; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i+1, nama_mahasiswa[i]);
    }

    return 0;
}

