#include <stdio.h>

int main()
{
    char string[100];
    int contagem;
    fgets(string, 100, stdin);
    for (int i = 0; string[i] != '\0'; i++)
    {
        contagem = i;
    }
    printf("%d caracteres\n", contagem);
    return 0;
}