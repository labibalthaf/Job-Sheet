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
# Job Sheet 6 - Flow Control: Loop

Loop digunakan untuk mengeksekusi kode secara berulang. 

## Perulangan For

Perulangan dengan jumlah yang sudah ditentukan.

```
for(init; condition; post) {
  // code to be executed
}
```

## Perulangan While

Perulangan selama kondisi bernilai TRUE. 

```
while(condition) {
  // code to be executed  
}
```

## Perulangan Do While

Sama dengan while, tapi minimal dieksekusi 1 kali.

```
do {
  // code to be executed
} while (condition);
```

## Nested Loop

Perulangan di dalam perulangan.

```
for(init; condition; post) {
  for(init; condition; post) {
    // code to be executed 
  }
}
```

