# Profil Mahasiswa

- Nama: **Labib Althaf**
- NIM: **23343042**
- Kode Sesi: **202313430011**
- Dosen Pengampu: **Randi Proska Sandra, M.sc**

# Job Sheet 1 - Algoritma, Pemrograman & IDE

## Pendahuluan
Job sheet ini membahas tentang:
- Pengertian algoritma dan contohnya
- Perbedaan coding dan programming
- Pengertian bahasa pemrograman
- Pengenalan bahasa C
- Pengertian IDE (Integrated Development Environment)
- Persiapan pemrograman C

## Uraian Materi

### Algoritma
Algoritma adalah urutan langkah-langkah yang disusun secara sistematis dan logis untuk menyelesaikan suatu masalah atau mencapai suatu tujuan tertentu. Algoritma memiliki ciri-ciri:
- Terbatas (berhenti setelah sejumlah langkah)
- Langkah-langkah terdefinisi dengan jelas
- Memiliki input
- Memiliki output
- Bersifat efektif dan efisien
- Terstruktur

Contoh algoritma dalam kehidupan sehari-hari:
- Resep masakan
- Petunjuk perakitan perabot
- Petunjuk penggunaan alat elektronik

### Pemrograman
Pemrograman adalah proses penulisan kode agar dapat dipahami oleh komputer. Pemrograman membutuhkan algoritma dan bahasa pemrograman.

Perbedaan coding dan programming:
- Coding: menerjemahkan bahasa manusia ke mesin, cukup butuh text editor, menghasilkan bagian dari program.
- Programming: proses pengembangan software, membutuhkan alat analisis dan modeling, sudah ahli algoritma, menghasilkan aplikasi utuh.

### Bahasa Pemrograman
Bahasa pemrograman adalah kumpulan aturan untuk memberi perintah pada komputer agar menjalankan fungsi tertentu.

Jenis bahasa pemrograman berdasarkan kedekatan dengan mesin:
- Bahasa mesin
- Bahasa tingkat rendah
- Bahasa tingkat menengah
- Bahasa tingkat tinggi

### Pengenalan Bahasa C
Bahasa C dibuat oleh Dennis Ritchie untuk sistem operasi Unix. Kelebihan bahasa C:
- Mudah dipelajari pemula
- Sintaks mirip bahasa populer lainnya
- Portable dan fleksibel
- Terstruktur
- Termukuk bahasa tingkat menengah

### IDE
IDE adalah software untuk mengembangkan program, memiliki text editor, compiler, debugger dalam satu aplikasi. Contoh: DevC++, Visual Studio Code, CodeBlocks.

### Persiapan Pemrograman C
Dibutuhkan text editor dan compiler. Compiler bisa GCC, Clang, dll. Perlu set environment variable agar compiler dikenali di command prompt.

# Job Sheet 2 - Pemrograman Dasar C

## Struktur Dasar C
Struktur dasar program C terdiri dari:

### Bagian include
Header files (#include) untuk mengimport fungsi-fungsi pada file lain

### Main function
Fungsi wajib ada yang dieksekusi pertama kali. Diawali {} dan diakhiri {}. Mengembalikan nilai int (return 0) atau void.

### Statement
Perintah yang disertai titik koma (;) di akhir.

### Identifiers
Nama variabel, fungsi, dsb. Diawali huruf atau underscore. Bersifat case sensitive.

### Comments
Ada comment satu baris (//) dan multiline (/* ... */).

### Whitespace
Spasi, tab, newline untuk memisahkan statement.

## Input Output

### Output
- printf() -> mencetak ke layar sesuai format
- puts() -> mencetak string dan baris baru
- putchar() -> mencetak satu karakter

### Input
- scanf() -> meminta input sesuai format
- gets() -> input string (rawan overflow)
- fgets() -> input string dengan buffer size


# Job Sheet 3 - Variabel, Konstanta & Tipe Data

## Variabel
Variabel adalah tempat menyimpan nilai. Deklarasi variabel:

```c
tipe_data nama_variabel;
``` 

Aturan penamaan variabel:

- Tidak boleh diawali angka/simbol
- Tidak boleh menggunakan kata kunci bahasa C
- Case sensitive
- Gunakan underscore jika lebih dari satu suku kata

## Tipe Data

Tipe data dasar:

- `char`: 1 karakter
- `int`: bilangan bulat 
- `float`: bilangan desimal
- `double`: bilangan desimal lebih besar 

Tipe data khusus:

- `void`: tidak ada nilai

## Konstanta 

Nilai tetap yang tidak bisa diubah. Deklarasi konstanta:

```c
#define NAMA_KONSTANTA nilai
const tipe_data NAMA_KONSTANTA = nilai; 
```

Berikut adalah kode README yang Anda minta:

```markdown
# Job Sheet 4 - Operator

Operator adalah simbol yang digunakan untuk melakukan operasi tertentu.

Berdasarkan jumlah operand:
- Unary (1 operand)  
- Binary (2 operand)
- Ternary (3 operand)

## Operator Aritmatika

Melakukan operasi matematika. Contoh:

```c
+ - * / %
```

## Operator Penugasan 

Untuk memberi nilai pada variabel.

```c
= += -= *= /= %=
```

## Operator Perbandingan

Membandingkan nilai, menghasilkan true/false.

```c
> < == != >= <=
```

## Operator Logika

Melakukan AND, OR, NOT.

```c
&& || !
```

## Operator Bitwise

Melakukan operasi pada biner/bit.

```c
& | ^ ~ << >>
``` 
```

Berikut adalah kode README yang Anda minta:

```markdown
# Job Sheet 5 - Flow Control: Decision Making

Decision making adalah mengubah alur eksekusi program berdasarkan kondisi tertentu.

## If

Mengembangkan kode jika kondisi bernilai TRUE.

```c
if(condition) {
  // do something
}
```

## If Else 

Terdapat 2 kemungkinan alur berdasarkan kondisi.

```c
if(condition) {
  // Jika TRUE
} else {
  // Jika FALSE  
}
```

## If Else If

Beberapa kemungkinan alur berdasarkan beberapa kondisi.

```c
if(condition 1) {
  // Jika kondisi 1 TRUE
} else if(condition 2) {
  // Jika kondisi 2 TRUE
} else {
  // Jika semua kondisi FALSE
}
```

## Switch Case

Beberapa kemungkinan alur mirip nested if-else.

```c
switch(variable) {
  case value1: 
    // Jika variable == value1
    break;
  
  case value2:
    // Jika variable == value2
    break;
    
  default:
    // Jika tidak ada yang cocok
}
```

## Ternary Operator

Bentuk singkat dari if-else.

```c
variable = condition ? true : false;
```

 Baik, berikut adalah penjelasan dari job sheet flow control loop sebagai script README GitHub untuk file yang Anda berikan sebelumnya:

```

# Jobsheet 6 - Perulangan dalam Bahasa Pemrograman C

Perulangan atau looping digunakan untuk mengeksekusi kode secara berulang. Ada 4 jenis perulangan dalam bahasa C:

## 1. Perulangan For

Perulangan for digunakan jika jumlah perulangan sudah diketahui sebelumnya. 

```c
for(inisialisasi; kondisi; increment/decrement) {
   // kode yang dijalankan berulang 
}
```

Penjelasan:

- `inisialisasi` : Variabel untuk perulangan diinisialisasi
- `kondisi` : Kondisi perulangan, akan berhenti jika bernilai false 
- `increment/decrement` : Increment atau decrement variabel perulangan tiap iterasi

Contoh perulangan for untuk menampilkan angka 1 hingga 5:

```c
for(int i=1; i<=5; i++) {
  printf("%d\n", i); 
}
```

Pada contoh di atas, `i` diinisialisasi dengan nilai 1, lalu dilakukan perulangan selama `i` kurang dari sama dengan 5. Setiap perulangan `i` ditambah 1.

## 2. Perulangan While

Perulangan while digunakan jika jumlah perulangan belum diketahui pasti sebelumnya.

```c 
while(kondisi) {
  // kode yang dijalankan berulang
}
```

Perulangan dilakukan selama `kondisi` bernilai true. 

Contoh perulangan while untuk meminta input angka dari user hingga input 0:

```c
int input;
printf("Masukkan angka (ketik 0 untuk berhenti):\n");

scanf("%d", &input);
while(input != 0) {
  printf("Anda memasukkan angka %d\n", input);  
  scanf("%d", &input);
}
```

Perulangan akan terus dilakukan selama nilai yang dimasukkan user tidak sama dengan 0.

## 3. Perulangan Do While

Perulangan do while mirip dengan while, bedanya pengecekan kondisi dilakukan setelah melakukan perulangan.

```c
do {
  // kode yang dijalankan
} while(kondisi);
```

Dengan do while, minimal pasti akan menjalankan perulangan 1 kali walaupun kondisi tidak terpenuhi.

Contoh perulangan do while untuk menghitung mundur dari 10 ke 1:

```c  
int i = 10;
do {
  printf("%d\n", i--); 
} while(i > 0);
```

Perulangan dilakukan minimal sekali untuk mencetak nilai 10, meskipun kondisi tidak terpenuhi.

## 4. Perulangan Bersarang

Perulangan bersarang artinya perulangan di dalam perulangan. Bisa menggabungkan semua jenis perulangan.

Contoh perulangan for di dalam perulangan for:

```c
for(int i=1; i<=3; i++) {
  for(int j=1; j<=2; j++) {
    printf("%d %d\n", i, j); 
  }
}
```

Perulangan luar mengontrol nilai `i` dan perulangan dalam mengontrol nilai `j`.
```

# Jobsheet 7 - Array dalam Bahasa Pemrograman C

Array adalah struktur data yang digunakan untuk menyimpan sekumpulan data dalam satu tempat. Setiap data dalam array memiliki indeks yang digunakan untuk mengakses data tersebut.

## Deklarasi Array

```c
// deklarasi array
type arrayName[arraySize];

// contoh
int numbers[5]; 
char names[10];
```

Kita perlu tentukan tipe data dan ukuran array saat deklarasi array.

## Mengakses Nilai Array

Setiap data pada array memiliki indeks yang dimulai dari 0.

```c
int numbers[5] = {1, 2, 3, 4, 5}; 

// mengakses array
numbers[0]; // nilainya 1
numbers[3]; // nilainya 4
```

## Mengubah Nilai Array

Kita juga bisa mengubah nilai array pada indeks tertentu:

```c
numbers[0] = 10; 
```

Sekarang nilai pada indeks 0 berubah menjadi 10.

## Perulangan Array

Kita bisa mengakses semua nilai array menggunakan perulangan:

```c
for(int i = 0; i < 5; i++) {
  printf("Nilai: %d\n", numbers[i]); 
}
``` 

Dengan perulangan, semua data array akan diproses.
```

# Jobsheet 8 - Fungsi dan Prosedur dalam Bahasa Pemrograman C

Fungsi adalah blok kode yang dapat dipanggil berulang kali untuk menjalankan tugas tertentu. Fungsi digunakan untuk modularitas program.

## Deklarasi Fungsi

Berikut adalah contoh deklarasi fungsi dalam C:

```c
// fungsi tanpa parameter
void sayHello() {
  printf("Halo dunia!");
}

// fungsi dengan parameter
int kuadrat(int angka) {
  return angka * angka;
}
``` 

Kita tentukan:

- Tipe data return value (void jika tidak ada return value)
- Nama fungsi
- Parameter (opsional)

## Memanggil Fungsi

Untuk memanggil fungsi, cukup tulis nama fungsinya:

```c
int main() {

  // memanggil fungsi tanpa parameter
  sayHello();
  
  // memanggil fungsi dengan parameter
  int hasil = kuadrat(5);

}
```

## Pass by Value dan Reference 

C mendukung pass by value dan pass by reference:

```c
// pass by value
void fungsi(int angka) {
   angka *= 2; 
}

// pass by reference
void fungsi(int* angka) {
   *angka *= 2;  
}
```

# Jobsheet 9 - Pointer dalam Bahasa Pemrograman C

Pointer adalah variabel yang menyimpan alamat memori dari variabel lain. Pointer digunakan untuk mengakses data secara tidak langsung melalui alamat memori.

## Deklarasi Pointer

```c
// deklarasi pointer 
int* ptr;
```

Tambahkan tanda `*` untuk menandakan varibel pointer.

## Mengakses Nilai Melalui Pointer

```c
int num = 10;
int* ptr = &num; // ptr menyimpan alamat num

// akses nilai melalui pointer
printf("%d", *ptr); // nilainya 10
```

Gunakan operator `*` untuk mengakses nilai yang disimpan pada alamat pointer.

## Mengubah Nilai Melalui Pointer

```c 
*ptr = 20; // ubah nilai ke 20
```

Pointer juga bisa digunakan untuk mengubah nilai variabel aslinya.

## Pointer dan Fungsi

Pointer digunakan untuk pass by reference ke fungsi:

```c
void kuadrat(int* nilai) {
  *nilai *= *nilai; // akses melalui pointer
}

int main() {
  int num = 5;
  kuadrat(&num);
  
  printf("%d", num); // nilainya 25
}
```

Dengan pointer, nilai variabel asli ikut berubah dalam fungsi.
```

# Jobsheet - Enumerasi dan Struktur Data dalam Bahasa Pemrograman C

## Enumerasi

Enumerasi (enum) adalah tipe data khusus yang berisi himpunan konstanta bernama.

Contoh deklarasi enum:

```c
enum month {
  JAN = 1, 
  FEB,
  MAR,
  // etc
};
```

Enum didefinisikan dengan kata kunci `enum` diikuti dengan nama enum dan daftar konstantanya di dalam kurung kurawal.

Contoh penggunaan:

```c
enum month myMonth;

myMonth = JAN;
```

## Struktur Data (Struct) 

Struktur data digunakan untuk menyimpan lebih dari satu nilai berbeda jenis data dalam satu tempat.

Contoh deklarasi struct:

```c
struct Mahasiswa {
  char nama[100];
  int nim; 
  char jurusan[50];
};
``` 

Struct didefinisikan dengan kata kunci `struct` diikuti nama struct dan daftar anggotanya.

Contoh penggunaan:

```c 
struct Mahasiswa mhs1; 

strcpy(mhs1.nama, "John"); 
mhs1.nim = 101;
```

# Job Sheet 11 - File Handling dalam Bahasa Pemrograman C

File Handling digunakan untuk membaca dan menulis data ke file sehingga data tetap tersimpan meskipun program ditutup.

## Jenis File
- File text: txt, csv, html. Mudah dibaca dan ditulis. 
- File binary: exe, bin. Sulit dibaca tapi bisa menyimpan data lebih banyak.

## Membaca File
Gunakan fungsi fopen() dengan mode "r". Kembalian fopen adalah pointer ke file. Fungsi fgets() untuk membaca per baris. Baca semua baris dengan perulangan.

Contoh:
```c
FILE *fptr = fopen("file.txt","r"); 
char buff[255];

while(fgets(buff,255,fptr)!=NULL) {
  printf("%s",buff);
}
```

## Menulis File
Gunakan fungsi fopen() dengan mode "w" atau "a". Fungsi fputs() untuk menulis ke file.

Contoh:
```c  
FILE *fptr = fopen("file.txt","w");
fputs("Baris 1",fptr);
fputs("Baris 2",fptr);
```
