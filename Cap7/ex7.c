#include <stdio.h>

int main()
{
    char string[20];
    int quantidade;
    scanf("%s", string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        quantidade++;
    }
    for (int i = 0, j = quantidade - 1; i <= j; i++, j--)
    {
        if (string[i] != string[j])
        {
            printf("nao e um palindromo\n");
            return 0;
        }
    }
    printf("e um palindromo\n");
    return 0;
}