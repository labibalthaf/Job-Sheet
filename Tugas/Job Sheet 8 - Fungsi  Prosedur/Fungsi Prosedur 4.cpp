/* Created by Labib Althaf
              NIM 23343042
*/ 
#include <stdio.h>

// Fungsi untuk menghitung besarnya potongan
float potong(float total_pembelian) {
    float diskon = 0.0;
    if (total_pembelian > 1000000 && total_pembelian < 3000000) {
        diskon = 0.2; // Diskon 20%
    } else if (total_pembelian >= 3000000) {
        diskon = 0.35; // Diskon 35%
    }

    return total_pembelian * diskon;
}

int main() {
    float total_pembelian, diskon_besar, total_dibayarkan;
    
    printf("Program Hitung Potongan\n");
    
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &total_pembelian);
    
    diskon_besar = potong(total_pembelian);
    total_dibayarkan = total_pembelian - diskon_besar;
    
    printf("Besar Diskon : %.2f\n", diskon_besar);
    printf("Besar Yang Harus Dibayarkan : %.2f\n", total_dibayarkan);
    
    return 0;
}
