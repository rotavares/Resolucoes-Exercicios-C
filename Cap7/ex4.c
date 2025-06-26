#include <stdio.h>

int main()
{
    char string[20];
    int contagem;
    fgets(string, 20, stdin);
    for (int i = 0; string[i] != '\0'; i++)
    {
        contagem++;
    }
    for (int i = contagem - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
    printf("\n");
    return 0;
}