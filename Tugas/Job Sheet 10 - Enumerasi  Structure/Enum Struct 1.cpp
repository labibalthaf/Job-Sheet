/* Created By Labib Althaf
              NIM 23343042
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Struct untuk game
typedef struct {
    int target;
    int tebakan;
    int percobaan;
} Game;

// Fungsi untuk menghasilkan nomor acak antara 1 dan 20
int generateRandomNumber() {
    srand(time(NULL));
    return rand() % 20 + 1;
}

int main() {
    char playAgain;
    do {
        Game game;
        game.target = generateRandomNumber();
        game.percobaan = 0;

        printf("Komputer telah memilih nomor acak antara 1 dan 20.\n");

        do {
            printf("Masukkan tebakan Anda: ");
            scanf("%d", &game.tebakan);
            game.percobaan++;

            if(game.tebakan < game.target) {
                printf("Nomor saya lebih besar!\n");
            } else if(game.tebakan > game.target) {
                printf("Nomor saya lebih kecil!\n");
            }
        } while(game.tebakan != game.target);

        printf("Selamat, Anda benar! Anda menebak dalam %d percobaan.\n", game.percobaan);

        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &playAgain);
    } while(playAgain == 'y' || playAgain == 'Y');

    return 0;
}

