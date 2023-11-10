#include <stdio.h>
void CETAK();

void main()
{
    int A, B, T;
    A = 5;
    B = 2;
    T = A + B;
    CETAK();
}

void CETAK()
{
    printf("%d", T); // terjadi error, T tidak dikenal
}