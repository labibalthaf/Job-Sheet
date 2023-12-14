/* Created by Labib Althaf
              NIM 23343042
*/
#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];
    char correct_username[] = "hattori";
    char correct_password[] = "ninjahatori";

    // Meminta input username dan password dari pengguna
    printf("Masukkan username: ");
    scanf("%s", username);
    printf("Masukkan password: ");
    scanf("%s", password);

    // Memeriksa apakah username dan password benar
    if(strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        printf("Berhasil login\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}

