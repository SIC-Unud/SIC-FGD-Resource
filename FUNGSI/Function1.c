#include <stdio.h>
int LuasPersegiPjg(int p, int l);

int main()
{
    int p, l, L;
    printf("Program Luas Persegi Panjang\n");
    printf("Ketik Panjang : ");
    scanf("%d", &p);
    printf("Ketik Lebar : ");
    scanf("%d", &l);

    L = LuasPersegiPjg(p, l);

    printf("Luas Persegi Panjang = %d", L);

    return 0;
}

int LuasPersegiPjg(int p, int l)
{
    int Luas;
    Luas = p * l;
    return Luas;
}