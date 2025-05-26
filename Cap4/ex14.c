#include <stdio.h>

int main()
{
    int num, contagem = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num % 5 == 0)
    {
        contagem++;
    }
    if (num % 3 == 0)
    {
        contagem++;
    }
    if (contagem == 0)
    {
        printf("Este numero nao e divisivel por 3 ou 5.");
    }
    else if (contagem == 1)
    {
        printf("Este numero e divisivel apenas por um dos numeros");
    }
    else
    {
        printf("Este numero e divisivel pelo dois numeros");
    }
    return 0;
}