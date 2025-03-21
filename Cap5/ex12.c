#include <stdio.h>

int main() {
    int num, soma = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            soma += i;
        }
    }
        soma = soma - num;
     printf("soma dos divisores = %d", soma);
}