/* 14) Faça um programa que leia três caracteres do
tipo char e depois os imprima um em cada linha.
Use um único comando printf() para isso. */

#include <stdio.h>

int main() {
    char c, d, e;
    c = getchar();
    d = getchar();
    e = getchar();
    printf("%c\n%c\n%c", c, d, e);
    return 0; 
}