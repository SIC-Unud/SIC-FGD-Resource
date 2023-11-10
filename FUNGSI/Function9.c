#include <stdio.h>
long int fak_rekursif(int N); /* Prototype fungsi */

int main()
{
    int N;

    N = 5;
    printf("%d faktorial = %1d\n", N, fak_rekursif(N));
    return 0;
}

long int fak_rekursif(int N) /* Definisi Fungsi */
{
    long int F;
    if (N <= 1)
    {
        return 1;
    }
    else
    {
        F = N * fak_rekursif(N - 1);
        return F;
    }
}
