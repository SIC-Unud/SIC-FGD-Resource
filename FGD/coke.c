#include <stdio.h>

int main()
{
    int tagihan = 50, input = 0, saldo = 0;
    do
    {
        printf("\n\nSisa yang harus dibayar: %d\n\n", (tagihan - saldo));
        printf("Masukkan koin: ");
        scanf("%d", &input);
        if ((input == 25) || (input == 10) || (input == 5))
        {
            saldo += input;
        }
        else
        {
            printf("\nKembalian: %d\nUang anda tidak sesuai!!!", input);
        }
    } while ((tagihan - saldo) >= 0);
    if (saldo > tagihan)
    {
        printf("\nKembalian: %d", (saldo - tagihan));
    }
}