/** EL2208 Praktikum Pemecahan Masalah dengan C 2020/2021
*   Modul               : 3
*   Soal                : 1
*   Hari dan Tanggal    : 
*   Nama (NIM)          : 
*   Asisten (NIM)       : 
*   Nama File           : main.c
*   Deskripsi           : Deskripsi file ini.
*/

#include <stdio.h>
#include "ss2tf.h"

int main()
{
    // Deklarasi data
    float matrixA[2][2], matrixB[2][1], matrixC[1][2];

    // Input Data Matriks satu per satu
    inputMatrixData(...., ....);

    // Cetak Transfer Function (jangan diubah agar tidak salah autograde)
    printf("Transfer Function:\n\n");

    // Cetak Pembilang
    printNumerator(...., ....);

    // ----- untuk "per" pada pecahan (jangan diubah agar tidak salah autograde)
    printf("\n--------------------\n");

    // Cetak Penyebut
    printDenominator(...., ....);

    return 0;
}
