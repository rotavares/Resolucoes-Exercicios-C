/* 4) Faça um programa que determine e mostre os cinco primeiros
múltiplos de 3 considerando números maiores que 0. */

#include <stdio.h>

int main() {
    int n;
    printf("digite o numero = ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (i % 3 == 0) 
        {
            printf("%d\n", i);
        }
    }
    return 0;
}