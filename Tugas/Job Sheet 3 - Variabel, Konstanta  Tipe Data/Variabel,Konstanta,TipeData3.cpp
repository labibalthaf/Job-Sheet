/* created by Labib Athaf
            NIM 23343042
*/            

#include <stdio.h>

int main() {
    // Mendefinisikan variabel
    float d = 12; // Diameter bola
    float r = d / 2; // Radius bola
    float phi = 3.14159; // Aproximasi Pi
    float V, A;

    // Menghitung volume bola
    V = (4.0/3.0) * phi * r * r * r;

    // Menghitung luas permukaan bola
    A = 4 * phi * r * r;

    // Menampilkan hasil perhitungan
    printf("Volume bola = %.2f cm^3\n", V);
    printf("Luas permukaan bola = %.2f cm^2\n", A);

    return 0;
}

