/* 3) Faça um programa que leia um número inteiro N e depois
imprima os N primeiros números naturais ímpares. */

#include <stdio.h>

int main() {
    int n;
    printf("digite o numero = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}