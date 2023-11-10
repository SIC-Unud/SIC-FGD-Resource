#include <stdio.h>

int faktorial(int m)
{
    if (m == 1)
    {
        return 1;
    }
    else
    {
        return (m * faktorial(m - 1));
    }
}

int main()
{
    int x;
    printf("MENCARI FAKTORIAL DARI X!\n");
    printf("Masukan nilai x (bulat positif): ");
    scanf("%d", &x);
    printf("Faktorial dari %d = %d\n", x, faktorial(x));
    return 0;
}