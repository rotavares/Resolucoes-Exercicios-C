/* 14) Escreva um programa que leia um número inteiro, maior ou
igual a zero, do usuário. Imprima o enésimo termo da
sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado
pela soma dos dois termos anteriores. Alguns termos dessa
sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */

#include <stdio.h>

int main() {
    int var1 = 0;
    int var2 = 1;
    int var3 = 1;
    int enesimo;
    printf("digite o valor = ");
    scanf("%d", &enesimo);
    for (int i = 0; i < enesimo; i++)
    {
        printf("%d ", var3);
        var3 = var2 + var1;
        var1 = var2;
        var2 = var3;
    }
    return 0;
}