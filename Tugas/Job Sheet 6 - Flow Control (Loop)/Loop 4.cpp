/* Created By Labib Althaf
              NIM 23343042
*/              

#include <stdio.h>

int main() {
    int pilihan;
    float saldo = 175000, setoran, penarikan;

    // Loop luar untuk menjalankan menu ATM secara berulang
    do {
        printf("ATM\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Masukkan pilihan (1/2/3/4): ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                printf("Saldo: Rp %.2f\n", saldo);
                break;
            case 2:
                printf("Masukkan jumlah setoran: ");
                scanf("%f", &setoran);
                saldo += setoran;
                break;
            case 3:
                printf("Masukkan jumlah penarikan: ");
                scanf("%f", &penarikan);
                if(saldo - penarikan < 50000) {
                    printf("Saldo minimal yang harus disisakan adalah Rp 50.000\n");
                } else {
                    saldo -= penarikan;
                }
                break;
            case 4:
                printf("Terima kasih telah menggunakan ATM kami.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while(pilihan != 4); // Loop akan berjalan selama pengguna tidak memilih 'Exit'

    return 0;
}

