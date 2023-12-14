/* Created By Labib Althaf
              NIM 23343042
*/

#include <stdio.h>

int main() {
    double total_pembelian, diskon, cashback, total_harga;
    
    printf("Selamat Datang Di Toko TOSERBA\n");
    printf("Masukkan total pembelian (dalam Rupiah): ");
    scanf("%lf", &total_pembelian);

    if (total_pembelian <= 75000) {
        diskon = total_pembelian * 0.05;
    } else if (total_pembelian <= 125000) {
        diskon = total_pembelian * 0.15;
    } else {
        diskon = total_pembelian * 0.25;
        cashback = 5000;
    }

    total_harga = total_pembelian - diskon + cashback;

    printf("Diskon yang diberikan: Rp %.2lf\n", diskon);
    printf("Cashback yang diberikan: Rp %.2lf\n", cashback);
    printf("Total harga yang harus dibayar: Rp %.2lf\n", total_harga);

    return 0;
}

