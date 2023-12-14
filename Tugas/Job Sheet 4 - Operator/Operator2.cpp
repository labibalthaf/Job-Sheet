/* created by Labib Althaf
              NIM 23343042
*/

#include <stdio.h>

int main() {
    char nama_pembeli[50], nama_barang[50];
    int harga_barang, jumlah_barang, harga_total;

    // Meminta input dari pengguna
    printf("Masukkan nama pembeli             : ");
    scanf("%s", nama_pembeli);
    printf("Masukkan nama barang              : ");
    scanf("%s", nama_barang);
    printf("Masukkan harga barang satuan      : ");
    scanf("%d", &harga_barang);
    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlah_barang);

    // Menghitung harga total
    harga_total = harga_barang * jumlah_barang;

    // Menampilkan hasil
    printf("==========================");
    printf("\nNama Pembeli             : %s\n", nama_pembeli);
    printf("Nama Barang              : %s\n", nama_barang);
    printf("Harga Barang Satuan      : %d\n", harga_barang);
    printf("Jumlah Barang yang Dibeli: %d\n", jumlah_barang);
    printf("Harga Total              : %d\n", harga_total);

    return 0;
}

