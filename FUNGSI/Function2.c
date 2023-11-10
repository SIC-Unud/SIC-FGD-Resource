#include <stdio.h>
#include <conio.h>

/*----- Fungsi untuk memutlakan nilai negatif -----*/

double Absolut(double x) /* Definisi fungsi */
{
    // Badan Fungsi
    if (x < 0)
    {
        x = -x;
    }
    return x;
}

int main()
{
    float Nilai;

    Nilai = -123.45;
    printf("%7.2f nilai mutlaknya adalah %7.2f\n", Nilai, Absolut(Nilai));
    getch();
}