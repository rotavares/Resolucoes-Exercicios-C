/* 18) Elabore um programa que leia dois números inteiros e exiba o
deslocamento, à esquerda e à direita, do primeiro número pelo
segundo. */

#include <stdio.h>

int main () {
    int n1, n2;
    scanf("%d\n%d", &n1, &n2);
    printf("\n%d", n1 << n2);
    printf("\n%d", n1 >> n2);
    return 0;
}