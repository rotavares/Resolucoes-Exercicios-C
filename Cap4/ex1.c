/* 1) Faça um programa que leia dois números e mostre qual deles
é o maior. */

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d\n%d", &a, &b);
    c = a > b ? a : b;
    printf("maior = %d", c); 
    return 0;
}