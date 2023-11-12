#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char string[100];
    printf("Masukan camelCase: ");
    gets(string);
    printf("camelCase: ");
    for (int i = 0; i < strlen(string); i++)
    {
        printf("%c", string[i]);
    }
    printf("snake_case: ");
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 65 && string[i] <= 90)
        {
            // printf("_%c", tolower(string[i]));
            printf("_%c", string[i] + 32);
        }
        else
        {
            printf("%c", string[i]);
        }
    }
}