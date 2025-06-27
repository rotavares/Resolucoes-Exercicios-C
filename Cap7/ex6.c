#include <stdio.h>

int main()
{
    char str1[50];
    char str2;
    int contagem, quantidade;
    printf("Insira uma palavra: ");
    fgets(str1, 50, stdin);
    printf("Insira um caractere: ");
    str2 = getchar();
    for (int i = 0; str1[i] != '\0'; i++)
    {
        quantidade = i;
    }
    for (int i = 0; i < quantidade; i++)
    {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
        {
            contagem++;
            str1[i] = str2;
        }
    }
    printf("%c\n%d\n%s", str2, contagem, str1);
    return 0;
}