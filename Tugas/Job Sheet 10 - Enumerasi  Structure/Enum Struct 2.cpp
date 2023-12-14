/* Created By Labib Althaf
              NIM 23343042
*/
#include <stdio.h>

// Enumerasi untuk zodiak
typedef enum {
    ARIES, TAURUS, GEMINI, CANCER, LEO, VIRGO, LIBRA, SCORPIO, SAGITTARIUS, CAPRICORN, AQUARIUS, PISCES
} Zodiak;

// Struct untuk tanggal
typedef struct {
    int tanggal;
    int bulan;
    int tahun;
} Tanggal;

// Fungsi untuk mendapatkan zodiak dari tanggal
Zodiak getZodiak(Tanggal t) {
    if ((t.tanggal >= 21 && t.bulan == 3) || (t.tanggal <= 19 && t.bulan == 4)) {
        return ARIES;
    } else if ((t.tanggal >= 20 && t.bulan == 4) || (t.tanggal <= 20 && t.bulan == 5)) {
        return TAURUS;
    } else if ((t.tanggal >= 21 && t.bulan == 5) || (t.tanggal <= 20 && t.bulan == 6)) {
        return GEMINI;
    } else if ((t.tanggal >= 21 && t.bulan == 6) || (t.tanggal <= 22 && t.bulan == 7)) {
        return CANCER;
    } else if ((t.tanggal >= 23 && t.bulan == 7) || (t.tanggal <= 22 && t.bulan == 8)) {
        return LEO;
    } else if ((t.tanggal >= 23 && t.bulan == 8) || (t.tanggal <= 22 && t.bulan == 9)) {
        return VIRGO;
    } else if ((t.tanggal >= 23 && t.bulan == 9) || (t.tanggal <= 22 && t.bulan == 10)) {
        return LIBRA;
    } else if ((t.tanggal >= 23 && t.bulan == 10) || (t.tanggal <= 21 && t.bulan == 11)) {
        return SCORPIO;
    } else if ((t.tanggal >= 22 && t.bulan == 11) || (t.tanggal <= 21 && t.bulan == 12)) {
        return SAGITTARIUS;
    } else if ((t.tanggal >= 22 && t.bulan == 12) || (t.tanggal <= 19 && t.bulan == 1)) {
        return CAPRICORN;
    } else if ((t.tanggal >= 20 && t.bulan == 1) || (t.tanggal <= 18 && t.bulan == 2)) {
        return AQUARIUS;
    } else {
        return PISCES;
    }
}

int main() {
    Tanggal t;
    printf("Masukkan tanggal lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &t.tanggal, &t.bulan, &t.tahun);

    Zodiak z = getZodiak(t);

    printf("Zodiak Anda adalah : ");
    switch(z) {
        case ARIES: 
		printf("ARIES\n"); 
		break;
		
        case TAURUS: 
		printf("TAURUS\n"); 
		break;
		
        case GEMINI: 
		printf("GEMINI\n"); 
		break;
		
        case CANCER: 
		printf("CANCER\n"); 
		break;
		
        case LEO: 
		printf("LEO\n"); 
		break;
		
        case VIRGO: 
		printf("VIRGO\n"); 
		break;
		
        case LIBRA: 
		printf("LIBRA\n"); 
		break;
		
        case SCORPIO: 
		printf("SCORPIO\n"); 
		break;
		
        case SAGITTARIUS: 
		printf("SAGITTARIUS\n"); 
		break;
		
        case CAPRICORN: 
		printf("CAPRICORN\n"); 
		break;
		
        case AQUARIUS: 
		printf("AQUARIUS\n"); 
		break;
		
        case PISCES: 
		printf("PISCES\n"); 
		break;
    }

    return 0;
}

