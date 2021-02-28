#include <stdio.h>
#include "ss2tf.h"
#define asciiFixed 97

void inputMatrixData(float _matA[2][2], float _matB[2][1], float _matC[1][2], float *data, char elmt)
{
    int x = (int)elmt;
    x -= asciiFixed;
    if (x < 4)
    {
        _matA[x / 2][x % 2] = *data;
    }
    if (x >= 4 && x < 6)
    {
        _matB[x % 4][0] = *data;
    }
    if (x >= 6)
    {
        _matC[0][x % 6] = *data;
    }
}
void printNumerator(float *a, float *b, float *c, float *d, float *e, float *f, float *g, float *h)
{
    float m = *e * *g + *h * *f;
    float n = -1 * ((*e) * (*d) * (*g) - (*h) * (*c) * (*e) - (*b) * (*g) * (*f) + (*h) * (*a) * (*f));
    // Ada komponen s
    if (m < 0)
    {
        m = -1 * m;
        printf(" - %.2fs", m);
    }
    else if (m > 0)
    {
        printf("%.2fs", m);
    }

    // Tidak ada komponen s
    if (m == 0)
    {
        if (n < 0)
        {
            n = -1 * n;
            printf(" - %.2f", n);
        }
        else if (n > 0)
        {
            printf("%.2f", n);
        }
    }
    else
    {
        if (n < 0)
        {
            n = -1 * n;
            printf(" - %.2f", n);
        }
        else if (n > 0)
        {
            printf(" + %.2f", n);
        }
    }
}
void printDenominator(float _matA[2][2], float _matB[2][1], float _matC[1][2])
{
    printf("s^2");
    float b = -1 * (_matA[0][0] + _matA[1][1]);
    float c = (_matA[0][0] * _matA[1][1]) - (_matA[1][0] * _matA[0][1]);

    // Ketika b negatif, b harus dipositifkan agar dapat di printf negatif
    if (b < 0)
    {
        b = -1 * b;
        printf(" - %.2fs", b);
    }
    else if (b > 0)
    {
        printf(" + %.2fs", b);
    }

    if (c < 0)
    {
        c = -1 * c;
        printf(" - %.2f", c);
    }
    else if (c > 0)
    {
        printf(" + %.2f", c);
    }
}
