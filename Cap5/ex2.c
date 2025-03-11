/* 2) Faça um programa que leia um número inteiro positivo N e
imprima todos os números naturais de 0 até N em ordem
decrescente. */

#include <stdio.h>

int main() {
    int n;
    printf("digite o numero = ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}