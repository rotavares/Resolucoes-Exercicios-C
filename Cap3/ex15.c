/* 15) Faça um programa para ler um número inteiro positivo de
três dígitos. Em seguida, calcule e mostre o número formado
pelos dígitos invertidos do número lido. Exemplo:
Número lido = 123 Número gerado = 321 */

#include <stdio.h>

int main() {
    int n1, n2, n3, x;
    scanf("%d", &x);
    n1 = x / 1 % 10;
    n2 = x / 10 % 10;
    n3 = x / 100 % 10;
    printf("%d", n1);
    printf("%d", n2);
    printf("%d", n3);
    return 0;
}