/* 13) Faça um programa que leia um caractere do
tipo char e depois o imprima entre aspas duplas.
Assim, se o caractere lido for a letra A, deverá
ser impresso “A”. */

#include <stdio.h>

int main() {
    char c = 'A';
    printf("\"%c\"", c);
    return 0;
}