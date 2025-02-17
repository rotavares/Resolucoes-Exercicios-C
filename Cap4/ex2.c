/* 2) Faça um programa que leia dois números e mostre o maior
deles. Se, por acaso, os dois números forem iguais, imprima a
mensagem “Números iguais”. */

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
    if (a == b) {
        printf("numeros iguais");
    } else {
        if (a > b)
        {
            printf("maior = %d", a);
        } else {
            printf("maior = %d", b);
        }
    }
    return 0;
}