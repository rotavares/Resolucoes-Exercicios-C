/* 7) Elabore um programa que peça ao usuário para digitar 10
valores. Some esses valores e apresente o resultado na tela. */

#include <stdio.h>

int main() {
    int n;
    int soma = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d# valor = ", i);
        scanf("%d", &n);
        soma += n;
    }
    printf("%d", soma);
    return 0;
}