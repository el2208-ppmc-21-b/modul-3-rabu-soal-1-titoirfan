/*  EL2208 Praktikum Pemecahan Masalah dengan C 2020/2021
*   Modul            : 3
*   Percobaan        : -
*   Hari dan Tanggal : -
*   Nama (NIM)       : - 
*   Asisten (NIM)    : Andhika Rahadian (13218030)
*   Nama File        : -
*   Deskripsi        : Program Utama Translasi StateSpace -> Transfer Function
*/

#include <stdio.h>
#include "ss2tf.h"
// MAKEFILE SCRIPT :
// gcc -o main main.c ss2tf.c -lm

#define MAX_DATA 8
#define asciiFixed 97

int main()
{
    // Deklarasi dan Persiapan matriks State Space
    float matrixA[2][2], matrixB[2][1], matrixC[1][2];
    // Untuk kebutuhan Increment character
    int asciiTemp = asciiFixed;
    float dataBuf = 0;

    // Input Matrix Data one by one
    for (int i = 0; i < MAX_DATA; ++i)
    {
        printf("Masukkan nilai %c : ", asciiTemp);
        scanf("%f", &dataBuf);
        inputMatrixData(matrixA, matrixB, matrixC, &dataBuf, (char)asciiTemp);

        ++asciiTemp;
    }

    // Cetak Hasil Transfer Function
    printf("Transfer Function:\n\n");
    printNumerator(&matrixA[0][0], &matrixA[0][1], &matrixA[1][0], &matrixA[1][1], &matrixB[0][0], &matrixB[1][0], &matrixC[0][0], &matrixC[0][1]);
    printf("\n--------------------\n");
    printDenominator(matrixA, matrixB, matrixC);

}
