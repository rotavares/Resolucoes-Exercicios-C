/* 11) Faça um algoritmo que leia um número positivo e imprima
seus divisores. Exemplo: Os divisores do número 66 são: 1, 2,
3, 6, 11, 22, 33 e 66. */

#include <stdio.h>

int main() {
    int num = 66;
    scanf("%d", &num);
    printf("divisores de %d sao: ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}