#include <stdio.h>

int main()
{
    char string[20];
    char string2[20];
    int contagem;
    fgets(string, 20, stdin);
    for (int i = 0; string[i] != '\0'; i++)
    {
        contagem++;
    }
    for (int i = contagem -1, j = 0; i >= 0, j <= contagem; i--, j++)
    {
        string2[j] = string[i];
    }
    for (int i = 0; string[i] < '\0'; i++)
    {
        string[i] = string2[i];
    }
    fputs(string, stdout);
    printf("\n");
    return 0;
}