/* 17) Escreva um programa que leia um número inteiro e mostre o
seu complemento bit a bit. */

#include <stdio.h>

int main() {
    unsigned char n;
    scanf ("%d", &n);
    printf("%d", ~n);
    return 0;
}