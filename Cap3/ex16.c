/* 16) Escreva um programa que leia um número inteiro e mostre a
multiplicação e a divisão desse número por dois (utilize os
operadores de deslocamento de bits). */

#include <stdio.h>

int main() {
    int n, mul, div;
    scanf("%d", &n);
    mul =  n << 1;
    div = n >> 1;
    printf("%d multiplicado por dois igual a %d\n%d dividido por dois igual a %d", n, mul, n, div);
}