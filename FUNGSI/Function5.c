#include <stdio.h>
#include <conio.h>

int d = 3, e = 1;

void coba_lokal(int a, int b)
{
    int c = 0;
    int d = 10;
    int e;
    e = (a + b) * (c + d);
    printf("local a = %d\n", a);
    printf("local b = %d\n", b);
    printf("local c = %d\n", c);
    printf("local d = %d\n", d);
    printf("local e = %d\n", e);
}

void main()
{
    int a = 2;
    int b;
    b = 4;
    int c = 0;

    printf("global a = %d\n", a);
    printf("global b = %d\n\n", b);
    coba_lokal(a, b);
    printf("\nmain c = %d\n", c);
    printf("global d = %d\n", d);
    printf("global e = %d\n", e);
}