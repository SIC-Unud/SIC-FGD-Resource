#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(char input[]);
int count_words(char input[]);
int count_sentences(char input[]);

int main(void)
{
    char input[1000];
    printf("Text: ");
    gets(input);

    // declare variables
    float letters = count_letters(input);
    float words = count_words(input);
    float sentences = count_sentences(input);

    float L = (letters / words) * 100;
    float S = (sentences / words) * 100;
    int index = (round((0.0588 * L) - (0.296 * S) - 15.8));

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters(char input[])
{

    int count = 0;
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        // if (((input[i] >= 65) && (input[i] <= 90)) || ((input[i] >= 97) && (input[i] <= 122)))
        if (isalpha(input[i]))
        {
            count++;
        }
    }
    return count;
}

int count_words(char input[])
{
    int count = 0;
    for (int i = 0, n = strlen(input); i < n; i++)
    {

        // if (input[i] == ' ' || input[i] == '\n' || input[i] == '\t')
        if (isspace(input[i]))
        {
            count++;
        }
    }
    return count;
}

int count_sentences(char input[])
{
    int count = 0;
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (input[i] == '.' || input[i] == '!' || input[i] == '?')
        {
            count++;
        }
    }
    return count;
}
