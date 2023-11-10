#include <stdio.h>
#include <stdlib.h>

int luas(int *a, int *b);

int main()
{
    int p, l;
    p = 4;
    l = 3;
    printf("Luas segiempat = %d\n", luas(&p, &l));
    printf("Nilai p = %d dan Nilai l = %d", p, l);
    return 0;
}

int luas(int *a, int *b)
{
    int L;
    L = *a * *b;
    return L;
}