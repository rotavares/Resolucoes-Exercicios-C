/* 1) Faça um programa que leia um número inteiro positivo N e
imprima todos os números naturais de 0 até N em ordem
crescente. */

#include <stdio.h>

int main() {
    int n;
    printf("digite o numero = ");
    scanf("%d", &n);
    for (int i= 0; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}